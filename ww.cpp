#include "ww.h"
#include "ui_ww.h"

WW::WW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WW)
{
    ui->setupUi(this);
}

WW::~WW()
{
    delete ui;
}
