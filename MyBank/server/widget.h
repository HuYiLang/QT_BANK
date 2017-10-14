#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QVector>
#include "connect.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public:
    Ui::Widget *ui;
    QTcpServer *tcp_server;
    QVector<WMger> ARR;
    QTcpSocket *cfd;
    Send_MSG message;                                   //接收信息
    Recv_MSG message_recv;                              //发送回去的结构体
    quint16 blocksize;
    void send_back();

public slots:
    void newconnect();
    void deal_client();
};

#endif // WIDGET_H
