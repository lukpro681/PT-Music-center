#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Converter
{
public:
    QLabel *infoLabel;
    QTextEdit *fileTextEdit;
    QPushButton *convertButton;
    QPushButton *addFileButton;

    void setupUi(QDialog *Converter)
    {
        if (Converter->objectName().isEmpty())
            Converter->setObjectName(QString::fromUtf8("Converter"));
        Converter->resize(624, 400);
        infoLabel = new QLabel(Converter);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(50, 60, 251, 16));
        fileTextEdit = new QTextEdit(Converter);
        fileTextEdit->setObjectName(QString::fromUtf8("cileTextEdit"));
        fileTextEdit->setGeometry(QRect(30, 120, 281, 31));
        convertButton = new QPushButton(Converter);
        convertButton->setObjectName(QString::fromUtf8("convertButton"));
        convertButton->setGeometry(QRect(230, 160, 80, 24));
        addFileButton = new QPushButton(Converter);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
        addFileButton->setGeometry(QRect(30, 160, 80, 24));

        retranslateUi(Converter);

        QMetaObject::connectSlotsByName(Converter);
    } // setupUi

    void retranslateUi(QDialog *Converter)
    {
        Converter->setWindowTitle(QCoreApplication::translate("Converter", "Dialog", nullptr));
        infoLabel->setText(QCoreApplication::translate("Converter", "TextLabel", nullptr));
        convertButton->setText(QCoreApplication::translate("Converter", "Convert", nullptr));
        addFileButton->setText(QCoreApplication::translate("Converter", "Add File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Converter: public Ui_Converter {};
} // namespace Ui

QT_END_NAMESPACE

