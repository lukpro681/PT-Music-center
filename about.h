#ifndef ABOUT_H
#define ABOUT_H

#include <QApplication>
#include <QDialog>

namespace Ui {
class about;
}

class about : public QDialog    //komponent w relacji kompozycji z klasą MainWindow
{
    Q_OBJECT

public:
    explicit about(QWidget *parent = nullptr);
    ~about();

private slots:
    void on_closeButton_clicked();

private:
    Ui::about *ui;
    //Pobranie danych z main.cpp przez bibliotekę QApplication
    QString appName = qApp->applicationName();
    QString version = qApp->applicationVersion();
    QString authors = qApp->property("Authors").toString();
    QString disclaimer = qApp->property("Disclaimer").toString();

};

#endif // ABOUT_H
