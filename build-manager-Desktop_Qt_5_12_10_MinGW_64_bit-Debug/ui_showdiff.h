/********************************************************************************
** Form generated from reading UI file 'showdiff.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDIFF_H
#define UI_SHOWDIFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_showdiff
{
public:
    QTableView *show;

    void setupUi(QDialog *showdiff)
    {
        if (showdiff->objectName().isEmpty())
            showdiff->setObjectName(QString::fromUtf8("showdiff"));
        showdiff->resize(1800, 1200);
        show = new QTableView(showdiff);
        show->setObjectName(QString::fromUtf8("show"));
        show->setGeometry(QRect(0, 0, 1800, 1200));

        retranslateUi(showdiff);

        QMetaObject::connectSlotsByName(showdiff);
    } // setupUi

    void retranslateUi(QDialog *showdiff)
    {
        showdiff->setWindowTitle(QApplication::translate("showdiff", "\345\257\271\346\257\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showdiff: public Ui_showdiff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDIFF_H
