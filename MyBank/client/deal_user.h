#ifndef DEAL_USER_H
#define DEAL_USER_H

#include <QMainWindow>
#include <QtMultimedia/QSound>
#include "work_log.h"
#include <QList>

namespace Ui {
class deal_user;
}

class deal_user : public QMainWindow
{
    Q_OBJECT

public:
    ~deal_user();
    QList<int> link;
    QList<int>::iterator it;
    QString Deak_id;
    int work_num;
    void Judge(int index);
    static deal_user* window;
    static deal_user* getwindow(QMainWindow *myparent);

private slots:
    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_stop_clicked();

    void on_begin_clicked();

    void on_init_user_clicked();

    void on_bank_save_clicked();

    void on_get_money_clicked();

    void on_tran_accounts_clicked();

    void on_look_money_clicked();

    void on_change_passward_clicked();

    void on_account_detail_clicked();

    void on_tran_record_clicked();

    void on_close_account_clicked();

    void on_Exit_clicked();

private:
    explicit deal_user(QWidget *parent = 0);
    Ui::deal_user *ui;
    Work_log* WLparent;
    QSound* sound0;
    QSound* sound1;
    QSound* sound2;
    QSound* sound3;
    QSound* sound4;
    QSound* sound5;
    QTcpSocket *tcpsocket;
    quint16 blocksize;
    Send_MSG str;
    Recv_MSG message;                                       //接收信息
};

#endif // DEAL_USER_H
