#ifndef WORK_LOG_H
#define WORK_LOG_H

#include <QMainWindow>
#include <QAbstractButton>
#include "connect.h"
#include "mainwindow.h"

namespace Ui {
class Work_log;
}

class Work_log : public QMainWindow
{
    Q_OBJECT

public:
    explicit Work_log(QWidget *parent = 0);
    ~Work_log();
    void Judge();
    Send_MSG str;
    Recv_MSG message;                                   //接收信息

private slots:
    void on_Yesorno_clicked(QAbstractButton *button);
    void read_server();

private:
    Ui::Work_log *ui;
    MainWindow* MWparent;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
};

#endif // WORK_LOG_H
