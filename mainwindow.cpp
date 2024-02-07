// mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wsettings.h"
#include "converterbase.h"
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

    connect(player, &QMediaPlayer::positionChanged, this, [&](qint64 position){     //connect odpowiedzialny za dynamiczne nadawanie wartości w kontrolce positionSlider
        ui->positionSlider->setValue(position);
    });

    connect(player, &QMediaPlayer::durationChanged, this, [&](qint64 duration){     //connect odpowiedzialny za zmianę długości slidera w zależności od długości utworu
        ui->positionSlider->setRange(0, duration);
    });

    connect(ui->RepeatButton, &QAbstractButton::toggled, this, &MainWindow::on_RepeatButton_toggled);   //connect odpowiedzialny za powtarzanie utworu w pętli
     loadSettings();    //Załadowanie danych z pliku settings.json

    connect(&settingsDialog, &Wsettings::settingsApplied, this, &MainWindow::updatePlaylist);   //connect odpowiedzialny za zapisanie ustawień w oknie settings

    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), this, SLOT(onCurrentRowChanged(int)));          //
                                                                                                            //connecty odpowiedzialne za zmianę nazwy aktualnie
     connect(player, &QMediaPlayer::currentMediaChanged, this, &MainWindow::onPlayerCurrentMediaChanged);   //odtwarzanego utworu w kontrolce titleLabel

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPlayerCurrentMediaChanged(const QMediaContent &media)    //slot odpowiedzialny za zmianę nazwy aktualnie odtwarzanego utworu w kontrolce titleLabel
{
    if(!ui->ShuffleButton->isChecked())
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
}


void MainWindow::on_playButton_clicked() //slot odpowiedzialny za przycisk odtwarzający oraz pauzujący utwór
{
    if(state == 1){     //pauza
        qDebug("PAUSE");
        player->pause();
        state = 0;
    }

    else{
    qDebug("PLAY");     //odtwarzaj
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

void MainWindow::on_stopButton_clicked()    //slot odpowiedzialny za całkowite zatrzymanie utworu(timer zeruje się)
{
        qDebug("STAAAAAAWP");
        ui->titleLabel->clear();
        player->stop();
        state = 0;

}

void MainWindow::on_setFolderButton_clicked() //wgranie tymczasowego folderu z plikami dźwiękowymi
{
    qDebug("addFolder");
    QString folderPath = QFileDialog::getExistingDirectory(this, tr("Select Music Folder"));
    if (!folderPath.isEmpty()) {
        populatePlaylist(folderPath, settingsDialog.getFormats());
    }
}

void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item) //wybranie odtwarzanego utworu tzw. doubleclickiem
{
    qDebug("DOUBLE CLICK");
    playlist->setCurrentIndex(ui->listWidget->row(item));
    updateCurrentTrackTitle();
    player->play();
    state = 1;


}

void MainWindow::on_positionSlider_sliderMoved(int position) //dynamiczne ustawianie pozycji slidera
{
    player->setPosition(position);
}

void MainWindow::populatePlaylist(const QString &path, const QStringList &formats) //odczyt plików dźwiękowych i wstawienie do listWidget z pliku konfiguracji json
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
void MainWindow::on_actionSettings_triggered() //otwiera okno ustwaień
    {
    qDebug("Opening Settings");
    Wsettings *newsettings = new Wsettings(this);
    newsettings->setWindowIcon(QIcon("music.ico"));
    newsettings->setWindowTitle("Settings");
    newsettings->show();

};

    void MainWindow::loadSettings() //ładowanie ustawień
{
    qDebug("Loading Settings");
    settingsDialog.loadSettings();
    QStringList folders = settingsDialog.getFolders();
    QStringList formats = settingsDialog.getFormats();
    for (const QString &folder : folders) {
        populatePlaylist(folder, formats);
    }
}

void MainWindow::updatePlaylist() //tworzy pętle dla populatePlaylist ,która wywołuje tę funkcję
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

void MainWindow::updateCurrentTrackTitle()  //aktualizacja nazwy obecnie odtwarzanego utworu w przypadku użycia previous i next
{
    int currentRow = ui->listWidget->currentRow();
    if(currentRow >= 0 && currentRow < ui->listWidget->count()) {
        QString filename = ui->listWidget->item(currentRow)->text();
        ui->titleLabel->setText(filename);
    }
}


void MainWindow::on_refreshButton_clicked() // odświerzenie listy utworów
{
    qDebug("REFRESH");
    updatePlaylist();
}


void MainWindow::on_ShuffleButton_toggled(bool checked) // odtwarzanie losowe utworów z listy
{
    if (checked) {

        playlist->shuffle();
        ui->titleLabel->setText(tr("Random Playing"));

            ui->NextButton->setDisabled(true);
            ui->PrevButton->setDisabled(true);
            ui->playButton->setDisabled(true);
            ui->RepeatButton->setDisabled(true);
            ui->stopButton->setDisabled(true);

        player->play();
    } else {
        ui->NextButton->setDisabled(false);
        ui->PrevButton->setDisabled(false);
        ui->playButton->setDisabled(false);
        ui->RepeatButton->setDisabled(false);
        ui->stopButton->setDisabled(false);
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
    }
}


void MainWindow::on_RepeatButton_toggled(bool checked) //przycisk do powtarzania obecnego utworu w loopie
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


void MainWindow::on_NextButton_clicked() //następny utwór
{
    int nextIndex = playlist->nextIndex();

    if (nextIndex != -1) {
        // Odtwarzaj następny plik
        playlist->setCurrentIndex(nextIndex);
        ui->titleLabel->setText(ui->listWidget->item(nextIndex)->text());
        player->play();

    }
}


void MainWindow::on_PrevButton_clicked() //poprzedni utwór
{
    int prevIndex = playlist->previousIndex();

    if (prevIndex != -1) {
        // Odtwarzaj następny plik
        playlist->setCurrentIndex(prevIndex);
        ui->titleLabel->setText(ui->listWidget->item(prevIndex)->text());
        player->play();

    }
}

void MainWindow::onCurrentRowChanged(int currentRow)    //slot odpowiedzialny za zmianę nazwy aktualnie odtwarzanego utworu w kontrolce titleLabel
{
        {
        qDebug("AUTO NEXT INDEX");
            playlist->setCurrentIndex(ui->listWidget->row(ui->listWidget->currentItem()));
        updateCurrentTrackTitle();

        }
}


void MainWindow::on_actionAbout_triggered() //otwarcie okna z informacjami o aplikacji
{
    qDebug("Opening about");
    about *newabout = new about(this);
    newabout->setWindowIcon(QIcon("music.ico"));
    newabout->setWindowTitle("About Music Center");
    newabout->show();
}



void MainWindow::on_action_wav_to_ogg_triggered()   //otwarcie okna z konwersją z .wav do .ogg
{
    ConverterBase *converter = new ConverterWavOgg(this);
    converter->setWindowIcon(QIcon("music.ico"));
    converter->setWindowTitle(tr(".wav to .ogg converter"));
    converter->exec();
}


void MainWindow::on_action_wav_to_mp3_triggered()   //otwarcie okna z konwersją z .wav do .mp3
{
    ConverterBase *converter = new ConverterWavMp3(this);
    converter->setWindowIcon(QIcon("music.ico"));
    converter->setWindowTitle(tr(".wav to .mp3 converter"));
    converter->exec();
}

