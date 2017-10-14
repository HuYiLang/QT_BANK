#include "user_lookmoney.h"
#include "ui_user_lookmoney.h"
#include <QPushButton>
#include <QMessageBox>
#include <QProgressDialog>

user_lookmoney::user_lookmoney(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_lookmoney)
{
    DUparent = (deal_user*) parent;
    ui->setupUi(this);
    blocksize = 0;
    this->ui->yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
    this->ui->yesorno->button(QDialogButtonBox::Ok)->setText(tr("确定"));          //将buttonbox中的ok 变成汉化
    this->ui->yesorno->button(QDialogButtonBox::Cancel)->setText(tr("取消"));
    this->ui->user_passward1->setEchoMode(QLineEdit::Password);                   //密码方式显示文本
    this->ui->user_passward2->setEchoMode(QLineEdit::Password);
    if(DUparent->link.size() != 0)
    {
        for(DUparent->it = DUparent->link.begin(); DUparent->it != DUparent->link.end(); DUparent->it++)
        {
            ui->user_num->addItem(QString("%1").arg(*(DUparent->it)));
        }
    }
    ui->user_id->setText(DUparent->Deak_id);
}

user_lookmoney::~user_lookmoney()
{
    delete ui;
}

void user_lookmoney::on_yesorno_clicked(QAbstractButton *button)
{
    if(ui->yesorno->button(QDialogButtonBox::Ok) == button)
    {
        if(ui->user_num->currentText().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位账号!"), QMessageBox::Ok);
            return;
        }
        if(ui->user_id->text().length() != 18)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入18位身份证号码!"), QMessageBox::Ok);
            return;
        }
        if(ui->user_passward1->text() != ui->user_passward2->text())
        {
            QMessageBox::warning(this, tr("警告"), tr("密码输入错误，请再次输入！"), QMessageBox::Ok);
            return;
        }
        if(ui->user_passward1->text().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位密码!"), QMessageBox::Ok);
            return;
        }
        if(ui->user_id->text() == "" | ui->user_num->currentText() == "" | ui->user_passward1->text() == "" |
                ui->user_passward2->text() == "")
        {
            QMessageBox::warning(this, tr("警告"), tr("输入不能为空！"), QMessageBox::Ok);
            return;
        }

        str.cmd = USER_LOOKMONEY;
        str.user_num = ui->user_num->currentText().toInt();
        str.user_id = ui->user_id->text();
        str.user_passward = ui->user_passward1->text();

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

void user_lookmoney::read_server()
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

void user_lookmoney::Judge()
{
    QProgressDialog dialog(tr("正在查询余额"),tr("取消"), 0, 30000, this);
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

    switch (message.cmd)
    {
        case LOOKMONEY_SUCCESS:
        {
            QString str0 = QString("您的最新余额为%1元").arg(message.money);
            QMessageBox::information(this, tr("消息"), str0, QMessageBox::Ok);
            this->close();
            DUparent->link.push_back(message.user_num);
            std::list<int> mylink = DUparent->link.toStdList();
            mylink.unique();
            DUparent->link = QList<int>::fromStdList(mylink);
            DUparent->Deak_id = message.user_id;
            DUparent->show();
            break;
        }
        case ERROR:
        {
            QMessageBox::information(this, tr("消息"), tr("账号密码不匹配!"), QMessageBox::Ok);
            this->close();
            DUparent->show();
            break;
        }
    }
}
