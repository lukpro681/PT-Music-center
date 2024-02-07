#include "converterwavmp3.h"
#include <QProcess>

ConverterWavMp3::ConverterWavMp3(QWidget *parent) :
    ConverterBase(parent)
{

}

ConverterWavMp3::~ConverterWavMp3()
{

}

void ConverterWavMp3::convert() //metoda odpowiedzialna za konwersję pliku
{
    qDebug("Convert to MP3");
    QString inputFilePath = getInputFilePath(); //ścieżka pliku konwertowanego
    QString outputFilePath = QFileDialog::getSaveFileName(this, tr("Save File"), QDir::homePath(), tr("MP3 Files (*.mp3)"));    //wskazanie ścieżki zapisu nowego pliku po konwersji

    if (!inputFilePath.isEmpty() && !outputFilePath.isEmpty()) {
        QProcess process;                                           //{
        QStringList arguments;                                      //
        arguments << "-b" << "320"; // Set bit rate to 320kbps      //  ustawienie opcji konwersji(kbps) oraz ścieżki do odczytu oraz zapisu
        arguments << inputFilePath;                                 //  zawiera argumenty biblioteki LAME
        arguments << outputFilePath;                                //}

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
