#ifndef ADDWORKER_H
#define ADDWORKER_H
#include"workerlist.h"
#include <QDialog>
#include"worker.h"
#include<QString>
#include<QDebug>
#include"confirm.h"
namespace Ui {
class addworker;
}

class addworker : public QDialog
{
    Q_OBJECT

public:
    explicit addworker(QWidget *parent = nullptr);
    ~addworker();
    //职工信息：工号、姓名、年龄、入职日期、电话、住zhi
    int id;
    QString name;
    int age;
    QDate workday;
    QString phone;
    QString address;
    int getid();
    QString getname();
    int getage();
    QDate getday();
    QString getph();
    QString getad();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addworker *ui;
};

#endif // ADDWORKER_H
