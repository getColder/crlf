/********************************************************************************
** Form generated from reading UI file 'shutdowndevice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHUTDOWNDEVICE_H
#define UI_SHUTDOWNDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShutdownDeviceClass
{
public:
    QPushButton *pushButton_sure;
    QLabel *label;
    QPushButton *pushButton_cancel;

    void setupUi(QWidget *ShutdownDeviceClass)
    {
        if (ShutdownDeviceClass->objectName().isEmpty())
            ShutdownDeviceClass->setObjectName(QString::fromUtf8("ShutdownDeviceClass"));
        ShutdownDeviceClass->resize(309, 106);
        pushButton_sure = new QPushButton(ShutdownDeviceClass);
        pushButton_sure->setObjectName(QString::fromUtf8("pushButton_sure"));
        pushButton_sure->setGeometry(QRect(40, 50, 75, 23));
        label = new QLabel(ShutdownDeviceClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 191, 21));
        pushButton_cancel = new QPushButton(ShutdownDeviceClass);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(170, 50, 75, 23));

        retranslateUi(ShutdownDeviceClass);

        QMetaObject::connectSlotsByName(ShutdownDeviceClass);
    } // setupUi

    void retranslateUi(QWidget *ShutdownDeviceClass)
    {
        ShutdownDeviceClass->setWindowTitle(QApplication::translate("ShutdownDeviceClass", "ShutdownDevice", nullptr));
        pushButton_sure->setText(QApplication::translate("ShutdownDeviceClass", "Sure", nullptr));
        label->setText(QApplication::translate("ShutdownDeviceClass", "Sure to shut down device ?", nullptr));
        pushButton_cancel->setText(QApplication::translate("ShutdownDeviceClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShutdownDeviceClass: public Ui_ShutdownDeviceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHUTDOWNDEVICE_H
