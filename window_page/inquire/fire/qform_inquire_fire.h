#ifndef QFORM_INQUIRE_FIRE_H
#define QFORM_INQUIRE_FIRE_H

#include <QWidget>
#include    <QLabel>
#include    <QStandardItemModel>
#include    <QItemSelectionModel>

namespace Ui {
class QForm_Inquire_Fire;
}

class QForm_Inquire_Fire : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Inquire_Fire(QWidget *parent = 0);
    ~QForm_Inquire_Fire();
    void WindowInit();
    void tableView_init();


private slots:
 //当前选择单元格发生变化
    void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void click_horizontalHeader(int column);

private:
    Ui::QForm_Inquire_Fire *ui;

    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型



};

#endif // QFORM_INQUIRE_FIRE_H
