#include "my_sql.h"

MY_sql::MY_sql()
{
}

bool MY_sql::initsql()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");     //数据库地址
    db.setUserName("root");          //用户名称
    db.setPassword("123456");      //用户密码
    db.setDatabaseName("bank");      //数据库名称
    if(db.open())
     {
         qDebug() << "database is established!";

         QSqlQuery query;
         query.exec("CREATE TABLE worker(num VARCHAR(20), name VARCHAR(20), identify VARCHAR(20), passward VARCHAR(20),PRIMARY KEY(identify));");
         query.exec("CREATE TABLE user(account VARCHAR(20), name VARCHAR(20), identify VARCHAR(20), passward VARCHAR(20),money VARCHAR(20), PRIMARY KEY(identify));");
         return true;
     }
     else
     {
         qDebug() << "build error!";
         return false;
    }
}

bool MY_sql::addWorker(Send_MSG *worker, Recv_MSG *worker_recv)
{
    QSqlQuery query;
    QString str1 = QString("insert into worker values('%1','%2','%3','%4');").arg(worker->work_num).arg(worker->work_name).arg(worker->work_id).arg(worker->work_passward);
    qDebug()<<str1;

    bool sel;
    sel = query.exec(str1);
    if(sel == false)
    {
        worker_recv->cmd = ERROR;
        qDebug()<<sel;
        return false;
    }

    worker_recv->cmd = INIT_SUCCESS;
    worker_recv->work_num = worker->work_num;
    worker_recv->work_name = worker->work_name;

    return true;
}

bool MY_sql::adduser(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;

    QString str1 = QString("insert into user values('%1','%2','%3','%4','%5');").arg(user->user_num).arg(user->user_name).
            arg(user->user_id).arg(user->user_passward).arg(user->first_money);
    qDebug()<<str1;

    bool sel;
    sel = query.exec(str1);
    if(sel == false)
    {
        user_recv->cmd = ERROR;
        return false;
    }
    user_recv->cmd = INIT_SUCCESS;
    user_recv->money = user->first_money;
    user_recv->user_name = user->user_name;
    user_recv->user_num = user->user_num;
    user_recv->user_id = user->user_id;

    return true;
}

bool MY_sql::deleteuser(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;

    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    qDebug()<<"record = "<<record;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->user_name = query.value(1).toString();
    user_recv->user_num = query.value(0).toInt();

    QString str1 = QString("delete from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    qDebug()<<str1;

    query.exec(str1);
    user_recv->cmd = CLOSER_SUCCESS;
    return true;
}

bool MY_sql::save_money(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;
    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->user_name = query.value(1).toString();
    user_recv->user_num = query.value(0).toInt();
    user_recv->user_id = query.value(2).toString();
    float money = user->first_money.toFloat();
    money = money + query.value(4).toFloat();

    QString str1 = QString("update user set money = '%1' where account = '%2';").arg(money).arg(user->user_num);
    query.exec(str1);
    user_recv->cmd = SAVEMONEY_SUCCESS;
    user_recv->money = QString::number(money, 'f', 2);
    return true;
}

bool MY_sql::get_money(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;
    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->user_name = query.value(1).toString();
    user_recv->user_num = query.value(0).toInt();
    user_recv->user_id = query.value(2).toString();
    float money = user->first_money.toFloat();
    money = query.value(4).toFloat() - money;
    if(money < 0)
    {
        user_recv->cmd = OVER_MONEY;
        user_recv->money = query.value(4).toString();
        return false;
    }

    QString str1 = QString("update user set money = '%1' where account = '%2';").arg(money).arg(user->user_num);
    query.exec(str1);
    user_recv->cmd = GETMONEY_SUCCESS;
    user_recv->money = QString::number(money, 'f', 2);
    return true;
}

bool MY_sql::tran_money(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;
    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }
    user_recv->user_name = query.value(1).toString();
    user_recv->user_num = query.value(0).toInt();
    user_recv->user_id = query.value(2).toString();

    float money1 = user->first_money.toFloat();
    money1 = query.value(4).toFloat() - money1;
    if(money1 < 0)
    {
        user_recv->cmd = OVER_MONEY;
        user_recv->money = query.value(4).toString();
        return false;
    }

    QString str1 = QString("select * from user where account = '%1';").arg(user->recv_people);
    query.exec(str1);
    query.last();
    record = query.at()+1;
    if(record == 0)
    {
        user_recv->cmd = NO_TRANPEOPLE;
        return false;
    }

    float money2 = query.value(4).toFloat();
    money2 = money2 + user->first_money.toFloat();

    QString str2 = QString("update user set money = '%1' where account = '%2';").arg(money2).arg(user->recv_people);
    query.exec(str2);

    QString str3 = QString("update user set money = '%1' where account = '%2';").arg(money1).arg(user->user_num);
    query.exec(str3);

    user_recv->cmd = TRANMONEY_SUCCESS;
    user_recv->money = QString::number(money1, 'f', 2);
    return true;
}

bool MY_sql::look_money(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;

    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    qDebug()<<"record = "<<record;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->user_name = query.value(1).toString();
    user_recv->user_num = query.value(0).toInt();
    user_recv->money = query.value(4).toString();
    user_recv->user_id = query.value(2).toString();
    user_recv->cmd = LOOKMONEY_SUCCESS;

    return true;
}

bool MY_sql::change_passward(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;
    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    qDebug()<<"record = "<<record;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->user_num = query.value(0).toInt();
    user_recv->user_id = query.value(2).toString();

    QString str1 = QString("update user set passward = '%1' where account = '%2';").arg(user->new_passward).arg(user->user_num);
    query.exec(str1);

    user_recv->cmd = CHANGE_SUCCESS;
    return true;
}

bool MY_sql::account_detail(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;
    QString str0 = QString("select * from user where account = '%1' and identify = '%2' and passward = '%3';").arg(user->user_num).arg(user->user_id).arg(user->user_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    qDebug()<<"record = "<<record;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->cmd = ACCOUNT_SUCCESS;
    user_recv->user_name = query.value(1).toString();
    user_recv->user_id = query.value(2).toString();
    user_recv->user_num = query.value(0).toInt();
    return true;
}

bool MY_sql::look_record(Send_MSG *user, Recv_MSG *user_recv)
{
    QSqlQuery query;
    QString str0 = QString("select * from worker where num = '%1' and passward = '%2';").arg(user->work_num).arg(user->work_passward);
    query.exec(str0);
    query.last();
    int record = query.at()+1;
    qDebug()<<"record = "<<record;
    if(record == 0)
    {
        user_recv->cmd = ERROR;
        return false;
    }

    user_recv->cmd = LOOKRECORD_SUCCESS;
    return true;
}
