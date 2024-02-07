/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSettings;
    QAction *actionAbout;
    QAction *action_wav_to_mp3;
    QAction *action_wav_to_ogg;
    QAction *actionConverter;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QSlider *positionSlider;
    QLabel *infoLabelPlaying;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *ShuffleButton;
    QPushButton *PrevButton;
    QPushButton *playButton;
    QPushButton *NextButton;
    QPushButton *stopButton;
    QCheckBox *RepeatButton;
    QPushButton *refreshButton;
    QPushButton *setFolderButton;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuGeneral;
    QMenu *menuConvert;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("music.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        action_wav_to_mp3 = new QAction(MainWindow);
        action_wav_to_mp3->setObjectName(QString::fromUtf8("action_wav_to_mp3"));
        action_wav_to_ogg = new QAction(MainWindow);
        action_wav_to_ogg->setObjectName(QString::fromUtf8("action_wav_to_ogg"));
        actionConverter = new QAction(MainWindow);
        actionConverter->setObjectName(QString::fromUtf8("actionConverter"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        positionSlider = new QSlider(centralwidget);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::SpanningRole, positionSlider);

        infoLabelPlaying = new QLabel(centralwidget);
        infoLabelPlaying->setObjectName(QString::fromUtf8("infoLabelPlaying"));

        formLayout->setWidget(1, QFormLayout::LabelRole, infoLabelPlaying);

        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, titleLabel);


        gridLayout->addLayout(formLayout, 8, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ShuffleButton = new QRadioButton(centralwidget);
        ShuffleButton->setObjectName(QString::fromUtf8("ShuffleButton"));

        horizontalLayout_2->addWidget(ShuffleButton);

        PrevButton = new QPushButton(centralwidget);
        PrevButton->setObjectName(QString::fromUtf8("PrevButton"));

        horizontalLayout_2->addWidget(PrevButton);

        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));

        horizontalLayout_2->addWidget(playButton);

        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));

        horizontalLayout_2->addWidget(NextButton);

        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));

        horizontalLayout_2->addWidget(stopButton);

        RepeatButton = new QCheckBox(centralwidget);
        RepeatButton->setObjectName(QString::fromUtf8("RepeatButton"));

        horizontalLayout_2->addWidget(RepeatButton);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));

        gridLayout->addWidget(refreshButton, 8, 2, 1, 1);

        setFolderButton = new QPushButton(centralwidget);
        setFolderButton->setObjectName(QString::fromUtf8("setFolderButton"));

        gridLayout->addWidget(setFolderButton, 5, 2, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuGeneral = new QMenu(menubar);
        menuGeneral->setObjectName(QString::fromUtf8("menuGeneral"));
        menuConvert = new QMenu(menubar);
        menuConvert->setObjectName(QString::fromUtf8("menuConvert"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGeneral->menuAction());
        menubar->addAction(menuConvert->menuAction());
        menuGeneral->addAction(actionSettings);
        menuGeneral->addAction(actionAbout);
        menuConvert->addAction(action_wav_to_mp3);
        menuConvert->addAction(action_wav_to_ogg);
        menuConvert->addAction(actionConverter);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        action_wav_to_mp3->setText(QCoreApplication::translate("MainWindow", ".wav to .mp3", nullptr));
        action_wav_to_ogg->setText(QCoreApplication::translate("MainWindow", ".wav to .ogg", nullptr));
        actionConverter->setText(QCoreApplication::translate("MainWindow", "Converter", nullptr));
        infoLabelPlaying->setText(QCoreApplication::translate("MainWindow", "Playing:", nullptr));
        titleLabel->setText(QString());
        ShuffleButton->setText(QCoreApplication::translate("MainWindow", "Shuffle", nullptr));
        PrevButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        RepeatButton->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        setFolderButton->setText(QCoreApplication::translate("MainWindow", "Add Folder(s)", nullptr));
        menuGeneral->setTitle(QCoreApplication::translate("MainWindow", "General", nullptr));
        menuConvert->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
