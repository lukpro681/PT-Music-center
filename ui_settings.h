/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QTextEdit *folderPathTextEdit;
    QLineEdit *formatsLineEdit;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QString::fromUtf8("settings"));
        settings->resize(834, 607);
        folderPathTextEdit = new QTextEdit(settings);
        folderPathTextEdit->setObjectName(QString::fromUtf8("folderPathTextEdit"));
        folderPathTextEdit->setGeometry(QRect(330, 40, 401, 51));
        formatsLineEdit = new QLineEdit(settings);
        formatsLineEdit->setObjectName(QString::fromUtf8("formatsLineEdit"));
        formatsLineEdit->setGeometry(QRect(360, 150, 113, 24));

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
