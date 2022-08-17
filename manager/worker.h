#ifndef WORKERS_H
#define WORKERS_H
#include<QString>
#include<QTextStream>
#include"salary.h"
#include<QDate>
class Worker
{
public:
    //职工信息：工号、姓名、年龄、入职日期、电话、住址、月工资数据集
    int idnum;
    QString name;
    int age;
    QDate workday;
    QString phone;
    QString address;
    salary workersalary[13];
public:
    Worker();
    Worker(const Worker&worker);
    void saveworker(QTextStream&input);
    void readworker(QTextStream&output);
    void setid(int id);
    int getid();
    void setsalary(int month,salary&sal);
};

#endif // WORKERS_H
