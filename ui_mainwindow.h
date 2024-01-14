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
    QWidget *centralwidget;
    QListWidget *listWidget;
    QSlider *positionSlider;
    QPushButton *playButton;
    QPushButton *stopButton;
    QPushButton *setFolderButton;
    QPushButton *refreshButton;
    QPushButton *PrevButton;
    QPushButton *NextButton;
    QRadioButton *ShuffleButton;
    QCheckBox *RepeatButton;
    QLabel *titleLabel;
    QMenuBar *menubar;
    QMenu *menuGeneral;
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 30, 611, 391));
        positionSlider = new QSlider(centralwidget);
        positionSlider->setObjectName(QString::fromUtf8("positionSlider"));
        positionSlider->setGeometry(QRect(50, 490, 681, 16));
        positionSlider->setOrientation(Qt::Horizontal);
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(340, 440, 80, 24));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(520, 440, 80, 24));
        setFolderButton = new QPushButton(centralwidget);
        setFolderButton->setObjectName(QString::fromUtf8("setFolderButton"));
        setFolderButton->setGeometry(QRect(670, 30, 91, 24));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(670, 60, 91, 24));
        PrevButton = new QPushButton(centralwidget);
        PrevButton->setObjectName(QString::fromUtf8("PrevButton"));
        PrevButton->setGeometry(QRect(250, 440, 80, 24));
        NextButton = new QPushButton(centralwidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setGeometry(QRect(430, 440, 80, 24));
        ShuffleButton = new QRadioButton(centralwidget);
        ShuffleButton->setObjectName(QString::fromUtf8("ShuffleButton"));
        ShuffleButton->setGeometry(QRect(160, 440, 80, 24));
        RepeatButton = new QCheckBox(centralwidget);
        RepeatButton->setObjectName(QString::fromUtf8("RepeatButton"));
        RepeatButton->setGeometry(QRect(610, 440, 80, 24));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(120, 510, 501, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuGeneral = new QMenu(menubar);
        menuGeneral->setObjectName(QString::fromUtf8("menuGeneral"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGeneral->menuAction());
        menuGeneral->addAction(actionSettings);
        menuGeneral->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        playButton->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        setFolderButton->setText(QCoreApplication::translate("MainWindow", "Add Folder(s)", nullptr));
        refreshButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        PrevButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        NextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        ShuffleButton->setText(QCoreApplication::translate("MainWindow", "Shuffle", nullptr));
        RepeatButton->setText(QCoreApplication::translate("MainWindow", "Repeat", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "lbl", nullptr));
        menuGeneral->setTitle(QCoreApplication::translate("MainWindow", "General", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
