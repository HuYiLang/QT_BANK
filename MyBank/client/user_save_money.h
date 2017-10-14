#ifndef USER_SAVE_MONEY_H
#define USER_SAVE_MONEY_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_save_money;
}

class user_save_money : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_save_money(QWidget *parent = 0);
    ~user_save_money();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();
    void save_data();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_save_money *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_SAVE_MONEY_H
