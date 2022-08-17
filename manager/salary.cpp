#include "salary.h"
const double rate[]={0.0,0.05,0.10,0.20};
salary::salary()
{

}

void salary::caclsum()
{
    sum=base.caclba()+extra.caclea();
}

void salary::cacltax()
{
    tax=0;
    if(sum>=800)tax+=rate[1]*(qMin(1000.0,sum)-800);
    if(sum>=1000)tax+=rate[2]*(qMin(5000.0,sum)-1000);
    if(sum>=5000.0)tax+=rate[3]*(sum-5000);
}

void salary::calevery()
{
    caclsum();
    cacltax();
};

void salary::savesalary(QTextStream &input)
{
    calevery();
    input<<sum<<' '<<tax<<'\n';
    base.saveba(input);
    extra.saveea(input);
}

void salary::readsalary(QTextStream &output)
{
    output>>sum>>tax;
    base.readba(output);
    extra.readea(output);
}

salary::salary(const salary&sal)
{
    *this=sal;
}
