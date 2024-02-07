#include "converterwavmp3.h"
#include <QProcess>

ConverterWavMp3::ConverterWavMp3(QWidget *parent) :
    ConverterBase(parent)
{

}

ConverterWavMp3::~ConverterWavMp3()
{

}

void ConverterWavMp3::convert()
{
    qDebug("Convert to MP3");
    QString inputFilePath = getInputFilePath();
    QString outputFilePath = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::homePath(), tr("MP3 Files (*.mp3)"));

    if (!inputFilePath.isEmpty() && !outputFilePath.isEmpty()) {
        QProcess process;
        QStringList arguments;
        arguments << "-b" << "320"; // Set bit rate to 320kbps
        arguments << inputFilePath;
        arguments << outputFilePath;

        process.start("lame", arguments);
        if (!process.waitForStarted())
            throw QString(tr("Error: Failed to start conversion process."));

        if (!process.waitForFinished(-1))
            throw QString(tr("Error: Conversion process timed out."));

        if (process.exitCode() != 0)
            throw QString(tr("Error: Failed to convert file."));
    } else {
        throw QString(tr("Error: Please select both input and output files!"));
    }
}
