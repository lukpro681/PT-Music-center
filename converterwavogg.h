#ifndef CONVERTERWAVOGG_H
#define CONVERTERWAVOGG_H

#include "converterbase.h"

namespace Ui {
class ConverterWavOgg;
}

class ConverterWavOgg : public ConverterBase
{
    Q_OBJECT

public:
    explicit ConverterWavOgg(QWidget *parent = nullptr);
    ~ConverterWavOgg();

    void convert() override;

private:
    Ui::ConverterWavOgg *ui;
};

#endif // CONVERTERWAVOGG_H
