#ifndef CONVERTERWAVOGG_H
#define CONVERTERWAVOGG_H

#include <QDialog>

namespace Ui {
class converterWavOgg;
}

class converterWavOgg : public QDialog
{
    Q_OBJECT

public:
    explicit converterWavOgg(QWidget *parent = nullptr);
    ~converterWavOgg();

private slots:
    void on_addFileButton_clicked();

    void on_cancelButton_clicked();

    void on_convertButton_clicked();

private:
    Ui::converterWavOgg *ui;
    bool convertWavToOgg(const QString& wavFilePath, const QString& oggFilePath);
};

#endif // CONVERTERWAVOGG_H
