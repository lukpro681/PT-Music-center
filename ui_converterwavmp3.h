/********************************************************************************
** Form generated from reading UI file 'converterwavmp3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERWAVMP3_H
#define UI_CONVERTERWAVMP3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Converter
{
public:
    QGridLayout *gridLayout;
    QPushButton *addFileButton;
    QTextEdit *fileTextEdit;
    QPushButton *cancelButton;
    QPushButton *convertButton;

    void setupUi(QDialog *Converter)
    {
        if (Converter->objectName().isEmpty())
            Converter->setObjectName(QString::fromUtf8("Converter"));
        Converter->resize(343, 148);
        Converter->setMinimumSize(QSize(343, 148));
        Converter->setMaximumSize(QSize(343, 148));
        gridLayout = new QGridLayout(Converter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addFileButton = new QPushButton(Converter);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));

        gridLayout->addWidget(addFileButton, 0, 0, 1, 2);

        fileTextEdit = new QTextEdit(Converter);
        fileTextEdit->setObjectName(QString::fromUtf8("fileTextEdit"));

        gridLayout->addWidget(fileTextEdit, 1, 0, 1, 2);

        cancelButton = new QPushButton(Converter);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 0, 1, 1);

        convertButton = new QPushButton(Converter);
        convertButton->setObjectName(QString::fromUtf8("convertButton"));

        gridLayout->addWidget(convertButton, 2, 1, 1, 1);


        retranslateUi(Converter);

        QMetaObject::connectSlotsByName(Converter);
    } // setupUi

    void retranslateUi(QDialog *Converter)
    {
        Converter->setWindowTitle(QCoreApplication::translate("Converter", "Dialog", nullptr));
        addFileButton->setText(QCoreApplication::translate("Converter", "Choose .wav file", nullptr));
        cancelButton->setText(QCoreApplication::translate("Converter", "Cancel", nullptr));
        convertButton->setText(QCoreApplication::translate("Converter", "Convert to .mp3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Converter: public Ui_Converter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERWAVMP3_H
