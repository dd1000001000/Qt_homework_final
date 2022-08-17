/********************************************************************************
** Form generated from reading UI file 'cmp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMP_H
#define UI_CMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cmp
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;

    void setupUi(QDialog *cmp)
    {
        if (cmp->objectName().isEmpty())
            cmp->setObjectName(QString::fromUtf8("cmp"));
        cmp->resize(550, 313);
        pushButton = new QPushButton(cmp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 180, 80, 20));
        pushButton_2 = new QPushButton(cmp);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 220, 80, 20));
        lineEdit = new QLineEdit(cmp);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 110, 113, 20));
        lineEdit_2 = new QLineEdit(cmp);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 110, 113, 20));
        label = new QLabel(cmp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 82, 51, 20));
        label_2 = new QLabel(cmp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 82, 51, 20));
        comboBox = new QComboBox(cmp);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 180, 111, 21));
        label_3 = new QLabel(cmp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 160, 54, 12));

        retranslateUi(cmp);

        QMetaObject::connectSlotsByName(cmp);
    } // setupUi

    void retranslateUi(QDialog *cmp)
    {
        cmp->setWindowTitle(QApplication::translate("cmp", "\350\257\267\350\276\223\345\205\245", nullptr));
        pushButton->setText(QApplication::translate("cmp", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QApplication::translate("cmp", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("cmp", "\350\201\214\345\267\2451", nullptr));
        label_2->setText(QApplication::translate("cmp", "\350\201\214\345\267\2452", nullptr));
        comboBox->setItemText(0, QApplication::translate("cmp", "\344\270\200\346\234\210", nullptr));
        comboBox->setItemText(1, QApplication::translate("cmp", "\344\272\214\346\234\210", nullptr));
        comboBox->setItemText(2, QApplication::translate("cmp", "\344\270\211\346\234\210", nullptr));
        comboBox->setItemText(3, QApplication::translate("cmp", "\345\233\233\346\234\210", nullptr));
        comboBox->setItemText(4, QApplication::translate("cmp", "\344\272\224\346\234\210", nullptr));
        comboBox->setItemText(5, QApplication::translate("cmp", "\345\205\255\346\234\210", nullptr));
        comboBox->setItemText(6, QApplication::translate("cmp", "\344\270\203\346\234\210", nullptr));
        comboBox->setItemText(7, QApplication::translate("cmp", "\345\205\253\346\234\210", nullptr));
        comboBox->setItemText(8, QApplication::translate("cmp", "\344\271\235\346\234\210", nullptr));
        comboBox->setItemText(9, QApplication::translate("cmp", "\345\215\201\346\234\210", nullptr));
        comboBox->setItemText(10, QApplication::translate("cmp", "\345\215\201\344\270\200\346\234\210", nullptr));
        comboBox->setItemText(11, QApplication::translate("cmp", "\345\215\201\344\272\214\346\234\210", nullptr));

        label_3->setText(QApplication::translate("cmp", "\345\257\271\346\257\224\346\234\210\344\273\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmp: public Ui_cmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMP_H
