#include "work_log.h"
#include "ui_work_log.h"
#include <QDialogButtonBox>
#include <QPushButton>
#include <QMessageBox>
#include <QProgressDialog>
#include "deal_user.h"

Work_log::Work_log(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Work_log)
{
    blocksize = 0;
    MWparent = (MainWindow*)parent;
    qDebug()<<QString("%1").arg(MWparent->str.work_num);
    ui->setupUi(this);
    ui->Yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
    ui->Yesorno->button(QDialogButtonBox::Ok)->setText(tr("确定"));                     //将buttonbox中的ok 变成汉化
    ui->Yesorno->button(QDialogButtonBox::Cancel)->setText(tr("取消"));
    ui->worker_pssward->setEchoMode(QLineEdit::Password);                   //密码方式显示文本
    if((MWparent->str.work_num / 100000 > 0) && (MWparent->str.work_num / 100000 < 9))
        ui->worker_num->addItem(QString("%1").arg(MWparent->str.work_num));
}

Work_log::~Work_log()
{
    delete ui;
}

void Work_log::on_Yesorno_clicked(QAbstractButton *button)
{
    if(ui->Yesorno->button(QDialogButtonBox::Ok) == button)
    {
        if((ui->worker_num->currentText() == "") | (ui->worker_pssward->text() == ""))
        {
            QMessageBox::information(this, tr("消息"), tr("输入不得为空!"), QMessageBox::Ok);
            return;
        }
        if(ui->worker_num->currentText().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位账号!"), QMessageBox::Ok);
            return;
        }
        if(ui->worker_pssward->text().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位密码!"), QMessageBox::Ok);
            return;
        }

        str.cmd = WORKER_LOG;
        str.work_num = ui->worker_num->currentText().toInt();
        str.work_passward = ui->worker_pssward->text();

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
    else if(ui->Yesorno->button(QDialogButtonBox::Cancel) == button)
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
        MWparent->show();
    }
}

void Work_log::read_server()
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
    qDebug()<<message.cmd;
    qDebug()<<"工号："<<message.work_num;
    qDebug()<<"姓名："<<message.work_name;
    Judge();
}

void Work_log::Judge()
{
    QProgressDialog dialog(tr("正在登录"),tr("取消"), 0, 30000, this);
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
        case LOG_SUCCESS:
        {
            QMessageBox::information(this, tr("消息"), tr("登录成功！"), QMessageBox::Ok);
            this->close();
            deal_user *use = deal_user::getwindow(this);
            use->show();
            break;
        }
        case LOG_EXIST:
        {
            QMessageBox::information(this, tr("消息"), tr("登录失败：该员工已登录!"), QMessageBox::Ok);
            this->close();
            MWparent->show();
            break;
        }
        case ERROR:
        {
            QMessageBox::information(this, tr("消息"), tr("登录失败：该员工未注册!"), QMessageBox::Ok);
            this->close();
            MWparent->show();
            break;
        }
    }
}
