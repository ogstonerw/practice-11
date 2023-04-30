#include "zw.h"
#include "ui_zw.h"

ZW::ZW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZW)
{
    ui->setupUi(this);
}

ZW::~ZW()
{
    delete ui;
}
