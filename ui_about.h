/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *autInfoLabel;
    QLabel *versionLabel;
    QLabel *authorsLabel;
    QLabel *disclaimerLabel;
    QLabel *appLabel;
    QLabel *verInfoLabel;
    QVBoxLayout *verticalLayout;
    QLabel *logoLabel;
    QPushButton *closeButton;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(513, 576);
        about->setMinimumSize(QSize(461, 473));
        about->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(about);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        autInfoLabel = new QLabel(about);
        autInfoLabel->setObjectName(QString::fromUtf8("autInfoLabel"));
        autInfoLabel->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(autInfoLabel, 2, 0, 1, 1);

        versionLabel = new QLabel(about);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        gridLayout->addWidget(versionLabel, 1, 1, 1, 1);

        authorsLabel = new QLabel(about);
        authorsLabel->setObjectName(QString::fromUtf8("authorsLabel"));

        gridLayout->addWidget(authorsLabel, 2, 1, 1, 1);

        disclaimerLabel = new QLabel(about);
        disclaimerLabel->setObjectName(QString::fromUtf8("disclaimerLabel"));
        disclaimerLabel->setWordWrap(true);

        gridLayout->addWidget(disclaimerLabel, 3, 0, 1, 2);

        appLabel = new QLabel(about);
        appLabel->setObjectName(QString::fromUtf8("appLabel"));

        gridLayout->addWidget(appLabel, 0, 0, 1, 2);

        verInfoLabel = new QLabel(about);
        verInfoLabel->setObjectName(QString::fromUtf8("verInfoLabel"));

        gridLayout->addWidget(verInfoLabel, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        logoLabel = new QLabel(about);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8("music_baner.png")));

        verticalLayout->addWidget(logoLabel);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        closeButton = new QPushButton(about);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMaximumSize(QSize(100, 16777215));
        closeButton->setLayoutDirection(Qt::RightToLeft);
        closeButton->setAutoExclusive(true);

        gridLayout_2->addWidget(closeButton, 3, 0, 1, 1);


        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "Dialog", nullptr));
        autInfoLabel->setText(QCoreApplication::translate("about", "Authors: ", nullptr));
        versionLabel->setText(QCoreApplication::translate("about", "Version", nullptr));
        authorsLabel->setText(QCoreApplication::translate("about", "Authors", nullptr));
        disclaimerLabel->setText(QCoreApplication::translate("about", "License", nullptr));
        appLabel->setText(QCoreApplication::translate("about", "App name", nullptr));
        verInfoLabel->setText(QCoreApplication::translate("about", "Version:", nullptr));
        logoLabel->setText(QString());
        closeButton->setText(QCoreApplication::translate("about", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
