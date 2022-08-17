#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include"cmp.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->showworkers->setSelectionMode(QAbstractItemView::SingleSelection); //单次选择
    ui->showworkers->setSelectionBehavior(QAbstractItemView::SelectItems); //选中一个item
    infomodel=new QStandardItemModel();
    ui->showworkers->setModel(infomodel);
    connect(ui->showworkers->itemDelegate(), &QAbstractItemDelegate::closeEditor, this, &MainWindow::on_ShowInfotableView_changed);
    current = -1;
    this->setWindowIcon(QIcon(":/new/prefix1/source/1.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete infomodel;
}

void MainWindow::on_actionf1_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "选择一个文件";
    QString filter = "文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getOpenFileName(this, dlgTitle, curPath, filter);
    if(aFileName.isEmpty())
        return;
    //创建成功，打开文件
    nowlist.readlist(aFileName);
    qDebug()<<"文件打开成功！";
    QMessageBox::information(this, "information", "打开成功!", QMessageBox::NoButton, QMessageBox::Close);
    showall();
}

void MainWindow::on_actionf2_triggered()
{
    QString curPath = QDir::currentPath();
    QString dlgTitle = "另存为一个文件";
    QString filter = "文本文件(*.txt);;所有文件(*.*)";
    QString aFileName = QFileDialog::getSaveFileName(this, dlgTitle, curPath, filter);
    if(aFileName.isEmpty())
        return;
    nowlist.savelist(aFileName);
    qDebug()<<"文件保存成功！";
    QMessageBox::information(this, "information", "保存成功!", QMessageBox::NoButton, QMessageBox::Close);
}

void MainWindow::on_actionexit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_actiondel_triggered()
{
    inputid ip(this);
    ip.exec(); //以模态方式显示对话框
    int id=ip.inputidnum;
    qDebug()<<id;
    if(!nowlist.check(id)&&id>0)
    {
        qDebug()<<"not find!";
        QMessageBox::critical(this, "critical", "没有找到此职工!", QMessageBox::Yes);
    }
    else if(id>0)
    {
        qDebug()<<"good del!";
        nowlist.deleteworker(id);
        QMessageBox::information(this, "information", "删除成功!", QMessageBox::NoButton, QMessageBox::Close);
    }
    showall();
}

#ifndef es
#define es e.sal

void MainWindow::on_actionadd_triggered()
{
    addworker ad(this);
    ad.exec();
    int id=ad.id;
    qDebug()<<id;
    if(nowlist.check(id)&&id>0)
    {
        qDebug()<<"repeat!";
        QMessageBox::critical(this, "critical", "已经存在相同编号职工!", QMessageBox::Yes);
    }
    else if(id>0)
    {
        qDebug()<<"good add!";
        Worker tmp;
        tmp.idnum=id;
        tmp.name=ad.name;
        tmp.age=ad.age;
        tmp.workday=ad.workday;
        tmp.phone=ad.phone;
        tmp.address=ad.address;
        memset(tmp.workersalary,0,sizeof(tmp.workersalary));//默认
        nowlist.addworker(tmp);
        QMessageBox::information(this, "information", "添加成功!", QMessageBox::NoButton, QMessageBox::Close);
    }
    showall();
}

#endif

void MainWindow::on_ShowInfotableView_changed()
{
    QModelIndex index = ui->showworkers->currentIndex();
    int row = index.row(); //哪个职工 or 哪个月工资
    int line = index.column(); //哪个列
    QVariant data; //数据
    qDebug()<<"current is :"<<current;
    qDebug()<<row<<' '<<line;
    data=infomodel->data(index);
    int idnum=infomodel->data(infomodel->index(row,0)).toInt();//获取员工编号
    if(current==0)//员工
    {
        switch (line)
        {
        case 1: //姓名
            nowlist.mp[idnum].name = data.toString();
            break;
        case 2:
            nowlist.mp[idnum].age = data.toInt();
            break;
        case 3:
            nowlist.mp[idnum].workday = data.toDate();
            break;
        case 4:
            nowlist.mp[idnum].phone = data.toString();
            break;
        case 5:
            nowlist.mp[idnum].address=data.toString();
            break;
        default:
            break;
        }
    }
    else //工资
    {
        int index=current-1;//真正的下标
        qDebug()<<"index is"<<index;
        switch(line)
        {
        case 1:
            nowlist.mp[index].workersalary[row+1].base.bs1=data.toDouble();
            break;
        case 2:
            nowlist.mp[index].workersalary[row+1].base.bs2=data.toDouble();
            break;
        case 3:
            nowlist.mp[index].workersalary[row+1].base.bs3=data.toDouble();
            break;
        case 4:
            nowlist.mp[index].workersalary[row+1].extra.es1=data.toDouble();
            break;
        case 5:
            nowlist.mp[index].workersalary[row+1].extra.es2=data.toDouble();
            break;
        case 6:
            nowlist.mp[index].workersalary[row+1].extra.es3=data.toDouble();
            break;
        case 7:
            nowlist.mp[index].workersalary[row+1].extra.es4=data.toDouble();
            break;
        case 8:
            nowlist.mp[index].workersalary[row+1].extra.es5=data.toDouble();
            break;
        default:
            break;
        }
        showsal(index);
    }
}

