#include "converterwavogg.h"
#include "ui_converterwavogg.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QProcess>


converterWavOgg::converterWavOgg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::converterWavOgg)
{
    ui->setupUi(this);
}

converterWavOgg::~converterWavOgg()
{
    delete ui;
}

void converterWavOgg::on_addFileButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select WAV File", QString(), "WAV Files (*.wav)");
    if (!filePath.isEmpty()) {
        ui->fileTextEdit->setText(filePath);
    }
}

void converterWavOgg::on_cancelButton_clicked()
{
    this->close();
}

void converterWavOgg::on_convertButton_clicked()
{
    try {
    QString wavFilePath = ui->fileTextEdit->toPlainText();
    if (wavFilePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a WAV file.");
        return;
    }
    QString outputFilePath = QFileDialog::getSaveFileName(this, "Save OGG File", QDir::homePath(), "Vorbis Files (*.ogg)");
    if(!outputFilePath.isEmpty()) {
        QProcess process;
        QStringList arguments;
        arguments << "-b" << "500"; //Bit rate 500kbps
        arguments << "-o" << outputFilePath;
        arguments << wavFilePath;

        process.start("oggenc2", arguments);
        if (!process.waitForStarted())
            throw QString("Error: Failed to start conversion process.");

        if (!process.waitForFinished(-1))
            throw QString("Error: Conversion process timed out.");

        if (process.exitCode() != 0)
            throw QString("Error: Failed to convert file.");

        QMessageBox::information(this, "Conversion Successful", "File converted successfully!");
    } else {
        throw QString("Error: Please select both input and output files!");
    }
} catch (const QString &errorMessage) {
    QMessageBox::critical(this, "Error", errorMessage);
}
}



