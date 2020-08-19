#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "window_page/window_page.h"

#include <QDesktopWidget>
#include <QMessageBox>
#include <QGraphicsOpacityEffect>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mainWindowInit();
    menuButton_Init();
    test();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::test()
{

}


void MainWindow::mainWindowInit()
{
    int index = 0;

    //this->setWindowFlags(Qt::FramelessWindowHint);                  //设置主窗口为无边框
    //this->setGeometry(0,0,QApplication::desktop()->screenGeometry().width(), QApplication::desktop()->screenGeometry().height()); //设置全屏
    //this->setGeometry(0,0,800,600);//设置窗口尺寸
    this->setGeometry(0,0,QApplication::desktop()->screenGeometry().width(),  QApplication::desktop()->screenGeometry().height());
/*
    //设置主窗口背景图片
    QPixmap pixmap = QPixmap("resources/images/background3.jpg").scaled(this->size());
    QPalette palette(this->palette());
    palette.setBrush(QPalette::Background, QBrush(pixmap));
    this->setPalette(palette);
*/
    this->setStyleSheet("MainWindow{border-image: url(resources/images/background2.jpg); }");//设置主窗口背景图片
    //this->setStyleSheet("QMainWindow{background-color:gray }");//设置主窗口背景颜色

    //设置mainwindow groubox边框不可见
    ui->groupBox_menu->setStyleSheet("border:none");//设置菜单栏样式
    ui->groupBox_window->setStyleSheet("border:none;background:transparent");//设置窗口样式
    //ui->groupBox_window->setStyleSheet("border:none;background:gray");//设置窗口样式
    ui->groupBox_menu_logo->setStyleSheet("QGroupBox{background-color:gray}");


    ui->tabWidget_main->setVisible(true);//设置组可见
    ui->tabWidget_main->tabBar()->hide();//隐藏tab标签
    ui->tabWidget_main->setDocumentMode(true);//去除tabWidget边框
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面


    QForm_Monitor *form_monitor = new QForm_Monitor(this); //不指定父窗口，单独用show()方法显示
    form_monitor->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_monitor, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签



    QForm_Inquire *form_inquire = new QForm_Inquire(this); //不指定父窗口，单独用show()方法显示
    form_inquire->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_inquire, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    QForm_Manage *form_manage = new QForm_Manage(this); //不指定父窗口，单独用show()方法显示
    form_manage->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_manage, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    QForm_Test *form_test = new QForm_Test(this); //不指定父窗口，单独用show()方法显示
    form_test->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_test, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    QForm_Install *form_install = new QForm_Install(this); //不指定父窗口，单独用show()方法显示
    form_install->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_install, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    QForm_Set *form_set = new QForm_Set(this); //不指定父窗口，单独用show()方法显示
    form_set->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_set, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签

    QForm_Help *form_help = new QForm_Help(this); //不指定父窗口，单独用show()方法显示
    form_help->setAttribute(Qt::WA_DeleteOnClose); //关闭时自动删除
    index=ui->tabWidget_main->addTab(form_help, "tab" + QString::number(ui->tabWidget_main->count()));//设置tab标签



    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面


}

void MainWindow::menuButton_Init()
{
    on_pushButton_menuLess_clicked();//设置菜单栏大小
    //设置菜单栏按键样式
    ui->pushButton_menuLess->setStyleSheet      ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuMonitor->setStyleSheet   ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuInquire->setStyleSheet   ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuManage->setStyleSheet    ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuTest->setStyleSheet      ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuInstall->setStyleSheet   ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuSet->setStyleSheet       ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");
    ui->pushButton_menuHelp->setStyleSheet      ("QPushButton{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: rgb(0, 225, 0);}");

}

void MainWindow::on_pushButton_menuLess_clicked()
{
    static bool menuLess = false;
    if(menuLess)
    {
        menuLess = false;
        ui->groupBox_menu->setMinimumSize(QSize(50, 16777215));
        ui->groupBox_menu->setMaximumSize(QSize(50, 16777215));
    }
    else
    {
        menuLess = true;
        ui->groupBox_menu->setMinimumSize(QSize(100, 16777215));
        ui->groupBox_menu->setMaximumSize(QSize(100, 16777215));
    }
}


void MainWindow::on_pushButton_menuMonitor_clicked()
{
    int index = 0;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}

void MainWindow::on_pushButton_menuInquire_clicked()
{
    int index = 1;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}

void MainWindow::on_pushButton_menuManage_clicked()
{
    int index = 2;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}

void MainWindow::on_pushButton_menuTest_clicked()
{
    int index = 3;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}

void MainWindow::on_pushButton_menuInstall_clicked()
{
    int index = 4;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}

void MainWindow::on_pushButton_menuSet_clicked()
{
    int index = 5;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}

void MainWindow::on_pushButton_menuHelp_clicked()
{
    int index = 6;
    if( index <=  ui->tabWidget_main->count())//判断索引是否超出范围
    {
    ui->tabWidget_main->setCurrentIndex(index);//设置当前索引页面
    }
}
