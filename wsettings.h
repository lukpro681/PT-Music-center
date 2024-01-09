#ifndef WSETTINGS_H
#define WSETTINGS_H

#include <QDialog>
#include <QSettings>
#include <QJsonDocument>
#include <QJsonArray>
#include <QStringList>

namespace Ui {
class Wsettings;
}

class Wsettings : public QDialog
{
    Q_OBJECT

public:
    explicit Wsettings(QWidget *parent = nullptr);
    ~Wsettings();
    void loadSettings();
    void saveSettings();
    QStringList getFolders() const;
    QStringList getFormats() const;


signals:
    void settingsApplied();

private slots:
    void on_addFolderButton_clicked();
    void on_saveSettingsButton_clicked();

    void on_okButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::Wsettings *ui;
    QString settingsFilePath;


};

#endif // WSETTINGS_H
