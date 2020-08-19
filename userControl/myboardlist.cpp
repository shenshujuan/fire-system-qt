#include "myboardlist.h"
#include <QPainter>

MyBoardList::MyBoardList(int id, int type, int extend_Num)
{
    this->m_id = id;
    this->m_type = type;
    this->m_extendNUm = extend_Num;

    this->setFixedSize(382,64);

    m_btn_ckb = new QPushButton(this);
    m_btn_ckb->setFixedSize(30,30);
    m_btn_ckb->setStyleSheet("QPushButton{border-image: url(resources/images/check_box_normal.png); }");
    m_btn_ckb->move(10,(this->height()-28)/2);

    connect(m_btn_ckb,  SIGNAL( clicked() ), this, SLOT( on_checkBox_clicked_slot() ) );

    swBtn = new SwitchButton(this);

    swBtn->setBgColorOn(QColor(162, 121, 197));
    swBtn->setShowText(true);
    swBtn->setAnimation(true);
    swBtn->setTextOff("未启用");
    swBtn->setTextOn("启用");
    swBtn->setFixedSize(80,30);
    swBtn->move(260,17);
    connect(swBtn, &SwitchButton::checkedChanged, [=](bool check_state){
    emit enableSignal(check_state);
    });
}

void MyBoardList::on_checkBox_clicked_slot()
{
        this->m_check = !this->m_check;
        if(this->m_check == false)
        {
            m_btn_ckb->setStyleSheet("QPushButton{border-image: url(resources/images/check_box_normal.png); }");
        }
        else
        {
            m_btn_ckb->setStyleSheet("QPushButton{border-image: url(resources/images/check_box_select.png); }");
        }
        emit this->checkSignal(this->m_check);
}

void MyBoardList::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //设置画刷
    QBrush brush(QColor(00,144,255));
    QFont font;
    //设置画刷风格
    //brush.setStyle(Qt::Dense7Pattern);

    //画线
    //设置画笔
    //QPen pen(QColor(58,59,81));
    QPen pen(QColor(234,237,242));
    //设置画笔宽度
    pen.setWidth(1);
    painter.setBrush(Qt::NoBrush);
    //让画家 使用这个笔
    painter.setPen(pen);
    painter.drawLine(QPoint(0,this->height()-2) , QPoint(this->width(),this->height()-2));

    painter.setPen(QPen(QColor(102,102,102)));
    font.setPointSize(14);
    font.setBold(false);

    painter.setFont(font);

    if(this->m_type == 1)
    {
        painter.drawText(QRect(80,0,200,this->height()),Qt::AlignLeft | Qt::AlignVCenter ,QString("回路%1").arg(this->m_id));
    }
    else if(this->m_type == 2)
    {
        painter.drawText(QRect(80,0,200,this->height()),Qt::AlignLeft | Qt::AlignVCenter,QString("多线%1").arg(this->m_id));
    }
    else if(this->m_type == 3)
    {
        painter.drawText(QRect(80,0,200,this->height()),Qt::AlignLeft | Qt::AlignVCenter,QString("总线%1  (扩展：%2)").arg(this->m_id).arg(this->m_extendNUm));
    }
}
