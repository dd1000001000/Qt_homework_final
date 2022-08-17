/********************************************************************************
** Form generated from reading UI file 'editsalary.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSALARY_H
#define UI_EDITSALARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editsalary
{
public:
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;

    void setupUi(QDialog *editsalary)
    {
        if (editsalary->objectName().isEmpty())
            editsalary->setObjectName(QString::fromUtf8("editsalary"));
        editsalary->resize(647, 398);
        pushButton_2 = new QPushButton(editsalary);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(490, 340, 80, 20));
        layoutWidget = new QWidget(editsalary);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 20, 62, 321));
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

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        comboBox = new QComboBox(editsalary);
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
        comboBox->setGeometry(QRect(450, 50, 101, 31));
        layoutWidget1 = new QWidget(editsalary);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 20, 110, 331));
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

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget1);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget1);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        verticalLayout_2->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(layoutWidget1);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        verticalLayout_2->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(layoutWidget1);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        verticalLayout_2->addWidget(lineEdit_8);


        retranslateUi(editsalary);

        QMetaObject::connectSlotsByName(editsalary);
    } // setupUi

    void retranslateUi(QDialog *editsalary)
    {
        editsalary->setWindowTitle(QApplication::translate("editsalary", "\350\257\267\350\276\223\345\205\245", nullptr));
        pushButton_2->setText(QApplication::translate("editsalary", "\347\241\256\345\256\232", nullptr));
        label->setText(QApplication::translate("editsalary", "\345\237\272\346\234\254\345\267\245\350\265\204\357\274\232", nullptr));
        label_2->setText(QApplication::translate("editsalary", "\345\262\227\344\275\215\345\267\245\350\265\204\357\274\232", nullptr));
        label_3->setText(QApplication::translate("editsalary", "\345\267\245\351\276\204\345\267\245\350\265\204\357\274\232", nullptr));
        label_4->setText(QApplication::translate("editsalary", "\346\264\245\350\264\264\357\274\232", nullptr));
        label_5->setText(QApplication::translate("editsalary", "\345\262\227\350\264\264", nullptr));
        label_6->setText(QApplication::translate("editsalary", "\350\241\245\350\264\264\357\274\232", nullptr));
        label_7->setText(QApplication::translate("editsalary", "\346\210\277\350\264\264\357\274\232", nullptr));
        label_8->setText(QApplication::translate("editsalary", "\344\272\244\351\200\232\350\241\245\350\264\264\357\274\232", nullptr));
        comboBox->setItemText(0, QApplication::translate("editsalary", "\344\270\200\346\234\210", nullptr));
        comboBox->setItemText(1, QApplication::translate("editsalary", "\344\272\214\346\234\210", nullptr));
        comboBox->setItemText(2, QApplication::translate("editsalary", "\344\270\211\346\234\210", nullptr));
        comboBox->setItemText(3, QApplication::translate("editsalary", "\345\233\233\346\234\210", nullptr));
        comboBox->setItemText(4, QApplication::translate("editsalary", "\344\272\224\346\234\210", nullptr));
        comboBox->setItemText(5, QApplication::translate("editsalary", "\345\205\255\346\234\210", nullptr));
        comboBox->setItemText(6, QApplication::translate("editsalary", "\344\270\203\346\234\210", nullptr));
        comboBox->setItemText(7, QApplication::translate("editsalary", "\345\205\253\346\234\210", nullptr));
        comboBox->setItemText(8, QApplication::translate("editsalary", "\344\271\235\346\234\210", nullptr));
        comboBox->setItemText(9, QApplication::translate("editsalary", "\345\215\201\346\234\210", nullptr));
        comboBox->setItemText(10, QApplication::translate("editsalary", "\345\215\201\344\270\200\346\234\210", nullptr));
        comboBox->setItemText(11, QApplication::translate("editsalary", "\345\215\201\344\272\214\346\234\210", nullptr));

    } // retranslateUi

};

namespace Ui {
    class editsalary: public Ui_editsalary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSALARY_H
