#include "qform_inquire.h"
#include "ui_qform_inquire.h"
#include "window_page/window_page.h"

#include <QListWidget>
#include <QScroller>

#define BUTTON_BOTTOM_STYLE         "QPushButton {color:blue;  border-bottom:3px solid blue  }"
#define BUTTON_BOTTOM_NONE_STYLE    "QPushButton {color:black; border-bottom:none  }"

#define CHILDREN_WINDOW_FIRE 0
#define CHILDREN_WINDOW_FAULT 1
#define CHILDREN_WINDOW_START 2
#define CHILDREN_WINDOW_FEEDBACK 3
#define CHILDREN_WINDOW_SHIELD 4
#define CHILDREN_WINDOW_SUPERVISE 5
#define CHILDREN_WINDOW_OPERATINGRECORD 6

QForm_Inquire::QForm_Inquire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Inquire)
{
    ui->setupUi(this);
    WindowInit();
}

QForm_Inquire::~QForm_Inquire()
{
    delete ui;
}

void QForm_Inquire::WindowInit()
{
    int index = 0;

    ui->tabWidget_main->tabBar()->hide();//隐藏tab标签
    ui->tabWidget_main->setDocumentMode(true);//去除tabWidget边框
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    ui->tabWidget_main->setVisible(true);//设置组可见

    QForm_Inquire_Fire *form_inquire_fire = new QForm_Inquire_Fire(this); //不指定父窗口，单独用show()方法显示
    form_inquire_fire->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_inquire_fire, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    QForm_Inquire_Fault *form_inquire_fault = new QForm_Inquire_Fault(this); //不指定父窗口，单独用show()方法显示
    form_inquire_fault->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_inquire_fault, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    ui->groupBox_top->setStyleSheet("QGroupBox {background:white; }");
    ui->groupBox_top_1->setStyleSheet("QPushButton { min-height: 35; }");
    ui->groupBox_top_2->setStyleSheet("QPushButton { min-height: 25; color: white; background:blue; border-radius:3px;}");

    chose_which_window(CHILDREN_WINDOW_FIRE);
}

void QForm_Inquire::chose_which_window(int index)
{

    ui->pushButton_fire->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_fault->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_start->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_feedBack->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_shield->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_supervise->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_operatingRecord->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);

    switch(index)
    {
    case CHILDREN_WINDOW_FIRE:
        ui->pushButton_fire->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    case CHILDREN_WINDOW_FAULT:
        ui->pushButton_fault->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    case CHILDREN_WINDOW_START:
        ui->pushButton_start->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    case CHILDREN_WINDOW_FEEDBACK:
        ui->pushButton_feedBack->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    case CHILDREN_WINDOW_SHIELD:
        ui->pushButton_shield->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    case CHILDREN_WINDOW_SUPERVISE:
        ui->pushButton_supervise->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    case CHILDREN_WINDOW_OPERATINGRECORD:
        ui->pushButton_operatingRecord->setStyleSheet(BUTTON_BOTTOM_STYLE);
        ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
        break;
    default:
        break;
    }
}


void QForm_Inquire::on_pushButton_fire_clicked()
{
    chose_which_window(CHILDREN_WINDOW_FIRE);
}

void QForm_Inquire::on_pushButton_fault_clicked()
{
    chose_which_window(CHILDREN_WINDOW_FAULT);
}

void QForm_Inquire::on_pushButton_start_clicked()
{
    chose_which_window(CHILDREN_WINDOW_START);
}

void QForm_Inquire::on_pushButton_feedBack_clicked()
{
    chose_which_window(CHILDREN_WINDOW_FEEDBACK);
}

void QForm_Inquire::on_pushButton_shield_clicked()
{
    chose_which_window(CHILDREN_WINDOW_SHIELD);
}

void QForm_Inquire::on_pushButton_supervise_clicked()
{
    chose_which_window(CHILDREN_WINDOW_SUPERVISE);
}

void QForm_Inquire::on_pushButton_operatingRecord_clicked()
{
    chose_which_window(CHILDREN_WINDOW_OPERATINGRECORD);
}
