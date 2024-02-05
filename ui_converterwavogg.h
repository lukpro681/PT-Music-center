/********************************************************************************
** Form generated from reading UI file 'converterwavogg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERWAVOGG_H
#define UI_CONVERTERWAVOGG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_converterWavOgg
{
public:
    QGridLayout *gridLayout;
    QPushButton *addFileButton;
    QTextEdit *fileTextEdit;
    QPushButton *cancelButton;
    QPushButton *convertButton;

    void setupUi(QDialog *converterWavOgg)
    {
        if (converterWavOgg->objectName().isEmpty())
            converterWavOgg->setObjectName(QString::fromUtf8("converterWavOgg"));
        converterWavOgg->resize(316, 148);
        converterWavOgg->setMinimumSize(QSize(316, 148));
        converterWavOgg->setMaximumSize(QSize(316, 148));
        gridLayout = new QGridLayout(converterWavOgg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addFileButton = new QPushButton(converterWavOgg);
        addFileButton->setObjectName(QString::fromUtf8("addFileButton"));

        gridLayout->addWidget(addFileButton, 0, 0, 1, 2);

        fileTextEdit = new QTextEdit(converterWavOgg);
        fileTextEdit->setObjectName(QString::fromUtf8("fileTextEdit"));

        gridLayout->addWidget(fileTextEdit, 1, 0, 1, 2);

        cancelButton = new QPushButton(converterWavOgg);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 2, 0, 1, 1);

        convertButton = new QPushButton(converterWavOgg);
        convertButton->setObjectName(QString::fromUtf8("convertButton"));

        gridLayout->addWidget(convertButton, 2, 1, 1, 1);


        retranslateUi(converterWavOgg);

        QMetaObject::connectSlotsByName(converterWavOgg);
    } // setupUi

    void retranslateUi(QDialog *converterWavOgg)
    {
        converterWavOgg->setWindowTitle(QCoreApplication::translate("converterWavOgg", "Dialog", nullptr));
        addFileButton->setText(QCoreApplication::translate("converterWavOgg", "Choose .wav file", nullptr));
        cancelButton->setText(QCoreApplication::translate("converterWavOgg", "Cancel", nullptr));
        convertButton->setText(QCoreApplication::translate("converterWavOgg", "Convert to .ogg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class converterWavOgg: public Ui_converterWavOgg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERWAVOGG_H
