#ifndef QFORM_INQUIRE_FAULT_H
#define QFORM_INQUIRE_FAULT_H

#include <QWidget>
#include    <QLabel>
#include    <QStandardItemModel>
#include    <QItemSelectionModel>

namespace Ui {
class QForm_Inquire_Fault;
}

class QForm_Inquire_Fault : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Inquire_Fault(QWidget *parent = 0);
    ~QForm_Inquire_Fault();
    void WindowInit();
    void tableView_init();

private:
    Ui::QForm_Inquire_Fault *ui;

    QStandardItemModel  *theModel;//数据模型
    QItemSelectionModel *theSelection;//Item选择模型
};

#endif // QFORM_INQUIRE_FAULT_H
