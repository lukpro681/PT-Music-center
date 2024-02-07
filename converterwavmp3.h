#ifndef CONVERTERWAVMP3_H
#define CONVERTERWAVMP3_H

#include "converterbase.h"

namespace Ui {
class ConverterWavMp3;
}

class ConverterWavMp3 : public ConverterBase
{
    Q_OBJECT

public:
    explicit ConverterWavMp3(QWidget *parent = nullptr);
    ~ConverterWavMp3();

    void convert() override;

private:
    Ui::ConverterWavMp3 *ui;
};

#endif // CONVERTERWAVMP3_H
