#include "dialog.h"
#include "ui_dialog.h"
#include "ww.h"
#include "zw.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/zvoni babushke.jpg");
    int w = ui->babushka->width();
    int h = ui->babushka->height();

    ui->babushka->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_WB_clicked()
{
    WW windowW;
    windowW.setModal(true);
    windowW.exec();
}


void Dialog::on_OZON_clicked()
{
    ZW windowZ;
    windowZ.setModal(true);
    windowZ.exec();
}

