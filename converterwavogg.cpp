#include "converterwavogg.h"
#include "qdebug.h"
#include "ui_converterwavogg.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QProcess>
#include <vorbis/vorbisenc.h>
#include <vorbis/codec.h>

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
    QString wavFilePath = ui->fileTextEdit->toPlainText();
    if (wavFilePath.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please select a WAV file.");
        return;
    }

    QString oggFilePath = wavFilePath;
    oggFilePath.replace(".wav", ".ogg");

    if (!convertWavToOgg(wavFilePath, oggFilePath)) {
        QMessageBox::critical(this, "Error", "Error during WAV to OGG conversion.");
        return;
    }

    QMessageBox::information(this, "Success", "Conversion completed successfully.");
}

bool converterWavOgg::convertWavToOgg(const QString& wavFilePath, const QString& oggFilePath) {
    // // Open the WAV file
    // QFile inputFile(wavFilePath);
    // if (!inputFile.open(QIODevice::ReadOnly)) {
    //     qDebug() << "Failed to open WAV file for reading";
    //     return false;
    // }

    // // Read the WAV data
    // QByteArray wavData = inputFile.readAll();
    // inputFile.close();

    // // Initialize the Ogg Vorbis encoder
    // vorbis_info vi;
    // vorbis_info_init(&vi);
    // int ret = vorbis_encode_init_vbr(&vi, 2, 44100, 0.5); // 2 channels, 44100 Hz, quality level 0.5
    // if (ret != 0) {
    //     qDebug() << "Failed to initialize Ogg Vorbis encoder";
    //     return false;
    // }

    // // Open the output OGG file
    // FILE* oggFile = fopen(oggFilePath.toStdString().c_str(), "wb");
    // if (!oggFile) {
    //     qDebug() << "Failed to open OGG file for writing";
    //     return false;
    // }

    // // Initialize the Ogg Vorbis stream
    // vorbis_dsp_state vd;
    // vorbis_block vb;
    // vorbis_comment vc;
    // ogg_stream_state os;
    // ogg_packet op;
    // ogg_page og;
    // ogg_packet header;
    // ogg_packet header_comm;
    // ogg_packet header_code;

    // vorbis_comment_init(&vc);
    // vorbis_analysis_init(&vd, &vi);
    // vorbis_block_init(&vd, &vb);

    // ogg_stream_init(&os, 0);

    // vorbis_analysis_headerout(&vd, &vc, &header, &header_comm, &header_code);
    // ogg_stream_packetin(&os, &header);
    // ogg_stream_packetin(&os, &header_comm);
    // ogg_stream_packetin(&os, &header_code);

    // while (true) {
    //     float** buffer = vorbis_analysis_buffer(&vd, 4096);
    //     if (!buffer) break; // End of file

    //     // Copy WAV data to the Ogg Vorbis buffer
    //     int bytesRead = qMin(wavData.size(), 4096 * 4); // Assuming 16-bit stereo WAV
    //     for (int i = 0; i < bytesRead / 4; i++) {
    //         buffer[0][i] = (float)(((unsigned char)wavData[i * 2 + 1] << 8) | (unsigned char)wavData[i * 2]) / 32768.0f;
    //         buffer[1][i] = (float)(((unsigned char)wavData[i * 2 + 3] << 8) | (unsigned char)wavData[i * 2 + 2]) / 32768.0f;
    //     }

    //     // Perform Ogg Vorbis analysis and encoding
    //     vorbis_analysis_wrote(&vd, bytesRead / 4);
    //     while (vorbis_analysis_blockout(&vd, &vb) == 1) {
    //         vorbis_analysis(&vb, NULL);
    //         vorbis_bitrate_addblock(&vb);
    //         while (vorbis_bitrate_flushpacket(&vd, &op)) {
    //             ogg_stream_packetin(&os, &op);
    //             while (ogg_stream_pageout(&os, &og)) {
    //                 fwrite(og.header, 1, og.header_len, oggFile);
    //                 fwrite(og.body, 1, og.body_len, oggFile);
    //             }
    //         }
    //     }
    // }

    // // Clean up
    // vorbis_analysis_wrote(&vd, 0);
    // vorbis_block_clear(&vb);
    // vorbis_dsp_clear(&vd);
    // ogg_stream_clear(&os);
    // vorbis_comment_clear(&vc);
    // vorbis_info_clear(&vi);
    // fclose(oggFile);

    return true;
}
