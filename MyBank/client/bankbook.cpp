#include "bankbook.h"
#include "ui_bankbook.h"
#include "deal_user.h"

bankbook::bankbook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bankbook)
{
    ui->setupUi(this);
    UAparent = (user_account_detail*) parent;
    QString filename = QString("%1的存折.txt").arg(UAparent->message.user_name);
    QFile file(filename);
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug()<<file.errorString();
    }
    QString book = QString::fromLocal8Bit(file.readAll());
    this->ui->label->setText(book);
    file.close();
}

bankbook::~bankbook()
{
    delete ui;
}

void bankbook::on_exit_clicked()
{
    this->close();
    deal_user* DU = deal_user::getwindow(this);
    DU->show();
}
