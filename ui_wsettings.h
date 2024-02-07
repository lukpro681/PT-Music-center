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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Wsettings
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *formatsLineEdit;
    QLabel *label_2;
    QTextEdit *folderPathTextEdit;
    QPushButton *addFolderButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *saveSettingsButton;

    void setupUi(QDialog *Wsettings)
    {
        if (Wsettings->objectName().isEmpty())
            Wsettings->setObjectName(QString::fromUtf8("Wsettings"));
        Wsettings->resize(827, 226);
        verticalLayout = new QVBoxLayout(Wsettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Wsettings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        formatsLineEdit = new QLineEdit(Wsettings);
        formatsLineEdit->setObjectName(QString::fromUtf8("formatsLineEdit"));

        gridLayout_2->addWidget(formatsLineEdit, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        label_2 = new QLabel(Wsettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        folderPathTextEdit = new QTextEdit(Wsettings);
        folderPathTextEdit->setObjectName(QString::fromUtf8("folderPathTextEdit"));

        verticalLayout->addWidget(folderPathTextEdit);

        addFolderButton = new QPushButton(Wsettings);
        addFolderButton->setObjectName(QString::fromUtf8("addFolderButton"));

        verticalLayout->addWidget(addFolderButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(200);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okButton = new QPushButton(Wsettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);

        cancelButton = new QPushButton(Wsettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        saveSettingsButton = new QPushButton(Wsettings);
        saveSettingsButton->setObjectName(QString::fromUtf8("saveSettingsButton"));

        horizontalLayout->addWidget(saveSettingsButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Wsettings);

        QMetaObject::connectSlotsByName(Wsettings);
    } // setupUi

    void retranslateUi(QDialog *Wsettings)
    {
        Wsettings->setWindowTitle(QCoreApplication::translate("Wsettings", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Wsettings", "Supported formats", nullptr));
        label_2->setText(QCoreApplication::translate("Wsettings", "Searched folders", nullptr));
        addFolderButton->setText(QCoreApplication::translate("Wsettings", "Add Folder(s)", nullptr));
        okButton->setText(QCoreApplication::translate("Wsettings", "OK", nullptr));
        cancelButton->setText(QCoreApplication::translate("Wsettings", "Cancel", nullptr));
        saveSettingsButton->setText(QCoreApplication::translate("Wsettings", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wsettings: public Ui_Wsettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WSETTINGS_H
