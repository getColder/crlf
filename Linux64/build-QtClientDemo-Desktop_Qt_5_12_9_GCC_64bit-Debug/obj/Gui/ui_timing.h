/********************************************************************************
** Form generated from reading UI file 'timing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMING_H
#define UI_TIMING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimingClass
{
public:
    QTreeWidget *treeWidget;
    QPushButton *pushButton_timing;
    QPushButton *pushButton_exit;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *TimingClass)
    {
        if (TimingClass->objectName().isEmpty())
            TimingClass->setObjectName(QString::fromUtf8("TimingClass"));
        TimingClass->resize(483, 328);
        treeWidget = new QTreeWidget(TimingClass);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 10, 451, 261));
        pushButton_timing = new QPushButton(TimingClass);
        pushButton_timing->setObjectName(QString::fromUtf8("pushButton_timing"));
        pushButton_timing->setGeometry(QRect(10, 290, 81, 23));
        pushButton_exit = new QPushButton(TimingClass);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(380, 290, 81, 23));
        dateTimeEdit = new QDateTimeEdit(TimingClass);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(150, 290, 194, 22));

        retranslateUi(TimingClass);

        QMetaObject::connectSlotsByName(TimingClass);
    } // setupUi

    void retranslateUi(QWidget *TimingClass)
    {
        TimingClass->setWindowTitle(QApplication::translate("TimingClass", "Timing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("TimingClass", "Device tree", nullptr));
        pushButton_timing->setText(QApplication::translate("TimingClass", "Check time", nullptr));
        pushButton_exit->setText(QApplication::translate("TimingClass", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimingClass: public Ui_TimingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMING_H
