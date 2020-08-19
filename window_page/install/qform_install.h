#ifndef QFORM_INSTALL_H
#define QFORM_INSTALL_H

#include <QWidget>
#include"userControl/myboardlist.h"

namespace Ui {
class QForm_Install;
}

class QForm_Install : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Install(QWidget *parent = 0);
    ~QForm_Install();
    void WindowInit();
    void chose_which_window(int index);

private slots:
    void on_pushButton_mac_1_clicked();
    void on_pushButton_mac_2_clicked();
    void on_pushButton_mac_3_clicked();
    void on_pushButton_mac_4_clicked();
    void on_pushButton_mac_5_clicked();
    void on_pushButton_mac_6_clicked();
    void on_pushButton_mac_7_clicked();
    void on_pushButton_mac_8_clicked();
    void on_pushButton_mac_9_clicked();
    void on_pushButton_mac_10_clicked();

private:
    Ui::QForm_Install *ui;

    QList<MyBoardList *>list_loop;
    QList<MyBoardList *>list_multi;
    QList<MyBoardList *>list_bus;



};

#endif // QFORM_INSTALL_H
