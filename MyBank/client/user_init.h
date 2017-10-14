#ifndef USER_INIT_H
#define USER_INIT_H

#include <QMainWindow>
#include "connect.h"
#include <QAbstractButton>
#include "deal_user.h"

namespace Ui {
class User_init;
}

class User_init : public QMainWindow
{
    Q_OBJECT

public:
    explicit User_init(QWidget *parent = 0);
    ~User_init();
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
    void Judge();
    void SaveUserInit();

private slots:
    void on_yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::User_init *ui;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
    deal_user* DUparent;
};

#endif // USER_INIT_H
