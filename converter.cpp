#include "converter.h"
#include "ui_converter.h"
#include <QProcess>

Converter::Converter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Converter)
{
    ui->setupUi(this);
}

Converter::~Converter()
{
    delete ui;
}

void Converter::on_convertButton_clicked()
{
    try {
        QString inputFilePath = ui->fileTextEdit->toPlainText();
        QString outputFilePath = QFileDialog::getSaveFileName(this, "Save MP3 File", QDir::homePath(), "MP3 Files (*.mp3)");

        if (!inputFilePath.isEmpty() && !outputFilePath.isEmpty()) {
            QProcess process;
            QStringList arguments;
            arguments << "-b" << "320"; // Ustawienie bit rate na 320kbps
            arguments << inputFilePath;
            arguments << outputFilePath;

            process.start("lame", arguments);
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


void Converter::on_addFileButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Open WAV File", QDir::homePath(), "WAV Files (*.wav)");

    if (!filePath.isEmpty()) {
        ui->fileTextEdit->setText(filePath);
    }
}

void Converter::on_cancelButton_clicked()
{
    this->close();
}

