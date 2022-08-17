#ifndef CMP_H
#define CMP_H
#include"confirm.h"
#include <QDialog>
#include<qdebug.h>
namespace Ui {
class cmp;
}

class cmp : public QDialog
{
    Q_OBJECT

public:
    explicit cmp(QWidget *parent = nullptr);
    ~cmp();
    int idnum1,idnum2,month;
    int get1();
    int get2();
    int getm();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cmp *ui;
};

#endif // CMP_H
