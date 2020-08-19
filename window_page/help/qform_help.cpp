#include "qform_help.h"
#include "ui_qform_help.h"

QForm_Help::QForm_Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Help)
{
    ui->setupUi(this);

    swBtn = new SwitchButton(this);
    swBtn->setBgColorOn(QColor(162, 121, 197));
    swBtn->setShowText(true);
    swBtn->setAnimation(true);
    swBtn->setTextOff("已关");
    swBtn->setTextOn("已开");
    swBtn->setFixedSize(80,30);


    swBtn->move(260,17);
}

QForm_Help::~QForm_Help()
{
    delete ui;
}
