#include "qform_test.h"
#include "ui_qform_test.h"

QForm_Test::QForm_Test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Test)
{
    ui->setupUi(this);
}

QForm_Test::~QForm_Test()
{
    delete ui;
}
