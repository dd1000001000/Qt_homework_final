#include "workerlist.h"
#include <qfile.h>
#include <QTextStream>
#include <QTextCodec>

workerlist::workerlist()
{
    sum=0;
}

int workerlist::getworkernum()
{
    return mp.size();
}

bool workerlist::check(int idnum)//查找是否有重复的
{
    return mp.count(idnum);
}

bool workerlist::addworker(Worker&worker)
{
    if(check(worker.getid()))return false;
    mp.insert(worker.idnum,worker);
    ++sum;
    return true;
}

bool workerlist::deleteworker(int idnum)
{
    if(!check(idnum))return false;
    mp.remove(idnum);
    --sum;
    return true;
}

Worker&workerlist::getworker(int idnum)
{
    return mp[idnum];
}

bool workerlist::editworkersalary(int idnum,int month,salary&sal)
{
    mp[idnum].setsalary(month,sal);
    mp[idnum].workersalary[month].calevery();
    return true;
}

#ifndef fn
#define fn FileName

bool workerlist::readlist(const QString &FileName)
{
    QFile aFile(fn);
    if(!aFile.exists())return false;
    if(!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream aStream(&aFile);
    aStream.setCodec(QTextCodec::codecForName("system")); //显示汉字
    mp.clear();
    sum=0;
    aStream>>sum;
    Worker tmp;
    for(int i=0;i<sum;i++)
    {
        tmp.readworker(aStream);
        mp.insert(tmp.idnum,tmp);
    }
    aFile.close();
    return true;
}

bool workerlist::savelist(const QString &FileName)
{
    QFile aFile(fn);
    if(!aFile.open(QIODevice::WriteOnly| QIODevice::Text))
        return false;
    QTextStream aStream(&aFile);
    aStream.setCodec(QTextCodec::codecForName("system")); //显示汉字
    aStream<<sum<<'\n';
    for(auto&w:mp)
        w.saveworker(aStream);
    aFile.close();
    return true;
}

#endif
