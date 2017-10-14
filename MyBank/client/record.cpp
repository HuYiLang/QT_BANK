#include "record.h"
#include "ui_record.h"
#include "deal_user.h"

record::record(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::record)
{
    UTparent = (user_tranrecord*) parent;
    ui->setupUi(this);
    ui->label->setText(UTparent->message.record);
}

record::~record()
{
    delete ui;
}

void record::on_pushButton_clicked()
{
    this->close();
    deal_user* DU = deal_user::getwindow(this);
    DU->show();
}
