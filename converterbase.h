#ifndef CONVERTERBASE_H
#define CONVERTERBASE_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class ConverterBase;
}

class ConverterBase : public QDialog        //klasa bazowa do konwersji plików oraz komponent w relacji kompozycji z MainWindow.Jest ona klasą abstrakcyjną
{
    Q_OBJECT

public:
    explicit ConverterBase(QWidget *parent = nullptr);
    virtual ~ConverterBase();

    virtual void convert() = 0; // metoda wirtualna służąca do konwersji

private slots:
    void on_convertButton_clicked();
    void on_addFileButton_clicked();
    void on_cancelButton_clicked();

protected:
    QString getInputFilePath();

private:
    Ui::ConverterBase *ui;
};

#endif // CONVERTERBASE_H
