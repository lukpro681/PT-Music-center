#include "converterbase.h"
#include "ui_converterbase.h"
#include <QProcess>

ConverterBase::ConverterBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConverterBase)
{
    ui->setupUi(this);
}

ConverterBase::~ConverterBase()
{
    delete ui;
}

void ConverterBase::on_convertButton_clicked()  //slot klasy ConverterBase służący do rozpoczęcia konwersji pliku wykonując metodę convert()
{
    try {
        qDebug("starting conversion proccess");
        QString inputFilePath = getInputFilePath();

        if (!inputFilePath.isEmpty()) {
            convert();
            QMessageBox::information(this, tr("Conversion Successful"), tr("File converted successfully!"));
        } else {
            throw QString(tr("Error: Please select both input and output files!"));
        }
    } catch (const QString &errorMessage) {
        QMessageBox::critical(this, tr("Error"), errorMessage);
    }
}

void ConverterBase::on_addFileButton_clicked()  //slot klasy ConverterBase służący do wskazania pliku który ma być celem konwersji
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::homePath(), tr(".WAV Files (*.wav)"));

    if (!filePath.isEmpty()) {
        ui->fileTextEdit->setText(filePath);
    }
}

void ConverterBase::on_cancelButton_clicked()
{
    this->close();
}


QString ConverterBase::getInputFilePath()
{
    return ui->fileTextEdit->toPlainText();
}

