#ifndef QFORM_SET_H
#define QFORM_SET_H

#include <QWidget>

namespace Ui {
class QForm_Set;
}

class QForm_Set : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Set(QWidget *parent = 0);
    ~QForm_Set();

private:
    Ui::QForm_Set *ui;
};

#endif // QFORM_SET_H
