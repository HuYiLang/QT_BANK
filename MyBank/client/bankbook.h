#ifndef BANKBOOK_H
#define BANKBOOK_H

#include <QMainWindow>
#include "user_account_detail.h"

namespace Ui {
class bankbook;
}

class bankbook : public QMainWindow
{
    Q_OBJECT

public:
    explicit bankbook(QWidget *parent = 0);
    ~bankbook();


private slots:
    void on_exit_clicked();

private:
    Ui::bankbook *ui;
    user_account_detail* UAparent;
};

#endif // BANKBOOK_H
