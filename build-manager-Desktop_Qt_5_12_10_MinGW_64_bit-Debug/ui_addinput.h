/********************************************************************************
** Form generated from reading UI file 'addinput.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINPUT_H
#define UI_ADDINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addinput
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *addinput)
    {
        if (addinput->objectName().isEmpty())
            addinput->setObjectName(QString::fromUtf8("addinput"));
        addinput->resize(400, 300);
        label = new QLabel(addinput);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 54, 12));
        pushButton = new QPushButton(addinput);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 220, 80, 20));
        label_8 = new QLabel(addinput);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 140, 16, 16));
        label_9 = new QLabel(addinput);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 140, 54, 12));
        label_10 = new QLabel(addinput);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 140, 54, 12));
        lineEdit_7 = new QLineEdit(addinput);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(250, 140, 41, 20));
        lineEdit_8 = new QLineEdit(addinput);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(310, 140, 41, 20));
        pushButton_2 = new QPushButton(addinput);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 220, 80, 20));
        widget = new QWidget(addinput);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 30, 110, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout->addWidget(lineEdit_6);

        widget1 = new QWidget(addinput);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 30, 110, 211));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);


        retranslateUi(addinput);

        QMetaObject::connectSlotsByName(addinput);
    } // setupUi

    void retranslateUi(QDialog *addinput)
    {
        addinput->setWindowTitle(QApplication::translate("addinput", "\350\276\223\345\205\245\350\201\214\345\267\245\344\277\241\346\201\257", nullptr));
        label->setText(QApplication::translate("addinput", "\350\276\223\345\205\245\347\252\227\345\217\243", nullptr));
        pushButton->setText(QApplication::translate("addinput", "\347\241\256\345\256\232", nullptr));
        label_8->setText(QApplication::translate("addinput", "\345\271\264", nullptr));
        label_9->setText(QApplication::translate("addinput", "\346\234\210", nullptr));
        label_10->setText(QApplication::translate("addinput", "\346\227\245", nullptr));
        pushButton_2->setText(QApplication::translate("addinput", "\345\217\226\346\266\210", nullptr));
        label_2->setText(QApplication::translate("addinput", "\345\267\245\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("addinput", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("addinput", "\345\271\264\351\276\204\357\274\232", nullptr));
        label_5->setText(QApplication::translate("addinput", "\345\205\245\350\201\214\346\227\245\346\234\237\357\274\232", nullptr));
        label_6->setText(QApplication::translate("addinput", "\347\224\265\350\257\235\357\274\232", nullptr));
        label_7->setText(QApplication::translate("addinput", "\344\275\217\345\235\200\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addinput: public Ui_addinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINPUT_H
