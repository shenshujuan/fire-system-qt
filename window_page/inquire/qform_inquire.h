#ifndef QFORM_INQUIRE_H
#define QFORM_INQUIRE_H

#include <QWidget>

namespace Ui {
class QForm_Inquire;
}

class QForm_Inquire : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Inquire(QWidget *parent = 0);
    ~QForm_Inquire();
    void WindowInit();
    void chose_which_window(int index);

private slots:
    void on_pushButton_fire_clicked();

    void on_pushButton_fault_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_feedBack_clicked();

    void on_pushButton_shield_clicked();

    void on_pushButton_supervise_clicked();

    void on_pushButton_operatingRecord_clicked();

private:
    Ui::QForm_Inquire *ui;
};

#endif // QFORM_INQUIRE_H