void MainWindow::on_actionshowall_triggered()
{
    showall();
}

void MainWindow::showall()
{
    current=0;
    infomodel->clear();
    infomodel->setColumnCount(6);
    QStringList templist;
    templist.append("工号");
    templist.append("姓名");
    templist.append("年龄");
    templist.append("入职日期");
    templist.append("电话");
    templist.append("住址");
    infomodel->setHorizontalHeaderLabels(templist);
    infomodel->setRowCount(nowlist.getworkernum());
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    int i=0;
    for(auto w:nowlist.mp)
    {
        Worker tmpworker=w;
        tempStr = QString::number(tmpworker.idnum);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,0,aTempItem);
        aTempItem=new QStandardItem(tmpworker.name);
        infomodel->setItem(i,1,aTempItem);
        tempStr=QString::number(tmpworker.age);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,2,aTempItem);
        tempStr = tmpworker.workday.toString("yyyy-MM-dd");
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,3,aTempItem);
        aTempItem = new QStandardItem(tmpworker.phone);
        infomodel->setItem(i,4,aTempItem);
        aTempItem = new QStandardItem(tmpworker.address);
        infomodel->setItem(i,5,aTempItem);
        ++i;
    }
    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    ui->showworkers->setItemDelegateForColumn(0, readOnlyDelegate);//id号不改
    qDebug()<<"ok print";
}

void MainWindow::on_actionshowon_triggered()
{
    inputid ip(this);
    ip.exec(); //以模态方式显示对话框
    int id=ip.inputidnum;
    if(!nowlist.check(id)&&id>0)
    {
        qDebug()<<"not find!";
        QMessageBox::critical(this, "critical", "没有找到此职工!", QMessageBox::Yes);
    }
    else if(id>0)
    {
        qDebug()<<"good showsal!";
        showsal(id);
    }
}

void MainWindow::showsal(int id)//index是返回的id号码的pos
{
    current=id+1;
    for(int i=1;i<=12;++i)
        nowlist.mp[id].workersalary[i].calevery();
    infomodel->clear();
    infomodel->setColumnCount(11);
    QStringList templist;
    templist.append("实发数");
    templist.append("基本工资");
    templist.append("岗位工资");
    templist.append("工龄工资");
    templist.append("津贴");
    templist.append("岗贴");
    templist.append("补贴");
    templist.append("房贴");
    templist.append("交通补贴");
    templist.append("总和");
    templist.append("应交税");
    infomodel->setHorizontalHeaderLabels(templist);
    infomodel->setRowCount(12);//12个月
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    for(int i=0;i<12;i++)
    {
        salary tmp=nowlist.mp[id].workersalary[i+1];
        tempStr=QString::number(tmp.base.bs1);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,1,aTempItem);
        tempStr=QString::number(tmp.base.bs2);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,2,aTempItem);
        tempStr=QString::number(tmp.base.bs3);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,3,aTempItem);
        tempStr=QString::number(tmp.extra.es1);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,4,aTempItem);
        tempStr=QString::number(tmp.extra.es2);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,5,aTempItem);
        tempStr=QString::number(tmp.extra.es3);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,6,aTempItem);
        tempStr=QString::number(tmp.extra.es4);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,7,aTempItem);
        tempStr=QString::number(tmp.extra.es5);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,8,aTempItem);
        tempStr=QString::number(tmp.sum);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,9,aTempItem);
        tempStr=QString::number(tmp.tax);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,10,aTempItem);
        double left=tmp.sum-tmp.tax;
        tempStr=QString::number(left);
        aTempItem = new QStandardItem(tempStr);
        infomodel->setItem(i,0,aTempItem);
    }
    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    ui->showworkers->setItemDelegateForColumn(9, readOnlyDelegate);
    ui->showworkers->setItemDelegateForColumn(10, readOnlyDelegate);//总和，交税不能更改
    qDebug()<<"ok showsal！";
}

void MainWindow::on_actioncompare_triggered()
{
    cmp cp(this);
    cp.exec();
    int id1=cp.idnum1,id2=cp.idnum2,m=cp.month;
    qDebug()<<id1<<' '<<id2;
    if((!nowlist.check(id1)&&id1>0)||(!nowlist.check(id2)&&id2>0))
    {
        qDebug()<<"not find!";
        QMessageBox::critical(this, "critical", "没有找到此职工!", QMessageBox::Yes);
    }
    else if(id1>0&&id2>0)
    {
        showdiff sd(this,id1,id2,nowlist.mp[id1].workersalary[m],nowlist.mp[id2].workersalary[m]);
        sd.exec();
    }
}
