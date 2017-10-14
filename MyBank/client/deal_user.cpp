#include "deal_user.h"
#include "ui_deal_user.h"
#include "connect.h"
#include "work_log.h"
#include "user_init.h"
#include "user_save_money.h"
#include "user_getmoney.h"
#include "user_tranaccounts.h"
#include "user_lookmoney.h"
#include "user_changepassward.h"
#include "user_account_detail.h"
#include "user_tranrecord.h"
#include "user_close.h"
#include <QMutex>

QMutex mutex1;

deal_user::deal_user(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::deal_user)
{
    WLparent = (Work_log*)parent;
    work_num = WLparent->message.work_num;
    ui->setupUi(this);
    QString mystr = QString("职工：%1  姓名：%2  正在服务中....").arg(WLparent->message.work_num).arg(WLparent->message.work_name);
    ui->label_2->setText(mystr);
    sound0 = new QSound("../client/song/Beyond-光辉岁月.wav");
    sound1 = new QSound("../client/song/陈慧娴-千千阕歌.wav");
    sound2 = new QSound("../client/song/李克勤-月半小夜曲.wav");
    sound3 = new QSound("../client/song/苏芮-酒干倘卖无.wav");
    sound4 = new QSound("../client/song/汪峰-怒放的生命.wav");
    sound5 = new QSound("../client/song/郑智化-水手.wav");
    Deak_id = "";
}

deal_user::~deal_user()
{
    delete ui;
}

void deal_user::on_listWidget_doubleClicked(const QModelIndex &index)       //双击开启音乐
{
    Judge(index.row());
}

void deal_user::on_stop_clicked()                   //关闭音乐
{
    sound0->stop();
    sound1->stop();
    sound2->stop();
    sound3->stop();
    sound4->stop();
    sound5->stop();
}


void deal_user::on_begin_clicked()                  //随机播放
{

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int index = (int)(qrand())%6;
    Judge(index);
}

void deal_user::Judge(int index)
{
    switch(index)
    {
        case 0:
        {
            sound0->play();
            break;
        }
        case 1:
        {
            sound1->play();
            break;
        }
        case 2:
        {
            sound2->play();
            break;
        }
        case 3:
        {
            sound3->play();
            break;
        }
        case 4:
        {
            sound4->play();
            break;
        }
        case 5:
        {
            sound5->play();
            break;
        }
    }
}

deal_user *deal_user::getwindow(QMainWindow* myparent)
{
    if(window == NULL)
    {
        mutex1.lock();
        if(window == NULL)
        {
            window = new deal_user(myparent);
        }
        mutex1.unlock();
    }
    return window;
}

void deal_user::on_init_user_clicked()              //开户
{
    this->hide();
    User_init* UI = new User_init(this);
    UI->show();
}

void deal_user::on_bank_save_clicked()              //存款
{
    this->hide();
    user_save_money* US = new user_save_money(this);
    US->show();
}

void deal_user::on_get_money_clicked()              //取款
{
    this->hide();
    user_getmoney* UG = new user_getmoney(this);
    UG->show();
}

void deal_user::on_tran_accounts_clicked()          //转账
{
    this->hide();
    user_tranaccounts* UT = new user_tranaccounts(this);
    UT->show();
}

void deal_user::on_look_money_clicked()             //查询余额
{
    this->hide();
    user_lookmoney* UL = new user_lookmoney(this);
    UL->show();
}

void deal_user::on_change_passward_clicked()        //修改密码
{
    this->hide();
    user_changepassward* UC = new user_changepassward(this);
    UC->show();
}

void deal_user::on_account_detail_clicked()         //账户明细
{
    this->hide();
    user_account_detail* UA = new user_account_detail(this);
    UA->show();
}

void deal_user::on_tran_record_clicked()            //交易报表
{
    this->hide();
    user_tranrecord* UT = new user_tranrecord(this);
    UT->show();
}

void deal_user::on_close_account_clicked()          //销户
{
    this->hide();
    user_close* UC = new user_close(this);
    UC->show();
}

void deal_user::on_Exit_clicked()                    //退出
{
    tcpsocket = new QTcpSocket(this);
    tcpsocket->abort();
    tcpsocket->connectToHost(IP, SERV_PORT);

    Send_MSG str;
    str.cmd = EXIT;
    str.work_name = WLparent->message.work_name;

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out<<(quint16)0;
    out<<str;
    out.device()->seek(0);
    out<<(quint16)(block.size()-sizeof(quint16));
    tcpsocket->write(block, block.length());

    this->close();

    MainWindow* MW = MainWindow::getwindow();
    MW->show();
}
