#ifndef USER_CLOSE_H
#define USER_CLOSE_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "deal_user.h"

namespace Ui {
class user_close;
}

class user_close : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_close(QWidget *parent = 0);
    ~user_close();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();
    void save_data();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::user_close *ui;
    deal_user *DUparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // USER_CLOSE_H
