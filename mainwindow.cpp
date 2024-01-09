// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wsettings.h"
#include <QSettings>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    player(new QMediaPlayer(this)),
    playlist(new QMediaPlaylist(this)),
    settingsDialog(new Wsettings(this))
{





    ui->setupUi(this);

    player->setPlaylist(playlist);

    connect(player, &QMediaPlayer::positionChanged, this, [&](qint64 position){
        ui->positionSlider->setValue(position);
    });

    connect(player, &QMediaPlayer::durationChanged, this, [&](qint64 duration){
        ui->positionSlider->setRange(0, duration);
    });


     loadSettings();

    connect(&settingsDialog, &Wsettings::settingsApplied, this, &MainWindow::updatePlaylist);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_playButton_clicked()
{
    qDebug("PLAY");
    if (playlist->currentIndex() < 0)
        playlist->setCurrentIndex(0);

        player->play();
}

void MainWindow::on_stopButton_clicked()
{
        qDebug("STAAAAAAWP");
    player->stop();
}

void MainWindow::on_setFolderButton_clicked()
{
    qDebug("addFolder");
    QString folderPath = QFileDialog::getExistingDirectory(this, tr("Select Music Folder"));
    if (!folderPath.isEmpty()) {
        populatePlaylist(folderPath, settingsDialog.getFormats());
    }
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    qDebug("DOUBLE CLICK");
    playlist->setCurrentIndex(ui->listWidget->row(item));
    player->play();

}

void MainWindow::on_positionSlider_sliderMoved(int position)
{
    player->setPosition(position);
}

void MainWindow::populatePlaylist(const QString &path, const QStringList &formats)
{
    qDebug("populatePlaylist");
    QDirIterator it(path, formats, QDir::Files, QDirIterator::Subdirectories);
    while (it.hasNext()) {
        it.next();
        QFileInfo fileInfo = it.fileInfo();
        playlist->addMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
        ui->listWidget->addItem(fileInfo.fileName());

    }
}
void MainWindow::on_actionSettings_triggered()
    {
    qDebug("Opening Settings");
    Wsettings *newsettings = new Wsettings(this);
    newsettings->setWindowIcon(QIcon("music.ico"));
    newsettings->setWindowTitle("Settings");
    newsettings->show();

};

    void MainWindow::loadSettings()
{
    qDebug("Loading Settings");
    settingsDialog.loadSettings();
    QStringList folders = settingsDialog.getFolders();
    QStringList formats = settingsDialog.getFormats();
    for (const QString &folder : folders) {
        populatePlaylist(folder, formats);
    }
}

void MainWindow::updatePlaylist()
{
    qDebug("Updating Playlist");
    playlist->clear();
    ui->listWidget->clear();
    QStringList folders = settingsDialog.getFolders();
    QStringList formats = settingsDialog.getFormats();
    for (const QString &folder : folders) {
        qDebug("FOR POPULATE");
        populatePlaylist(folder, formats);
    }
}

void MainWindow::on_refreshButton_clicked()
{
    qDebug("REFRESH");
    updatePlaylist();
}

