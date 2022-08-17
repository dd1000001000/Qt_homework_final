#include "inputid.h"
#include "ui_inputid.h"

inputid::inputid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inputid)
{
    inputidnum=-1;
    ui->setupUi(this);
}

inputid::~inputid()
{
    delete ui;
}

int inputid::getidnum()
{
    if(ui->lineEdit->text().isEmpty()){qDebug()<<"empty!";return -1;}
    QString val=ui->lineEdit->text();
    return val.toInt();
}

void inputid::on_pushButton_clicked()
{
    confirm cm(this);//确定按钮
    cm.exec();
    if(!cm.ok)
        inputidnum=-1;
    else
        inputidnum=getidnum();
    this->close();
}

void inputid::on_pushButton_2_clicked()
{
    inputidnum=-1;
    this->close();
    qDebug()<<"操作被取消！";
}
