/********************************************************************************
** Form generated from reading UI file 'converterbase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERBASE_H
#define UI_CONVERTERBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ConverterBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *convertButton;
    QTextEdit *fileTextEdit;
    QPushButton *cancelButton;
    QPushButton *addFileButton;

    void setupUi(QDialog *ConverterBase)
    {
        if (ConverterBase->objectName().isEmpty())
            ConverterBase->setObjectName(QString::fromUtf8("ConverterBase"));
        ConverterBase->resize(386, 148);
        ConverterBase->setMinimumSize(QSize(386, 148));
        ConverterBase->setMaximumSize(QSize(386, 148));
        gridLayout = new QGridLayout(ConverterBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        convertButton = new QPushButton(ConverterBase);
        convertButton->setObjectName(QString::fromUtf8("convertButton"));

        gridLayout->addWidget(convertButton, 2, 1, 1, 1);

        fileTextEdit = new QTextEdit(ConverterBase);
        fileTextEdit->setObjectName(QString::fromUtf8("fileTextEdit"));

        gridLayout->addWidget(fileTextEdit, 1, 0, 1, 2);

        cancelButton = new QPushButton(ConverterBase);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 0, 1, 1);

        addFileButton = new QPushButton(ConverterBase);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));

        gridLayout->addWidget(addFileButton, 0, 0, 1, 2);


        retranslateUi(ConverterBase);

        QMetaObject::connectSlotsByName(ConverterBase);
    } // setupUi

    void retranslateUi(QDialog *ConverterBase)
    {
        ConverterBase->setWindowTitle(QCoreApplication::translate("ConverterBase", "Dialog", nullptr));
        convertButton->setText(QCoreApplication::translate("ConverterBase", "Convert", nullptr));
        cancelButton->setText(QCoreApplication::translate("ConverterBase", "Cancel", nullptr));
        addFileButton->setText(QCoreApplication::translate("ConverterBase", "Choose .wav file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConverterBase: public Ui_ConverterBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERBASE_H
