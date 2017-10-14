#ifndef USER_TRANACCOUNTS_H
#define USER_TRANACCOUNTS_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_tranaccounts;
}

class user_tranaccounts : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_tranaccounts(QWidget *parent = 0);
    ~user_tranaccounts();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();
    void save_data();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_tranaccounts *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_TRANACCOUNTS_H
