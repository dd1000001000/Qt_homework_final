#ifndef SALARY_H
#define SALARY_H
#include<QString>
#include<QTextStream>

typedef struct basicsalary
{
    double bs1,bs2,bs3;//基本工资、岗位工资、工龄工资
    double caclba()
    {
        return bs1+bs2+bs3;
    }
    void saveba(QTextStream&input)
    {
        input<<bs1<<' '<<bs2<<' '<<bs3<<'\n';
    }
    void readba(QTextStream&output)
    {
        output>>bs1>>bs2>>bs3;
    }
}bsa;

typedef struct extrasalary
{
    double es1,es2,es3,es4,es5;//津贴、岗贴、补贴、房贴、交通补贴
    double caclea()
    {
        return es1+es2+es3+es4+es5;
    }
    void saveea(QTextStream&input)
    {
        input<<es1<<' '<<es2<<' '<<es3<<' '<<es4<<' '<<es5<<'\n';
    }
    void readea(QTextStream&output)
    {
        output>>es1>>es2>>es3>>es4>>es5;
    }
}esa;

class salary
{
public:
    int month_id;
    bsa base;
    esa extra;
    double tax,sum;
    void caclsum();
    void cacltax();
    void calevery();
public:
    salary();
    salary(const salary&sal);
    void savesalary(QTextStream&input);
    void readsalary(QTextStream&output);
};

#endif // SALARY_H
