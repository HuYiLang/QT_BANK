#ifndef USER_ACCOUNT_DETAIL_H
#define USER_ACCOUNT_DETAIL_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_account_detail;
}

class user_account_detail : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_account_detail(QWidget *parent = 0);
    ~user_account_detail();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_account_detail *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_ACCOUNT_DETAIL_H
