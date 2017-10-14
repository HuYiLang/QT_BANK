#ifndef USER_TRANRECORD_H
#define USER_TRANRECORD_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_tranrecord;
}

class user_tranrecord : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_tranrecord(QWidget *parent = 0);
    ~user_tranrecord();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();

private slots:
    void on_Yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_tranrecord *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_TRANRECORD_H
