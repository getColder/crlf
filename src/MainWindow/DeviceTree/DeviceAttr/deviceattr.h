#ifndef DEVICEATTR_H
#define DEVICEATTR_H

#include <QDialog>
#include "ui_deviceattr.h"

class DeviceAttr : public QDialog
{
    Q_OBJECT

public:
    friend class QtClientDemo;
    DeviceAttr(QWidget *parent = 0);
    ~DeviceAttr();

private:
    Ui::DeviceAttrClass ui;
};
#endif //DEVICEATTR_H
