#ifndef CONVERTERWAVOGG_H
#define CONVERTERWAVOGG_H

#include "converterbase.h"

namespace Ui {
class ConverterWavOgg;
}

class ConverterWavOgg : public ConverterBase    //klasa pochodna klasy ConverterBase
{
    Q_OBJECT

public:
    explicit ConverterWavOgg(QWidget *parent = nullptr);
    ~ConverterWavOgg();

    void convert() override;    //override metody wirtualnej z klasy ConverterBase

private:
    Ui::ConverterWavOgg *ui;
};

#endif // CONVERTERWAVOGG_H
