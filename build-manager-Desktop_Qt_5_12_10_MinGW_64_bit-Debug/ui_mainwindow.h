/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionf1;
    QAction *actionf2;
    QAction *actionadd;
    QAction *actiondel;
    QAction *actionshowall;
    QAction *actionshowon;
    QAction *actionexit;
    QAction *actioncompare;
    QWidget *centralwidget;
    QTableView *showworkers;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1800, 1200);
        actionf1 = new QAction(MainWindow);
        actionf1->setObjectName(QString::fromUtf8("actionf1"));
        actionf2 = new QAction(MainWindow);
        actionf2->setObjectName(QString::fromUtf8("actionf2"));
        actionadd = new QAction(MainWindow);
        actionadd->setObjectName(QString::fromUtf8("actionadd"));
        actiondel = new QAction(MainWindow);
        actiondel->setObjectName(QString::fromUtf8("actiondel"));
        actionshowall = new QAction(MainWindow);
        actionshowall->setObjectName(QString::fromUtf8("actionshowall"));
        actionshowon = new QAction(MainWindow);
        actionshowon->setObjectName(QString::fromUtf8("actionshowon"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actioncompare = new QAction(MainWindow);
        actioncompare->setObjectName(QString::fromUtf8("actioncompare"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        showworkers = new QTableView(centralwidget);
        showworkers->setObjectName(QString::fromUtf8("showworkers"));
        showworkers->setGeometry(QRect(0, 0, 1800, 1200));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addSeparator();
        menu->addAction(actionf1);
        menu->addSeparator();
        menu->addAction(actionf2);
        menu_2->addAction(actionadd);
        menu_2->addAction(actiondel);
        menu_2->addAction(actionshowall);
        menu_2->addAction(actionshowon);
        menu_2->addAction(actioncompare);
        menu_3->addAction(actionexit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\201\214\345\267\245\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionf1->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionf2->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\344\277\241\346\201\257", nullptr));
        actionadd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\201\214\345\267\245", nullptr));
        actiondel->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\201\214\345\267\245", nullptr));
        actionshowall->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\211\200\346\234\211\350\201\214\345\267\245\344\277\241\346\201\257", nullptr));
        actionshowon->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\347\211\271\345\256\232\350\201\214\345\267\245\346\234\210\345\267\245\350\265\204\344\277\241\346\201\257", nullptr));
        actionexit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actioncompare->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\267\245\350\265\204", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\256\241\347\220\206\350\201\214\345\267\245", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
