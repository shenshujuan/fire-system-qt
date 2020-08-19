#ifndef QFORM_MANAGE_H
#define QFORM_MANAGE_H

#include <QWidget>

namespace Ui {
class QForm_Manage;
}

class QForm_Manage : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Manage(QWidget *parent = 0);
    ~QForm_Manage();

private:
    Ui::QForm_Manage *ui;
};

#endif // QFORM_MANAGE_H
