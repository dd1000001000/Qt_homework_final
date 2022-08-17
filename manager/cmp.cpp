#include "cmp.h"
#include "ui_cmp.h"

cmp::cmp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cmp)
{
    ui->setupUi(this);
    idnum1=idnum2=-1;
}

cmp::~cmp()
{
    delete ui;
}

int cmp::get1()
{
    if(ui->lineEdit->text().isEmpty()){qDebug()<<"empty!";return -1;}
    QString val=ui->lineEdit->text();
    return val.toInt();
}

int cmp::get2()
{
    if(ui->lineEdit_2->text().isEmpty()){qDebug()<<"empty!";return -1;}
    QString val=ui->lineEdit_2->text();
    return val.toInt();
}

int cmp::getm()
{
    return ui->comboBox->currentIndex()+1;
}

void cmp::on_pushButton_clicked()
{
    confirm cm(this);//确定按钮
    cm.exec();
    if(!cm.ok)
        idnum1=idnum2=-1;
    else
    {
        idnum1=get1(),idnum2=get2(),month=getm();
    }
    this->close();
}

void cmp::on_pushButton_2_clicked()
{
    idnum1=idnum2=-1;
    this->close();
}
