#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QDebug>
#include "ui_mainwindow.h"
#include "qdir.h"
#include "qfiledialog.h"
#include <QStandardItem>
#include <qvariant.h>
#include <QMessageBox>
#include <QAbstractItemDelegate>
#include <QModelIndex>
#include"workerlist.h"
#include"inputid.h"
#include"addworker.h"
#include"salary.h"
#include"readonlydelegate.h"
#include"confirm.h"
#include"cmp.h"
#include"showdiff.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void showall();
    void showsal(int index);
    int current;//1员工，2工资
    void on_ShowInfotableView_changed();
private slots:
    void on_actionf1_triggered();

    void on_actionf2_triggered();

    void on_actionexit_triggered();

    void on_actiondel_triggered();

    void on_actionadd_triggered();

    void on_actionshowall_triggered();

    void on_actionshowon_triggered();

    void on_actioncompare_triggered();

private:
    Ui::MainWindow *ui;
    workerlist nowlist; //数据汇总类
    QStandardItemModel * infomodel; //显示表格信息数据模型
};

#endif // MAINWINDOW_H
