#ifndef QFORM_MONITOR_H
#define QFORM_MONITOR_H

#include <QWidget>

namespace Ui {
class QForm_Monitor;
}

class QForm_Monitor : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Monitor(QWidget *parent = 0);
    ~QForm_Monitor();
    void WindowInit();
    void listWidget_Init();

private:
    Ui::QForm_Monitor *ui;
};

#endif // QFORM_MONITOR_H
