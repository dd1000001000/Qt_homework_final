/********************************************************************************
** Form generated from reading UI file 'confirm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRM_H
#define UI_CONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_confirm
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *confirm)
    {
        if (confirm->objectName().isEmpty())
            confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->resize(273, 141);
        pushButton = new QPushButton(confirm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 80, 20));
        pushButton_2 = new QPushButton(confirm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 60, 80, 20));

        retranslateUi(confirm);

        QMetaObject::connectSlotsByName(confirm);
    } // setupUi

    void retranslateUi(QDialog *confirm)
    {
        confirm->setWindowTitle(QApplication::translate("confirm", "\347\241\256\345\256\232\345\220\227", nullptr));
        pushButton->setText(QApplication::translate("confirm", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("confirm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirm: public Ui_confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRM_H
