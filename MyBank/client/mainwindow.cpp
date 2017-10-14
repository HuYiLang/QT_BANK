#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMutex>
#include <QDialogButtonBox>
#include "worker_init.h"
#include "work_log.h"
#include <QMenu>

QMutex mutex;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/imagin/icon.bmp"));
    trayIcon = new QSystemTrayIcon(QIcon(":/imagin/icon.bmp"), this);
    //系统托盘图标
    trayIcon->setToolTip(tr("ABCbank管理系统 --- hjf作品"));
    QMenu *menu = new QMenu;
    menu->addAction(tr("退出"), qApp, SLOT(quit()));
    trayIcon->setContextMenu(menu);
    // 托盘图标被激活后进行处理
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
            this, SLOT(trayIconActivated(QSystemTrayIcon::ActivationReason)));
    // 显示托盘图标
    trayIcon->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

MainWindow *MainWindow::getwindow()                     //设为单例模式
{
    if(window == NULL)
    {
        mutex.lock();
        if(window == NULL)
        {
            window = new MainWindow();
        }
        mutex.unlock();
    }
    return window;
}

void MainWindow::on_Exit_clicked()                      //按下退出
{
    this->close();
}

void MainWindow::on_init_worker_clicked()               //职工注册
{
    this->hide();
    Worker_init *wi = new Worker_init(this);
    wi->show();
}

void MainWindow::on_log_worker_clicked()                //职工登录
{
    this->hide();
    Work_log* wi = new Work_log(this);
    wi->show();
}
