#include "worker_init.h"
#include "ui_worker_init.h"
#include <QDialogButtonBox>
#include <QPushButton>
#include <QMessageBox>
#include <QProgressDialog>

Worker_init::Worker_init(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Worker_init)
{
    blocksize = 0;
    MWparent = (MainWindow*)parent;
    ui->setupUi(this);    
    ui->Yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
    ui->Yesorno->button(QDialogButtonBox::Ok)->setText(tr("确定"));                     //将buttonbox中的ok 变成汉化
    ui->Yesorno->button(QDialogButtonBox::Cancel)->setText(tr("取消"));
    ui->passward->setEchoMode(QLineEdit::Password);                   //密码方式显示文本
}

Worker_init::~Worker_init()
{
    delete ui;
}

void Worker_init::on_Yesorno_clicked(QAbstractButton *button)
{
    if(ui->Yesorno->button(QDialogButtonBox::Ok) == button)
    {
        if((ui->identfy->text().length()) != 18)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入18位身份证号码!"), QMessageBox::Ok);
            return;
        }
        if((ui->name->text().length()) > 6)
        {
            QMessageBox::information(this, tr("消息"), tr("姓名不得不超过6个字!"), QMessageBox::Ok);
            return;
        }
        if((ui->passward->text().length()) != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位密码!"), QMessageBox::Ok);
            return;
        }
        if((ui->identfy->text()) == "" | (ui->name->text()) == "" | (ui->passward->text()) == "")
        {
            QMessageBox::information(this, tr("消息"), tr("输入不得为空!"), QMessageBox::Ok);
            return;
        }

        str.cmd = WORKER_INIT;
        str.work_id = ui->identfy->text();
        str.work_name = ui->name->text();
        str.work_passward = ui->passward->text();

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

void Worker_init::read_server()
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

void Worker_init::Judge()
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
        case INIT_SUCCESS:
        {
            QString str1 = QString("注册成功\n工号为%1").arg(message.work_num);
            QMessageBox::information(this, tr("消息"), str1, QMessageBox::Ok);
            this->close();
            MWparent->show();
            MWparent->str.work_num = message.work_num;
            MWparent->str.work_name = message.work_name;
            break;
        }
        case ERROR:
        {
            QMessageBox::information(this, tr("消息"), tr("注册失败：该员工已被注册!"), QMessageBox::Ok);
            this->close();
            MWparent->show();
            break;
        }
    }

}
