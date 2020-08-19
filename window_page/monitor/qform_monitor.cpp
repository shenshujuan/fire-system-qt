#include "qform_monitor.h"
#include "ui_qform_monitor.h"


#include <QStringListModel>
#include <QScroller>


QForm_Monitor::QForm_Monitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Monitor)
{
    ui->setupUi(this);
    WindowInit();
    listWidget_Init();
}

QForm_Monitor::~QForm_Monitor()
{
    delete ui;
}

#define PUSH_SWITCH_HEIGHT 35
#define LABEL_STATE_HEIGHT 26
void QForm_Monitor::WindowInit()
{
    //设置窗口背景色
    //this->setPalette(QPalette(Qt::blue));
    //this->setAutoFillBackground(true);

    //this->setStyleSheet("QWidget{background-color:#bcbcbc}");

//    this->setGeometry(0,0,800, 600);

    //设置各栏高度
    ui->groupBox_top->setMaximumHeight(40);
    ui->groupBox_middle->setMaximumHeight(200);

    //设置各栏样式
    ui->groupBox_top->setStyleSheet("#groupBox_top{background:white; }");
    ui->groupBox_middle_1->setStyleSheet("#groupBox_middle_1{border-image: url(resources/images/rt_fire_bg.png); }");
    ui->groupBox_middle_2->setStyleSheet("#groupBox_middle_2{border-image: url(resources/images/rt_sys_bg.png); }");
    ui->groupBox_middle_3->setStyleSheet("#groupBox_middle_3{border-image: url(resources/images/rt_state_bg.png); }");
    ui->groupBox_bottom_1->setStyleSheet("QGroupBox {background:white; border-radius:10px;}");
    ui->groupBox_bottom_2->setStyleSheet("QGroupBox {background:white; border-radius:10px;}");
    ui->groupBox_bottom_1_1->setMaximumHeight(50);
    ui->groupBox_bottom_2_1->setMaximumHeight(50);
    //设置图标样式

    ui->label_bottom_fireAlarm->setStyleSheet("QLabel {color:red;}");
    ui->label_bottom_feedback->setStyleSheet("QLabel {color:blue;}");

    ui->label_machineWhich->setStyleSheet("QLabel {color:blue ;border-image:url(resources/images/icon_hostid.png);}"
                                          "QLabel {color:blue;}");
    ui->label_sysData->setStyleSheet("QLabel {color:blue;}");
    ui->label_sysName->setStyleSheet("QLabel {color:blue ;font-size:24px;}");


    ui->label_homeAlarmIcon->setText("");
    ui->label_homeAlarmIcon->setStyleSheet("QLabel {image:url(resources/images/rt_fire_img.png);}");

    ui->label_userAddr->setStyleSheet("QLabel {background:white; border-radius:12px;}");
    ui->label_autoSwitch->setStyleSheet("QLabel { color:white;}");
    ui->label_handSwitch->setStyleSheet("QLabel { color:white;}");


    ui->pushButton_autoSwitch->setMinimumHeight(PUSH_SWITCH_HEIGHT);
    ui->pushButton_autoSwitch->setStyleSheet("QPushButton {background:white; border-radius:10px;}");
    ui->pushButton_handSwitch->setMinimumHeight(PUSH_SWITCH_HEIGHT);
    ui->pushButton_handSwitch->setStyleSheet("QPushButton {background:white; border-radius:10px;}");

    ui->groupBox_middle_3_1->setStyleSheet("QLabel { color:white;}");
    ui->label_crtState->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_crtState->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_crtState->setStyleSheet("QLabel {color:blue; background:white; border-radius:2px;}");
    ui->label_canComState->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_canComState->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_canComState->setStyleSheet("QLabel {color:blue; background:white; border-radius:2px;}");
    ui->label_cloudState->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_cloudState->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_cloudState->setStyleSheet("QLabel {color:blue; background:white; border-radius:2px;}");

    ui->label_machine1->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine1->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine1->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine2->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine2->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine2->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine3->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine3->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine3->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine4->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine4->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine4->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine5->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine5->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine5->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine6->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine6->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine6->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine7->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine7->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine7->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine8->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine8->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine8->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine9->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine9->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine9->setStyleSheet("QLabel {background:white; border-radius:2px;}");

    ui->label_machine10->setMinimumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine10->setMaximumHeight(LABEL_STATE_HEIGHT);
    ui->label_machine10->setStyleSheet("QLabel {background:white; border-radius:2px;}");

}

void QForm_Monitor::listWidget_Init()
{
     ui->listWidget_fireAlarm->setViewMode(QListView::ListMode);
     ui->listWidget_fireAlarm->setFlow(QListView::TopToBottom);
     ui->listWidget_fireAlarm->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     ui->listWidget_fireAlarm->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     ui->listWidget_fireAlarm->setVerticalScrollMode(QListWidget::ScrollPerPixel);
     ui->listWidget_fireAlarm->setHorizontalScrollMode(QListWidget::ScrollPerPixel);

     QScroller::grabGesture(ui->listWidget_fireAlarm, QScroller::TouchGesture);
     QScroller::grabGesture(ui->listWidget_fireAlarm, QScroller::LeftMouseButtonGesture);

     for (int i=0; i<100; i++)
     {
         QListWidgetItem *aItem = new QListWidgetItem("第" + QString::number(i) + "项");
         ui->listWidget_fireAlarm->addItem(aItem); //增加一个项
     }
     ui->listWidget_fireAlarm->setStyleSheet(R"(
                         QListWidget::Item { width: 300px; height: 30px; }
                         QListWidget::Item:hover { background: #4CAF50; color: white; }
                         QListWidget::item:selected { background: #e7e7e7; color: #f44336; }
                         QListWidget::item:selected:!active { background: lightgreen; }
                         )");
}















