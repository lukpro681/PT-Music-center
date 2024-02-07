#include "converterwavogg.h"
#include <QProcess>

ConverterWavOgg::ConverterWavOgg(QWidget *parent) :
    ConverterBase(parent)
{

}

ConverterWavOgg::~ConverterWavOgg()
{

}

void ConverterWavOgg::convert()
{
    qDebug("Convert to OGG");
    QString inputFilePath = getInputFilePath();
    QString outputFilePath = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::homePath(), tr("OGG Vorbis Files (*.ogg)"));

    if (!inputFilePath.isEmpty() && !outputFilePath.isEmpty()) {
        QProcess process;
        QStringList arguments;
        arguments << "-b" << "500"; // Set bit rate to 500kbps
        arguments << "-o" << outputFilePath;
        arguments << inputFilePath;

        process.start("oggenc2", arguments);
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
