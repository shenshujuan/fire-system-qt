#ifndef QFORM_TEST_H
#define QFORM_TEST_H

#include <QWidget>

namespace Ui {
class QForm_Test;
}

class QForm_Test : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Test(QWidget *parent = 0);
    ~QForm_Test();

private:
    Ui::QForm_Test *ui;
};

#endif // QFORM_TEST_H
