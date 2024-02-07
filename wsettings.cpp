#include "wsettings.h"
#include "ui_wsettings.h"
#include "mainwindow.h"
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>


Wsettings::Wsettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wsettings),
    settingsFilePath("settings.json")
{
    ui->setupUi(this);
    loadSettings();
     connect(ui->saveSettingsButton, &QPushButton::clicked, this, &Wsettings::on_saveSettingsButton_clicked);   //
     connect(ui->okButton, &QPushButton::clicked, this, &Wsettings::on_okButton_clicked);                       // connecty odpowiedzialne za zapisanie ustawień
}

Wsettings::~Wsettings()
{
    delete ui;
}

void Wsettings::on_addFolderButton_clicked()    //dodanie folderu z utworami na stałe
{
    QString folderPath = QFileDialog::getExistingDirectory(this, tr("Select Folder"));
    if (!folderPath.isEmpty()) {
        ui->folderPathTextEdit->append(folderPath);
    }
}

void Wsettings::on_saveSettingsButton_clicked()     //zapisanie ustawień(przycisk)
{
    saveSettings();
    emit settingsApplied();
}

void Wsettings::loadSettings()      // załadowanie ustawień (zapisywane i odczytywane są w pliku z formatem .json)
{
    QFile file(settingsFilePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QByteArray data = file.readAll();
        QJsonDocument doc(QJsonDocument::fromJson(data));

        if (!doc.isNull() && doc.isObject()) {
            QJsonObject obj = doc.object();
            ui->folderPathTextEdit->setPlainText(obj["folders"].toString());
            ui->formatsLineEdit->setText(obj["formats"].toString());
        }

        file.close();
    }
}

void Wsettings::saveSettings()      //zapisanie ustawień
{
    QJsonObject obj;
    obj["folders"] = ui->folderPathTextEdit->toPlainText();
    obj["formats"] = ui->formatsLineEdit->text();

    QJsonDocument doc(obj);

    QFile file(settingsFilePath);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.write(doc.toJson());
        file.close();
    }
}

void Wsettings::on_okButton_clicked() // zaaplikowanie ustawień
{
    saveSettings();
    emit settingsApplied();
    this->close();
}


void Wsettings::on_cancelButton_clicked()
{
    this->close();
}

QStringList Wsettings::getFormats() const   // metody która pobiera format plików z pliku konfiguracji
{
    return ui->formatsLineEdit->text().split(' ', QString::SkipEmptyParts);
}

QStringList Wsettings::getFolders() const   // metody która pobiera foldery z pliku konfiguracji
{
    return ui->folderPathTextEdit->toPlainText().split('\n', QString::SkipEmptyParts);
}
