#ifndef USER_GETMONEY_H
#define USER_GETMONEY_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_getmoney;
}

class user_getmoney : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_getmoney(QWidget *parent = 0);
    ~user_getmoney();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();
    void save_data();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_getmoney *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_GETMONEY_H
