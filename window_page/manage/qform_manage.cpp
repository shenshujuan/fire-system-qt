#include "qform_manage.h"
#include "ui_qform_manage.h"

QForm_Manage::QForm_Manage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Manage)
{
    ui->setupUi(this);
}

QForm_Manage::~QForm_Manage()
{
    delete ui;
}
