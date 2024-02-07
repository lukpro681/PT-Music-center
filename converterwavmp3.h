#ifndef CONVERTERWAVMP3_H
#define CONVERTERWAVMP3_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class Converter;
}

class Converter : public QDialog
{
    Q_OBJECT

public:
    explicit Converter(QWidget *parent = nullptr);
    ~Converter();

private slots:
    void on_convertButton_clicked();
    void on_addFileButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::Converter *ui;
};

#endif // CONVERTERWAVMP3_H
