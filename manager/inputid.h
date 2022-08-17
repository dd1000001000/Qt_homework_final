#ifndef INPUTID_H
#define INPUTID_H
#include"worker.h"
#include <QDialog>
#include"workerlist.h"
#include<QMessageBox>
#include<QDebug>
#include"confirm.h"
namespace Ui {
class inputid;
}

class inputid : public QDialog
{
    Q_OBJECT

public:
    explicit inputid(QWidget *parent = nullptr);
    ~inputid();
    int getidnum();
    int inputidnum;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::inputid *ui;
};

#endif // INPUTID_H
