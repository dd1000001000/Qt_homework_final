#include "showdiff.h"
#include "ui_showdiff.h"

showdiff::showdiff(QWidget *parent,int id1,int id2,salary sal1,salary sal2) :
    QDialog(parent),
    ui(new Ui::showdiff)
{
    ui->setupUi(this);
    infomodel=new QStandardItemModel();
    ui->show->setModel(infomodel);
    showd(id1,id2,sal1,sal2);
}

showdiff::~showdiff()
{
    delete ui;
    delete infomodel;
}

void showdiff::showd(int id1,int id2,salary sal1,salary sal2)
{
    QStringList templist;
    infomodel->clear();
    infomodel->setColumnCount(10);
    infomodel->setRowCount(2);
    templist.append("职工编号");
    templist.append("基本工资");
    templist.append("岗位工资");
    templist.append("工龄工资");
    templist.append("津贴");
    templist.append("岗贴");
    templist.append("补贴");
    templist.append("房贴");
    templist.append("交通补贴");
    templist.append("总和");
    infomodel->setHorizontalHeaderLabels(templist);
    QStandardItem *aTempItem; //临时的item
    QString tempStr;

    tempStr=QString::number(id1);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,0,aTempItem);
    tempStr=QString::number(sal1.base.bs1);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,1,aTempItem);
    tempStr=QString::number(sal1.base.bs2);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,2,aTempItem);
    tempStr=QString::number(sal1.base.bs3);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,3,aTempItem);
    tempStr=QString::number(sal1.extra.es1);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,4,aTempItem);
    tempStr=QString::number(sal1.extra.es2);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,5,aTempItem);
    tempStr=QString::number(sal1.extra.es3);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,6,aTempItem);
    tempStr=QString::number(sal1.extra.es4);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,7,aTempItem);
    tempStr=QString::number(sal1.extra.es5);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,8,aTempItem);
    tempStr=QString::number(sal1.sum);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(0,9,aTempItem);

    tempStr=QString::number(id2);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,0,aTempItem);
    tempStr=QString::number(sal2.base.bs1);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,1,aTempItem);
    tempStr=QString::number(sal2.base.bs2);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,2,aTempItem);
    tempStr=QString::number(sal2.base.bs3);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,3,aTempItem);
    tempStr=QString::number(sal2.extra.es1);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,4,aTempItem);
    tempStr=QString::number(sal2.extra.es2);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,5,aTempItem);
    tempStr=QString::number(sal2.extra.es3);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,6,aTempItem);
    tempStr=QString::number(sal2.extra.es4);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,7,aTempItem);
    tempStr=QString::number(sal2.extra.es5);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,8,aTempItem);
    tempStr=QString::number(sal2.sum);
    aTempItem = new QStandardItem(tempStr);
    infomodel->setItem(1,9,aTempItem);

    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    for(int i=0;i<10;i++)
    ui->show->setItemDelegateForColumn(i, readOnlyDelegate);
}
