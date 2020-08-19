#ifndef QFORM_HELP_H
#define QFORM_HELP_H

#include <QWidget>
#include "userControl/switchbutton.h"



namespace Ui {
class QForm_Help;
}

class QForm_Help : public QWidget
{
    Q_OBJECT

public:
    explicit QForm_Help(QWidget *parent = 0);
    ~QForm_Help();


private:
    Ui::QForm_Help *ui;

public:
    SwitchButton * swBtn;
};

#endif // QFORM_HELP_H
