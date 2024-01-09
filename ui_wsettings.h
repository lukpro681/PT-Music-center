/********************************************************************************
** Form generated from reading UI file 'wsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WSETTINGS_H
#define UI_WSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Wsettings
{
public:
    QTextEdit *folderPathTextEdit;
    QLineEdit *formatsLineEdit;
    QPushButton *saveSettingsButton;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QPushButton *addFolderButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Wsettings)
    {
        if (Wsettings->objectName().isEmpty())
            Wsettings->setObjectName(QString::fromUtf8("Wsettings"));
        Wsettings->resize(827, 526);
        folderPathTextEdit = new QTextEdit(Wsettings);
        folderPathTextEdit->setObjectName(QString::fromUtf8("folderPathTextEdit"));
        folderPathTextEdit->setGeometry(QRect(290, 50, 391, 71));
        formatsLineEdit = new QLineEdit(Wsettings);
        formatsLineEdit->setObjectName(QString::fromUtf8("formatsLineEdit"));
        formatsLineEdit->setGeometry(QRect(290, 180, 401, 31));
        saveSettingsButton = new QPushButton(Wsettings);
        saveSettingsButton->setObjectName(QString::fromUtf8("saveSettingsButton"));
        saveSettingsButton->setGeometry(QRect(710, 470, 80, 24));
        cancelButton = new QPushButton(Wsettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(620, 470, 80, 24));
        okButton = new QPushButton(Wsettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(530, 470, 80, 24));
        addFolderButton = new QPushButton(Wsettings);
        addFolderButton->setObjectName(QString::fromUtf8("addFolderButton"));
        addFolderButton->setGeometry(QRect(429, 470, 91, 24));
        label = new QLabel(Wsettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(128, 190, 111, 20));
        label_2 = new QLabel(Wsettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(138, 70, 101, 20));

        retranslateUi(Wsettings);

        QMetaObject::connectSlotsByName(Wsettings);
    } // setupUi

    void retranslateUi(QDialog *Wsettings)
    {
        Wsettings->setWindowTitle(QCoreApplication::translate("Wsettings", "Dialog", nullptr));
        saveSettingsButton->setText(QCoreApplication::translate("Wsettings", "Apply", nullptr));
        cancelButton->setText(QCoreApplication::translate("Wsettings", "Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("Wsettings", "OK", nullptr));
        addFolderButton->setText(QCoreApplication::translate("Wsettings", "Add Folder(s)", nullptr));
        label->setText(QCoreApplication::translate("Wsettings", "Supported formats", nullptr));
        label_2->setText(QCoreApplication::translate("Wsettings", "Searched folders", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wsettings: public Ui_Wsettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSETTINGS_H
