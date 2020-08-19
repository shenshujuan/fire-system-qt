#ifndef HEADERVIEW_H
#define HEADERVIEW_H

#include <QObject>
#include <QHeaderView>
#include <QPainter>

class HeaderView : public QHeaderView
{
public:
    //构造函数， 第一个参数设定表头方向
    HeaderView(Qt::Orientation orientation, QWidget* parent = 0);

protected:
    void paintSection(QPainter* painter, const QRect& rect, int logicalIndex) const;

    void mousePressEvent(QMouseEvent* event);

private:
    //checkbox的开启或关闭状态
    bool isOn;
};

#endif // HEADERVIEW_H
