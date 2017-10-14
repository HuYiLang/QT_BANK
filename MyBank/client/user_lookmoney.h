#ifndef USER_LOOKMONEY_H
#define USER_LOOKMONEY_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_lookmoney;
}

class user_lookmoney : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_lookmoney(QWidget *parent = 0);
    ~user_lookmoney();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_lookmoney *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_LOOKMONEY_H
