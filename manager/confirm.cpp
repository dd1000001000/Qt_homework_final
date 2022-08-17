#include "confirm.h"
#include "ui_confirm.h"

confirm::confirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::confirm)
{
    ui->setupUi(this);
    ok=0;//默认取消
}

confirm::~confirm()
{
    delete ui;
}

void confirm::on_pushButton_clicked()//确定
{
    ok=1;
    this->close();
}

void confirm::on_pushButton_2_clicked()//取消
{
    ok=0;
    this->close();
}
