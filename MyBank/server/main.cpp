#include "widget.h"
#include <QApplication>
#include <QTextCodec>
#include <QFile>
#include <QDebug>
#include <QTime>
#include "my_sql.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());

    MY_sql mysql;
    mysql.initsql();

    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");

    QFile file("交易记录.txt");
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        qDebug()<<file.errorString();
    }
    QString Record = QString("%1\t\t中国银行\t\t交易记录\n\n").arg(current_date);
    file.write(Record.toLocal8Bit());
    file.close();

    Widget w;
    w.show();

    return a.exec();
}
