#ifndef MYBOARDLIST_H
#define MYBOARDLIST_H

#include <QWidget>
#include <QPushButton>
#include"userControl/switchbutton.h"

class MyBoardList : public QWidget
{
    Q_OBJECT
public:
    explicit MyBoardList(int id, int type, int extend_Num);

    int m_id = 0;//id号 用来标识每个对象的唯一性
    int m_type = 1;//1回路 2多线 3 总线
    int m_extendNUm = 0;
    bool m_check = false;

    QPushButton * m_btn_ckb;
    SwitchButton * swBtn;

    //重写paintEvent事件
    void paintEvent(QPaintEvent *);

signals:
    void checkSignal(bool checked);
    void enableSignal(bool m_enable);

private slots:
    void on_checkBox_clicked_slot();
};

#endif // MYBOARDLIST_H
