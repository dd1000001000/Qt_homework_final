#include "worker.h"

Worker::Worker()
{

}

void Worker::saveworker(QTextStream &input)
{
    input<<idnum<<' '<<name<<' '<<age<<'\n';
    input<<workday.year()<<' '<<workday.month()<<' '<<workday.day()<<'\n';
    input<<phone<<' '<<address<<'\n';
    for(int i=1;i<=12;i++)
        workersalary[i].savesalary(input);
}

void Worker::readworker(QTextStream &output)
{
    int year, month, day;
    output>>idnum>>name>>age;
    output>>year>>month>>day;
    output>>phone>>address;
    workday.setDate(year, month, day);
    for(int i=1;i<=12;i++)
        workersalary[i].readsalary(output);
}

void Worker::setid(int id)
{
    idnum=id;
}

int Worker::getid()
{
    return idnum;
}

void Worker::setsalary(int month,salary&sal)
{
    workersalary[month]=sal;
}

Worker::Worker(const Worker&worker)
{
    *this=worker;
}
