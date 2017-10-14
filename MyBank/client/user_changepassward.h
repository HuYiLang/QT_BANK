#ifndef USER_CHANGEPASSWARD_H
#define USER_CHANGEPASSWARD_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_changepassward;
}

class user_changepassward : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_changepassward(QWidget *parent = 0);
    ~user_changepassward();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_changepassward *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_CHANGEPASSWARD_H
