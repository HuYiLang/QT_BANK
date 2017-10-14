#ifndef MY_SQL_H
#define MY_SQL_H

#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include "connect.h"

class MY_sql
{
public:
    MY_sql();
    bool initsql();
    bool addWorker(Send_MSG * worker, Recv_MSG * worker_recv);
    bool adduser(Send_MSG * user, Recv_MSG * user_recv);
    bool deleteuser(Send_MSG * user, Recv_MSG * user_recv);
    bool save_money(Send_MSG * user, Recv_MSG * user_recv);
    bool get_money(Send_MSG * user, Recv_MSG * user_recv);
    bool tran_money(Send_MSG * user, Recv_MSG * user_recv);
    bool look_money(Send_MSG * user, Recv_MSG * user_recv);
    bool change_passward(Send_MSG * user, Recv_MSG * user_recv);
    bool account_detail(Send_MSG * user, Recv_MSG * user_recv);
    bool look_record(Send_MSG * user, Recv_MSG * user_recv);
};

#endif // MY_SQL_H
