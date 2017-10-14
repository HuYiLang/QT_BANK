#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "connect.h"
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    ~MainWindow();
    Ui::MainWindow *ui;
    Send_MSG str;
    Recv_MSG message;                                   //接收信息
    static MainWindow* window;
    static MainWindow* getwindow();

private slots:
    void on_Exit_clicked();

    void on_init_worker_clicked();

    void on_log_worker_clicked();

private:
    explicit MainWindow(QWidget *parent = 0);
    QSystemTrayIcon *trayIcon;                          //系统托盘图标
};

#endif // MAINWINDOW_H
