#ifndef WORKER_INIT_H
#define WORKER_INIT_H

#include <QMainWindow>
#include "mainwindow.h"
#include <QAbstractButton>
#include "connect.h"

namespace Ui {
class Worker_init;
}

class Worker_init : public QMainWindow
{
    Q_OBJECT

public:
    Ui::Worker_init *ui;
    explicit Worker_init(QWidget *parent = 0);
    ~Worker_init();
    void Judge();

private slots:
    void on_Yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    MainWindow* MWparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
    Send_MSG str;
    Recv_MSG message;                                   //接收信息
};

#endif // WORKER_INIT_H
