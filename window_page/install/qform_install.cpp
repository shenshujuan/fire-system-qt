#include "qform_install.h"
#include "ui_qform_install.h"


#define BUTTON_BOTTOM_STYLE         "QPushButton {color:blue;  border-bottom:3px solid blue  }"
#define BUTTON_BOTTOM_NONE_STYLE    "QPushButton {color:black; border-bottom:none  }"

#define CHILDREN_WINDOW_MAC_1 0
#define CHILDREN_WINDOW_MAC_2 1
#define CHILDREN_WINDOW_MAC_3 2
#define CHILDREN_WINDOW_MAC_4 3
#define CHILDREN_WINDOW_MAC_5 4
#define CHILDREN_WINDOW_MAC_6 5
#define CHILDREN_WINDOW_MAC_7 6
#define CHILDREN_WINDOW_MAC_8 7
#define CHILDREN_WINDOW_MAC_9 8
#define CHILDREN_WINDOW_MAC_10 9

QForm_Install::QForm_Install(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Install)
{
    ui->setupUi(this);
    WindowInit();


    list_loop.clear();
    for(int i=1;i<16;i++)
    {

            MyBoardList * testList = new MyBoardList(i, 1, 1);
            ui->verticalLayout_loop->addWidget(testList,0,Qt::AlignTop);//AlignTop
            list_loop << testList;

            testList->swBtn->setChecked(true);
    }
    ui->verticalLayout_loop->addStretch();
}

QForm_Install::~QForm_Install()
{
    delete ui;
}

void QForm_Install::WindowInit()
{

    ui->groupBox_top->setStyleSheet("QGroupBox {background:white; }"\
                                    "QPushButton { min-height: 35; }");
    ui->groupBox_bottom_1->setStyleSheet("QGroupBox {background:white; border-radius:10px;}");
    ui->groupBox_bottom_2->setStyleSheet("QGroupBox {background:white; border-radius:10px;}");
    ui->groupBox_bottom_3->setStyleSheet("QGroupBox {background:white; border-radius:10px;}");
}


void QForm_Install::chose_which_window(int index)
{

    ui->pushButton_mac_1->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_2->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_3->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_4->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_5->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_6->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_7->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_8->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_9->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);
    ui->pushButton_mac_10->setStyleSheet(BUTTON_BOTTOM_NONE_STYLE);

    switch(index)
    {
    case CHILDREN_WINDOW_MAC_1:
        ui->pushButton_mac_1->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_2:
        ui->pushButton_mac_2->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_3:
        ui->pushButton_mac_3->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_4:
        ui->pushButton_mac_4->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_5:
        ui->pushButton_mac_5->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_6:
        ui->pushButton_mac_6->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_7:
        ui->pushButton_mac_7->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_8:
        ui->pushButton_mac_8->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_9:
        ui->pushButton_mac_9->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    case CHILDREN_WINDOW_MAC_10:
        ui->pushButton_mac_10->setStyleSheet(BUTTON_BOTTOM_STYLE);
        break;
    default:
        break;
    }
}

void QForm_Install::on_pushButton_mac_1_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_1);
}

void QForm_Install::on_pushButton_mac_2_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_2);
}
void QForm_Install::on_pushButton_mac_3_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_3);
}
void QForm_Install::on_pushButton_mac_4_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_4);
}
void QForm_Install::on_pushButton_mac_5_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_5);
}
void QForm_Install::on_pushButton_mac_6_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_6);
}
void QForm_Install::on_pushButton_mac_7_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_7);
}
void QForm_Install::on_pushButton_mac_8_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_8);
}
void QForm_Install::on_pushButton_mac_9_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_9);
}
void QForm_Install::on_pushButton_mac_10_clicked()
{
    chose_which_window(CHILDREN_WINDOW_MAC_10);
}
