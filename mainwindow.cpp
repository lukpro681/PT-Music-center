// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wsettings.h"
#include "converterwavmp3.h"
#include "converterwavogg.h"
#include "about.h"
#include <QSettings>
#include <QDebug>
#include <QMessageBox>
#include <QMediaMetaData>

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

    connect(ui->RepeatButton, &QAbstractButton::toggled, this, &MainWindow::on_RepeatButton_toggled);
     loadSettings();

    connect(&settingsDialog, &Wsettings::settingsApplied, this, &MainWindow::updatePlaylist);

    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), this, SLOT(onCurrentRowChanged(int)));

     connect(player, &QMediaPlayer::currentMediaChanged, this, &MainWindow::onPlayerCurrentMediaChanged);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPlayerCurrentMediaChanged(const QMediaContent &media)
{
    // Sprawdzenie, czy aktualne medium nie jest puste
    if (!media.isNull()) {
        // Pobranie indeksu aktualnie odtwarzanego utworu
        int currentIndex = playlist->currentIndex();
        if (currentIndex >= 0 && currentIndex < ui->listWidget->count()) {
            // Zaznaczenie kolejnego indeksu w kontrolce listWidget
            ui->listWidget->setCurrentRow(currentIndex);
        }
    }
}


void MainWindow::on_playButton_clicked()
{
    if(state == 1){
        qDebug("PAUSE");
        player->pause();
        state = 0;
    }

    else{
    qDebug("PLAY");
        if (playlist->currentIndex() < 0) {
        playlist->setCurrentIndex(0); }
        else {
            playlist->setCurrentIndex(ui->listWidget->currentRow());
        }
    state = 1;
        player->play();
    ui->titleLabel->setText(ui->listWidget->currentItem()->text());
    }

}

void MainWindow::on_stopButton_clicked()
{
        qDebug("STAAAAAAWP");
        ui->titleLabel->clear();
        player->stop();
        state = 0;

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
    updateCurrentTrackTitle();
    //ui->titleLabel->setText(ui->listWidget->item(playlist->currentIndex())->text());
    player->play();
    state = 1;
    //onCurrentRowChanged(ui->listWidget->row(item));


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

void MainWindow::updateCurrentTrackTitle()
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow >= 0 && currentRow < ui->listWidget->count()) {
        QString filename = ui->listWidget->item(currentRow)->text();
        ui->titleLabel->setText(filename);
    }
}


void MainWindow::on_refreshButton_clicked()
{
    qDebug("REFRESH");
    updatePlaylist();
}


void MainWindow::on_ShuffleButton_toggled(bool checked)
{
    if (checked) {

        playlist->shuffle();

    } else {

        // Wyłącz tryb losowego odtwarzania
        playlist->setPlaybackMode(QMediaPlaylist::Sequential);

        // Przywróć oryginalny indeks
        playlist->setCurrentIndex(originalIndex);

        // Zatrzymaj odtwarzanie aktualnej playlisty
        player->stop();

        // Przywróć oryginalną playlistę
        player->setPlaylist(playlist);

        // Rozpocznij odtwarzanie od oryginalnego indeksu
        playlist->setCurrentIndex(originalIndex);
      //  playlist->setCurrentIndex(0);
       // player->play();
    }
}


void MainWindow::on_RepeatButton_toggled(bool checked)
{
    if (checked) {
        // Włącz tryb powtarzania
        if (ui->ShuffleButton->isChecked()) {
            // Jeśli shuffle jest włączony, ustaw tryb na Loop
            playlist->setPlaybackMode(QMediaPlaylist::Loop);
        } else {
            // W przeciwnym razie ustaw tryb na CurrentItemInLoop
            playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        }
    } else {
        // Wyłącz tryb powtarzania
        if (ui->ShuffleButton->isChecked()) {
            // Jeśli shuffle jest włączony, ustaw tryb na Random
            playlist->setPlaybackMode(QMediaPlaylist::Random);
        } else {
            // W przeciwnym razie ustaw tryb na Sequential
            playlist->setPlaybackMode(QMediaPlaylist::Sequential);
        }
    }
}


void MainWindow::on_NextButton_clicked()
{
    int nextIndex = playlist->nextIndex();

    if (nextIndex != -1) {
        // Odtwarzaj następny plik
        playlist->setCurrentIndex(nextIndex);
        ui->titleLabel->setText(ui->listWidget->item(nextIndex)->text());
        player->play();

    }
}


void MainWindow::on_PrevButton_clicked()
{
    int prevIndex = playlist->previousIndex();

    if (prevIndex != -1) {
        // Odtwarzaj następny plik
        playlist->setCurrentIndex(prevIndex);
        ui->titleLabel->setText(ui->listWidget->item(prevIndex)->text());
        player->play();

    }
}

void MainWindow::onCurrentRowChanged(int currentRow)
{
        {
        qDebug("AUTO NEXT INDEX");
            playlist->setCurrentIndex(ui->listWidget->row(ui->listWidget->currentItem()));
        updateCurrentTrackTitle();

        }
}



void MainWindow::on_action_wav_to_mp3_triggered()
{
        qDebug("Opening Converter .wav to .mp3");
        Converter *newconverter = new Converter(this);
        newconverter->setWindowIcon(QIcon("music.ico"));
        newconverter->setWindowTitle("Convert .wav to .mp3");
        newconverter->show();
}




void MainWindow::on_actionAbout_triggered()
{
    qDebug("Opening about");
    about *newabout = new about(this);
    newabout->setWindowIcon(QIcon("music.ico"));
    newabout->setWindowTitle("About Music Center");
    newabout->show();
}


void MainWindow::on_action_wav_to_ogg_triggered()
{
    qDebug("Opening Converter .wav to .ogg");
    converterWavOgg *convWavOgg = new converterWavOgg(this);
    convWavOgg->setWindowIcon(QIcon("music.ico"));
    convWavOgg->setWindowTitle("Convert .wav to .ogg");
    convWavOgg->show();

}






void MainWindow::on_actionConverter_triggered()
{

}

