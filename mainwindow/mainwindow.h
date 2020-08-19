#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGroupBox>
#include <QGridLayout>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void test();
    void mainWindowInit();
    void menuButton_Init();

private slots:
    void on_pushButton_menuLess_clicked();

    void on_pushButton_menuMonitor_clicked();

    void on_pushButton_menuInquire_clicked();

    void on_pushButton_menuManage_clicked();

    void on_pushButton_menuTest_clicked();

    void on_pushButton_menuInstall_clicked();

    void on_pushButton_menuSet_clicked();

    void on_pushButton_menuHelp_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
