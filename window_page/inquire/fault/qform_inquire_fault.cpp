#include "qform_inquire_fault.h"
#include "ui_qform_inquire_fault.h"

#include <QMessageBox>
#include <QScroller>

#define     FIXEDCOLUMNCOUNT    6       //文件固定6列

QForm_Inquire_Fault::QForm_Inquire_Fault(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QForm_Inquire_Fault)
{
    ui->setupUi(this);
    WindowInit();
    tableView_init();
}

QForm_Inquire_Fault::~QForm_Inquire_Fault()
{
    delete ui;
}


void QForm_Inquire_Fault::WindowInit()
{

}

void QForm_Inquire_Fault::tableView_init()
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

    //设置表头
    QStringList headerList;
    headerList.append("6第1列");
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
    for(int ir=0;ir<10;ir++)
    {
        for(int ic=0;ic<4;ic++)
        {
            aItem = new QStandardItem( QString::number(ir+1) );
            theModel->setItem(ir,ic,aItem); //为模型的某个行列位置设置Item
        }
        aItem->setCheckable(true); //设置为Checkable
    }


}
