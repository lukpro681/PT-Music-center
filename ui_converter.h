/********************************************************************************
** Form generated from reading UI file 'converter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTER_H
#define UI_CONVERTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Converter
{
public:

    void setupUi(QDialog *Converter)
    {
        if (Converter->objectName().isEmpty())
            Converter->setObjectName(QString::fromUtf8("Converter"));
        Converter->resize(400, 300);

        retranslateUi(Converter);

        QMetaObject::connectSlotsByName(Converter);
    } // setupUi

    void retranslateUi(QDialog *Converter)
    {
        Converter->setWindowTitle(QCoreApplication::translate("Converter", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Converter: public Ui_Converter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTER_H
