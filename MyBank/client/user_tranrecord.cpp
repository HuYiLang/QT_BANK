#include "user_tranrecord.h"
#include "ui_user_tranrecord.h"
#include <QPushButton>
#include <QMessageBox>
#include <QProgressDialog>
#include "record.h"

user_tranrecord::user_tranrecord(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_tranrecord)
{
    blocksize = 0;
    DUparent = (deal_user*) parent;
    ui->setupUi(this);
    ui->num->addItem(QString("%1").arg(DUparent->work_num));
    this->ui->Yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
    this->ui->Yesorno->button(QDialogButtonBox::Ok)->setText(tr("确定"));          //将buttonbox中的ok 变成汉化
    this->ui->Yesorno->button(QDialogButtonBox::Cancel)->setText(tr("取消"));
    this->ui->passward->setEchoMode(QLineEdit::Password);                   //密码方式显示文本
}

user_tranrecord::~user_tranrecord()
{
    delete ui;
}

void user_tranrecord::on_Yesorno_clicked(QAbstractButton *button)
{
    if(ui->Yesorno->button(QDialogButtonBox::Ok) == button)
    {
        if(ui->num->currentText().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位工号!"), QMessageBox::Ok);
            return;
        }
        if(ui->passward->text().length() != 6)
        {
            QMessageBox::information(this, tr("消息"), tr("请输入6位密码!"), QMessageBox::Ok);
            return;
        }
        if(ui->num->currentText() == "" | ui->passward->text() == "")
        {
            QMessageBox::warning(this, tr("警告"), tr("输入不能为空！"), QMessageBox::Ok);
            return;
        }

        str.cmd = LOOK_RECORD;
        str.work_num = ui->num->currentText().toInt();
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
        DUparent->show();
    }
}

void user_tranrecord::read_server()
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

void user_tranrecord::Judge()
{
    QProgressDialog dialog(tr("正在查询"),tr("取消"), 0, 30000, this);
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
    qDebug()<<message.record;
    switch (message.cmd)
    {
        case LOOKRECORD_SUCCESS:
        {
            this->close();
            record *R = new record(this);
            R->show();
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
