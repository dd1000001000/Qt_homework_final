/********************************************************************************
** Form generated from reading UI file 'readfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READFILE_H
#define UI_READFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_readfile
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *readfile)
    {
        if (readfile->objectName().isEmpty())
            readfile->setObjectName(QString::fromUtf8("readfile"));
        readfile->resize(400, 300);
        widget = new QWidget(readfile);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 60, 196, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(readfile);

        QMetaObject::connectSlotsByName(readfile);
    } // setupUi

    void retranslateUi(QDialog *readfile)
    {
        readfile->setWindowTitle(QApplication::translate("readfile", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("readfile", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class readfile: public Ui_readfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READFILE_H
