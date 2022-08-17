#ifndef WORKERLIST_H
#define WORKERLIST_H
#include<QVector>
#include<algorithm>
#include<QString>
#include"worker.h"
#include<vector>
#include<QMap>
class workerlist
{
public:
    int sum;
    QMap<int,Worker>mp;
public:
    workerlist();
    bool savelist(const QString &FileName);
    bool readlist(const QString &FileName);
    bool addworker(Worker&worker);
    bool check(int idnum);
    bool deleteworker(int idnum);
    int getworkernum();
    Worker&getworker(int idnum);
    bool editworkersalary(int idnum,int month,salary&sal);
};

#endif // WORKERLIST_H
