#ifndef SHOWDIFF_H
#define SHOWDIFF_H
#include <QStandardItem>
#include <QDialog>
#include"readonlydelegate.h"
#include"confirm.h"
#include"cmp.h"
#include<qdebug.h>
#include"workerlist.h"
namespace Ui {
class showdiff;
}

class showdiff : public QDialog
{
    Q_OBJECT

public:
    explicit showdiff(QWidget *parent = nullptr,int id1=0,int id2=0,salary sal1=salary(),salary sal2=salary());
    ~showdiff();
     QStandardItemModel * infomodel; //显示表格信息数据模型
     void showd(int id1,int id2,salary sal1,salary sal2);
private:
    Ui::showdiff *ui;
};

#endif // SHOWDIFF_H
