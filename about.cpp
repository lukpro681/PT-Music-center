#include "about.h"
#include "ui_about.h"


about::about(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::about)
{
    ui->setupUi(this);
    ui->appLabel->setText(appName);
    ui->versionLabel->setText(version);
    ui->authorsLabel->setText(authors);
    ui->disclaimerLabel->setText(disclaimer);


}

about::~about()
{
    delete ui;
}

void about::on_closeButton_clicked()
{
    this->close();
}

