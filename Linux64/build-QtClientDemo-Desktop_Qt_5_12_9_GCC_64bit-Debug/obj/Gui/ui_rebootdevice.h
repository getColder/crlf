/********************************************************************************
** Form generated from reading UI file 'rebootdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REBOOTDEVICE_H
#define UI_REBOOTDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RebootDeviceClass
{
public:
    QPushButton *pushButton_sure;
    QPushButton *pushButton_cancel;
    QLabel *label;

    void setupUi(QDialog *RebootDeviceClass)
    {
        if (RebootDeviceClass->objectName().isEmpty())
            RebootDeviceClass->setObjectName(QString::fromUtf8("RebootDeviceClass"));
        RebootDeviceClass->resize(279, 104);
        pushButton_sure = new QPushButton(RebootDeviceClass);
        pushButton_sure->setObjectName(QString::fromUtf8("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(60, 50, 77, 25));
        pushButton_cancel = new QPushButton(RebootDeviceClass);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(190, 50, 77, 25));
        label = new QLabel(RebootDeviceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 101, 20));

        retranslateUi(RebootDeviceClass);

        QMetaObject::connectSlotsByName(RebootDeviceClass);
    } // setupUi

    void retranslateUi(QDialog *RebootDeviceClass)
    {
        RebootDeviceClass->setWindowTitle(QApplication::translate("RebootDeviceClass", "RebootDevice", nullptr));
        pushButton_sure->setText(QApplication::translate("RebootDeviceClass", "Confirm", nullptr));
        pushButton_cancel->setText(QApplication::translate("RebootDeviceClass", "Cancel", nullptr));
        label->setText(QApplication::translate("RebootDeviceClass", "Sure to reboot ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RebootDeviceClass: public Ui_RebootDeviceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REBOOTDEVICE_H
