/********************************************************************************
** Form generated from reading UI file 'remoteupdate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEUPDATE_H
#define UI_REMOTEUPDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_RemoteUpdateClass
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton_setnetworktype;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_browse;
    QPushButton *pushButton_update;
    QPushButton *pushButton_cancel;
    QScrollBar *horizontalScrollBar;

    void setupUi(QDialog *RemoteUpdateClass)
    {
        if (RemoteUpdateClass->objectName().isEmpty())
            RemoteUpdateClass->setObjectName(QString::fromUtf8("RemoteUpdateClass"));
        RemoteUpdateClass->resize(511, 200);
        label = new QLabel(RemoteUpdateClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 54, 13));
        comboBox = new QComboBox(RemoteUpdateClass);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 20, 131, 22));
        pushButton_setnetworktype = new QPushButton(RemoteUpdateClass);
        pushButton_setnetworktype->setObjectName(QString::fromUtf8("pushButton_setnetworktype"));
        pushButton_setnetworktype->setGeometry(QRect(250, 20, 101, 23));
        label_2 = new QLabel(RemoteUpdateClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 54, 13));
        lineEdit = new QLineEdit(RemoteUpdateClass);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 70, 331, 20));
        pushButton_browse = new QPushButton(RemoteUpdateClass);
        pushButton_browse->setObjectName(QString::fromUtf8("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(430, 70, 61, 23));
        pushButton_update = new QPushButton(RemoteUpdateClass);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(130, 160, 75, 23));
        pushButton_cancel = new QPushButton(RemoteUpdateClass);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(300, 160, 75, 23));
        horizontalScrollBar = new QScrollBar(RemoteUpdateClass);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(20, 120, 471, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        retranslateUi(RemoteUpdateClass);

        QMetaObject::connectSlotsByName(RemoteUpdateClass);
    } // setupUi

    void retranslateUi(QDialog *RemoteUpdateClass)
    {
        RemoteUpdateClass->setWindowTitle(QApplication::translate("RemoteUpdateClass", "RemoteUpdate", nullptr));
        label->setText(QApplication::translate("RemoteUpdateClass", "Network", nullptr));
        comboBox->setItemText(0, QApplication::translate("RemoteUpdateClass", "LAN", nullptr));
        comboBox->setItemText(1, QApplication::translate("RemoteUpdateClass", "WAN", nullptr));

        pushButton_setnetworktype->setText(QApplication::translate("RemoteUpdateClass", "Setup network", nullptr));
        label_2->setText(QApplication::translate("RemoteUpdateClass", "Firmware", nullptr));
        pushButton_browse->setText(QApplication::translate("RemoteUpdateClass", "Browse", nullptr));
        pushButton_update->setText(QApplication::translate("RemoteUpdateClass", "Upgrade", nullptr));
        pushButton_cancel->setText(QApplication::translate("RemoteUpdateClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoteUpdateClass: public Ui_RemoteUpdateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEUPDATE_H
