#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "deal_user.h"

MainWindow* MainWindow::window = NULL;
deal_user* deal_user::window = NULL;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    MainWindow* w = MainWindow::getwindow();
    w->show();

    return a.exec();
}
