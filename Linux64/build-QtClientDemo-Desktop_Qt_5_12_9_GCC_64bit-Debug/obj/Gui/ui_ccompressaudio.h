/********************************************************************************
** Form generated from reading UI file 'ccompressaudio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCOMPRESSAUDIO_H
#define UI_CCOMPRESSAUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CCompressAudioClass
{
public:
    QPushButton *btnExit;
    QPushButton *btnSave;
    QPushButton *btnRefresh;
    QComboBox *comboAudioType;
    QLabel *label;

    void setupUi(QDialog *CCompressAudioClass)
    {
        if (CCompressAudioClass->objectName().isEmpty())
            CCompressAudioClass->setObjectName(QString::fromUtf8("CCompressAudioClass"));
        CCompressAudioClass->resize(412, 271);
        btnExit = new QPushButton(CCompressAudioClass);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        btnExit->setGeometry(QRect(280, 200, 75, 23));
        btnSave = new QPushButton(CCompressAudioClass);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(190, 200, 75, 23));
        btnRefresh = new QPushButton(CCompressAudioClass);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(60, 200, 75, 23));
        comboAudioType = new QComboBox(CCompressAudioClass);
        comboAudioType->setObjectName(QString::fromUtf8("comboAudioType"));
        comboAudioType->setGeometry(QRect(215, 100, 141, 31));
        label = new QLabel(CCompressAudioClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 100, 181, 31));

        retranslateUi(CCompressAudioClass);

        QMetaObject::connectSlotsByName(CCompressAudioClass);
    } // setupUi

    void retranslateUi(QDialog *CCompressAudioClass)
    {
        CCompressAudioClass->setWindowTitle(QApplication::translate("CCompressAudioClass", "CCompressAudio", nullptr));
        btnExit->setText(QApplication::translate("CCompressAudioClass", "Cannel", nullptr));
        btnSave->setText(QApplication::translate("CCompressAudioClass", "Confirm", nullptr));
        btnRefresh->setText(QApplication::translate("CCompressAudioClass", "Update", nullptr));
        label->setText(QApplication::translate("CCompressAudioClass", "Audio talk code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CCompressAudioClass: public Ui_CCompressAudioClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCOMPRESSAUDIO_H
