#include "addworker.h"
#include "ui_addworker.h"

addworker::addworker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addworker)
{
    ui->setupUi(this);
    id=-1;
}

addworker::~addworker()
{
    delete ui;
}

void addworker::on_pushButton_clicked()
{
    id=-1;
    qDebug()<<"添加被取消！";
    this->close();
}

void addworker::on_pushButton_2_clicked()
{
    confirm cm(this);//确定按钮
    cm.exec();
    if(!cm.ok)id=-1;
    else
    {
        id=getid();
        name=getname();
        workday=getday();
        age=getage();
        phone=getph();
        address=getad();
        qDebug()<<id;
    }
    this->close();
}

int addworker::getid()
{
    if(ui->lineEdit->text().isEmpty()){qDebug()<<"empty!";return -1;}
    QString val=ui->lineEdit->text();
    return val.toInt();
}

QString addworker::getname()
{
    return ui->lineEdit_2->text();
}

int addworker::getage()
{
    QString val=ui->lineEdit_3->text();
    return val.toInt();
}

QDate addworker::getday()
{
    return ui->dateEdit->date();
}

QString addworker::getph()
{
    return ui->lineEdit_7->text();
}

QString addworker::getad()
{
    return ui->lineEdit_8->text();
}
