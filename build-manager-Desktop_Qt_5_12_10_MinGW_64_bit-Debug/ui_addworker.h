/********************************************************************************
** Form generated from reading UI file 'addworker.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORKER_H
#define UI_ADDWORKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addworker
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *addworker)
    {
        if (addworker->objectName().isEmpty())
            addworker->setObjectName(QString::fromUtf8("addworker"));
        addworker->resize(900, 600);
        addworker->setMinimumSize(QSize(0, 0));
        pushButton = new QPushButton(addworker);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(800, 500, 80, 20));
        pushButton_2 = new QPushButton(addworker);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 500, 80, 20));
        layoutWidget = new QWidget(addworker);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 50, 62, 461));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        layoutWidget1 = new QWidget(addworker);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(240, 33, 110, 501));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_2->addWidget(dateEdit);

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout_2->addWidget(lineEdit_8);


        retranslateUi(addworker);

        QMetaObject::connectSlotsByName(addworker);
    } // setupUi

    void retranslateUi(QDialog *addworker)
    {
        addworker->setWindowTitle(QApplication::translate("addworker", "\350\257\267\350\276\223\345\205\245\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("addworker", "\345\217\226\346\266\210", nullptr));
        pushButton_2->setText(QApplication::translate("addworker", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("addworker", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("addworker", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("addworker", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_4->setText(QApplication::translate("addworker", "\345\205\245\350\201\214\346\227\245\346\234\237\357\274\232", nullptr));
        label_5->setText(QApplication::translate("addworker", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_6->setText(QApplication::translate("addworker", "\344\275\217\345\235\200\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addworker: public Ui_addworker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORKER_H
