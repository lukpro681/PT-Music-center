// mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QFileDialog>
#include <QDirIterator>
#include <QListWidgetItem>
#include <QList>
#include <QTimer>
#include "wsettings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow   //kompozyt w relcji kompozycji z klasami ConverterBase, About oraz Wsettings
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void populatePlaylist(const QString &path, const QStringList &formats);
    void loadSettings();
    void updatePlaylist();
    void defaultsort();


    bool state;

    void updateCurrentTrackTitle();



    void onPlayerCurrentMediaChanged(const QMediaContent &media);
private slots:
    void on_playButton_clicked();
    void on_stopButton_clicked();
    void on_setFolderButton_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_positionSlider_sliderMoved(int position);
    void on_actionSettings_triggered();

    void on_refreshButton_clicked();

    void on_ShuffleButton_toggled(bool checked);

    void on_RepeatButton_toggled(bool checked);

    void on_NextButton_clicked();

    void on_PrevButton_clicked();

    void onCurrentRowChanged(int currentRow);

    void on_action_wav_to_mp3_triggered();



    void on_actionAbout_triggered();

    void on_action_wav_to_ogg_triggered();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    Wsettings settingsDialog;

    QStringList supportedFormats = settingsDialog.getFormats();

    QMediaPlaylist *originalPlaylist;  // Przechowuje oryginalną playlistę
    int originalIndex;

};

#endif // MAINWINDOW_H
