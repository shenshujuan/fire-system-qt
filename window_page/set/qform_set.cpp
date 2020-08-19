#include "qform_set.h"
#include "ui_qform_set.h"

QForm_Set::QForm_Set(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Set)
{
    ui->setupUi(this);
}

QForm_Set::~QForm_Set()
{
    delete ui;
}
