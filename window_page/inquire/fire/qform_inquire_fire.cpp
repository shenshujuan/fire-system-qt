#include "qform_inquire_fire.h"
#include "ui_qform_inquire_fire.h"
#include "user_class/user_class.h"

#include <QMessageBox>
#include <QScroller>

#define     FIXEDCOLUMNCOUNT    6       //文件固定6列

QForm_Inquire_Fire::QForm_Inquire_Fire(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Inquire_Fire)
{
    ui->setupUi(this);
    WindowInit();
    tableView_init();
}

QForm_Inquire_Fire::~QForm_Inquire_Fire()
{
    delete ui;
}

void QForm_Inquire_Fire::WindowInit()
{

}

void QForm_Inquire_Fire::tableView_init()
{

    theModel = new QStandardItemModel(50,FIXEDCOLUMNCOUNT,this); //数据模型
    theSelection = new QItemSelectionModel(theModel);//Item选择模型

    //选择当前单元格变化时的信号与槽
    connect(theSelection,SIGNAL(currentChanged(QModelIndex,QModelIndex)), this,SLOT(on_currentChanged(QModelIndex,QModelIndex)));
    //为tableView设置数据模型
    ui->tableView->setModel(theModel); //设置数据模型
    ui->tableView->setSelectionModel(theSelection);//设置选择模型
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);//设置选择模式
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);//设置选择的行为
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//禁止编辑所有单元格

    QScroller::grabGesture(ui->tableView, QScroller::LeftMouseButtonGesture);//允许鼠标滑动手势


    ui->tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->tableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

    QScroller::grabGesture(ui->tableView, QScroller::TouchGesture);
    QScroller::grabGesture(ui->tableView, QScroller::LeftMouseButtonGesture);


    //设置表头
    QStringList headerList;
    headerList.append("第1列");
    headerList.append("第2列");
    headerList.append("第3列");
    headerList.append("第4列");
    headerList.append("第5列");
    headerList.append("第6列");
    theModel->setHorizontalHeaderLabels(headerList); //设置表头文字

    QIcon icon;
    icon.addFile("resources/images/user.png");
    QStandardItem *icon_item = new QStandardItem(icon, "666");
    theModel->setHorizontalHeaderItem(0, icon_item);

    ui->tableView->verticalHeader()->hide();//隐藏表格行标号
    ui->tableView->setStyleSheet("QTableView{border:2px solid rgb(0, 225, 0);border-radius:12px;padding:5px;background-color: white;}");

    connect(ui->tableView->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(click_horizontalHeader(int)));


    QStandardItem   *aItem;
    for(int ir=0;ir<100;ir++)
    {
        for(int ic=0;ic<4;ic++)
        {
            aItem = new QStandardItem( QString::number(ir+1) );
            theModel->setItem(ir,ic,aItem); //为模型的某个行列位置设置Item
        }
        aItem->setCheckable(true); //设置为Checkable
    }


}

void QForm_Inquire_Fire::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{ //选择单元格变化时的响应
   Q_UNUSED(previous);

    if (current.isValid()) //当前模型索引有效
    {
        QStandardItem   *aItem;
        aItem=theModel->itemFromIndex(current); //从模型索引获得Item
    }
}



void QForm_Inquire_Fire::click_horizontalHeader(int column)
{
  //  QMessageBox message(QMessageBox::Warning,"Information", QString::number(column),QMessageBox::Yes|QMessageBox::No,NULL);
  //  message.exec();
}



