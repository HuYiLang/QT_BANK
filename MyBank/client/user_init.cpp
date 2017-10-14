#include "user_init.h"
#include "ui_user_init.h"
#include <QPushButton>
#include <QMessageBox>
#include <QProgressDialog>

User_init::User_init(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::User_init)
{
    DUparent = (deal_user*)parent;
    ui->setupUi(this);
    blocksize = 0;
    this->ui->yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
    this->ui->yesorno->button(QDialogButtonBox::Ok)->setText(tr("确定"));          //将buttonbox中的ok 变成汉化
    this->ui->yesorno->button(QDialogButtonBox::Cancel)->setText(tr("取消"));
    this->ui->user_passward1->setEchoMode(QLineEdit::Password);                   //密码方式显示文本
    this->ui->user_passward2->setEchoMode(QLineEdit::Password);
}

User_init::~User_init()
{
    delete ui;
}

void User_init::on_yesorno_clicked(QAbstractButton *button)
{
    if(ui->yesorno->button(QDialogButtonBox::Ok) == button)
    {
        if(ui->user_name->text().length() > 6)
        {
            QMessageBox::information(this, tr("消息"), tr("姓名不得不超过6个字!"), QMessageBox::Ok);
            return;
        }
        if(ui->user_id->text().length() != 18)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入18位身份证号码!"), QMessageBox::Ok);
            return;
        }
        if((ui->user_passward1->text()) != (ui->user_passward2->text()))
        {
            QMessageBox::warning(this, tr("警告"), tr("密码输入错误，请再次输入！"), QMessageBox::Ok);
            return;
        }
        if(ui->user_passward1->text().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位密码!"), QMessageBox::Ok);
            return;
        }
        if(ui->user_id->text() == "" | ui->user_name->text() == "" | ui->user_passward1->text() == "" |
                ui->user_passward2->text() == "" | ui->first_money->text() == "")
        {
            QMessageBox::warning(this, tr("警告"), tr("输入不能为空！"), QMessageBox::Ok);
            return;
        }
        if(ui->first_money->text().length() > 7)
        {
            QMessageBox::warning(this, tr("警告"), tr("存款金额过大，请提前预约！"), QMessageBox::Ok);
            return;
        }

        str.cmd = USER_INIT;
        str.user_id = ui->user_id->text();
        str.user_name = ui->user_name->text();
        str.user_passward = ui->user_passward1->text();
        str.first_money = ui->first_money->text();

        tcpsocket = new QTcpSocket(this);
        tcpsocket->abort();
        tcpsocket->connectToHost(IP, SERV_PORT);

        QByteArray block;
        QDataStream out(&block, QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_4_0);
        out<<(quint16)0;
        out<<str;
        out.device()->seek(0);
        out<<(quint16)(block.size()-sizeof(quint16));
        tcpsocket->write(block, block.length());

        connect(tcpsocket, SIGNAL(readyRead()), this, SLOT(read_server()));
    }
    else if(ui->yesorno->button(QDialogButtonBox::Cancel) == button)
    {
        this->close();

        QProgressDialog dialog(tr("正在返回主界面"),tr("取消"), 0, 30000, this);
        dialog.setWindowTitle(tr("进度"));
        dialog.setWindowModality(Qt::WindowModal);
        dialog.show();
        for(int k = 0; k < 30000; k++)
        {
            dialog.setValue(k);
            QCoreApplication::processEvents();
            if(dialog.wasCanceled())
            {
                break;
            }
        }
        dialog.setValue(30000);
        DUparent->show();
    }
}

void User_init::read_server()
{
    QDataStream in(tcpsocket);

    in.setVersion(QDataStream::Qt_4_6);                 //加密传输
    if(blocksize == 0)
    {
        if(tcpsocket->bytesAvailable() < (int)sizeof(quint16))
        {
            return;
        }
        in>>blocksize;
    }
    if(tcpsocket->bytesAvailable() < blocksize)
    {
        return;
    }
    in>>message;                                        //将读到的存入message
    Judge();
}

void User_init::Judge()
{
    QProgressDialog dialog(tr("正在注册"),tr("取消"), 0, 30000, this);
    dialog.setWindowTitle(tr("进度"));
    dialog.setWindowModality(Qt::WindowModal);
    dialog.show();
    for(int k = 0; k < 30000; k++)
    {
        dialog.setValue(k);
        QCoreApplication::processEvents();
        if(dialog.wasCanceled())
        {
            break;
        }
    }
    dialog.setValue(30000);

    switch(message.cmd)
    {
        case INIT_SUCCESS:                                                      //注册成功
        {
            QString str1 = QString("注册成功\n账号为%1").arg(message.user_num);
            QMessageBox::information(this, tr("消息"), str1, QMessageBox::Ok);
            SaveUserInit();                                                     //账户保存本地
            this->close();
            DUparent->link.push_back(message.user_num);
            DUparent->Deak_id = message.user_id;
            DUparent->show();
            break;
        }
        case ERROR:                                                             //注册失败
        {
            QMessageBox::information(this, tr("消息"), tr("注册失败：该用户已被注册!"), QMessageBox::Ok);
            this->close();
            DUparent->show();
            break;
        }
    }
}

void User_init::SaveUserInit()
{
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
    QString save = QString("户名\t账号\t开户银行\t开户金额\t\t日期\n%1\t%2\t中国银行\t%3\t\t%4\n\n\n\t日期\t\t现存\t支出\t利息\t 转账 \t\t余额\t\t职工号").arg(message.user_name).arg(message.user_num).arg(message.money).arg(current_date);
    qDebug()<<save;

    QString filename = QString("%1的存折.txt").arg(message.user_name);
    QFile file(filename);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug()<<file.errorString();
    }
    file.write(save.toLocal8Bit());
    file.close();
}
