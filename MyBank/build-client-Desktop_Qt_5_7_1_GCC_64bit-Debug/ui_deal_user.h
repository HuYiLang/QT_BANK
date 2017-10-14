/********************************************************************************
** Form generated from reading UI file 'deal_user.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEAL_USER_H
#define UI_DEAL_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deal_user
{
public:
    QWidget *centralwidget;
    QCalendarWidget *calendarWidget;
    QListWidget *listWidget;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *begin;
    QPushButton *stop;
    QLabel *label_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *init_user;
    QPushButton *change_passward;
    QPushButton *bank_save;
    QPushButton *account_detail;
    QPushButton *tran_record;
    QPushButton *get_money;
    QPushButton *close_account;
    QPushButton *tran_accounts;
    QPushButton *Exit;
    QPushButton *look_money;

    void setupUi(QMainWindow *deal_user)
    {
        if (deal_user->objectName().isEmpty())
            deal_user->setObjectName(QStringLiteral("deal_user"));
        deal_user->resize(700, 419);
        deal_user->setStyleSheet(QStringLiteral("background-image: url(:/imagin/16.png);"));
        centralwidget = new QWidget(deal_user);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(457, 0, 241, 161));
        calendarWidget->setStyleSheet(QStringLiteral("background-image: url(:/16.png);"));
        listWidget = new QListWidget(centralwidget);
        QBrush brush(QColor(170, 85, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setForeground(brush);
        QBrush brush1(QColor(170, 85, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setFont(font);
        __qlistwidgetitem1->setForeground(brush1);
        QBrush brush2(QColor(170, 85, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setFont(font);
        __qlistwidgetitem2->setForeground(brush2);
        QBrush brush3(QColor(170, 85, 255, 255));
        brush3.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setFont(font);
        __qlistwidgetitem3->setForeground(brush3);
        QBrush brush4(QColor(170, 85, 255, 255));
        brush4.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setFont(font);
        __qlistwidgetitem4->setForeground(brush4);
        QBrush brush5(QColor(170, 85, 255, 255));
        brush5.setStyle(Qt::NoBrush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setFont(font);
        __qlistwidgetitem5->setBackground(brush6);
        __qlistwidgetitem5->setForeground(brush5);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(460, 190, 241, 171));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(460, 160, 241, 31));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(460, 370, 241, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        begin = new QPushButton(horizontalLayoutWidget);
        begin->setObjectName(QStringLiteral("begin"));
        begin->setMinimumSize(QSize(100, 0));
        begin->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(begin);

        stop = new QPushButton(horizontalLayoutWidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setMinimumSize(QSize(100, 0));
        stop->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(stop);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 441, 61));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 90, 411, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        init_user = new QPushButton(gridLayoutWidget);
        init_user->setObjectName(QStringLiteral("init_user"));
        init_user->setMinimumSize(QSize(100, 0));
        init_user->setMaximumSize(QSize(100, 25));
        init_user->setSizeIncrement(QSize(150, 25));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \346\245\267\344\275\223 Std R"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        init_user->setFont(font1);

        gridLayout->addWidget(init_user, 0, 0, 1, 1);

        change_passward = new QPushButton(gridLayoutWidget);
        change_passward->setObjectName(QStringLiteral("change_passward"));
        change_passward->setMinimumSize(QSize(100, 0));
        change_passward->setMaximumSize(QSize(100, 25));
        change_passward->setSizeIncrement(QSize(150, 25));
        change_passward->setFont(font1);

        gridLayout->addWidget(change_passward, 0, 1, 1, 1);

        bank_save = new QPushButton(gridLayoutWidget);
        bank_save->setObjectName(QStringLiteral("bank_save"));
        bank_save->setMaximumSize(QSize(150, 25));
        bank_save->setSizeIncrement(QSize(150, 25));
        bank_save->setFont(font1);

        gridLayout->addWidget(bank_save, 1, 0, 1, 1);

        account_detail = new QPushButton(gridLayoutWidget);
        account_detail->setObjectName(QStringLiteral("account_detail"));
        account_detail->setMaximumSize(QSize(150, 25));
        account_detail->setSizeIncrement(QSize(150, 25));
        account_detail->setFont(font1);

        gridLayout->addWidget(account_detail, 1, 1, 1, 1);

        tran_record = new QPushButton(gridLayoutWidget);
        tran_record->setObjectName(QStringLiteral("tran_record"));
        tran_record->setMaximumSize(QSize(150, 25));
        tran_record->setSizeIncrement(QSize(150, 25));
        tran_record->setFont(font1);

        gridLayout->addWidget(tran_record, 2, 1, 1, 1);

        get_money = new QPushButton(gridLayoutWidget);
        get_money->setObjectName(QStringLiteral("get_money"));
        get_money->setMaximumSize(QSize(150, 25));
        get_money->setSizeIncrement(QSize(150, 25));
        get_money->setFont(font1);

        gridLayout->addWidget(get_money, 2, 0, 1, 1);

        close_account = new QPushButton(gridLayoutWidget);
        close_account->setObjectName(QStringLiteral("close_account"));
        close_account->setMaximumSize(QSize(150, 25));
        close_account->setSizeIncrement(QSize(150, 25));
        close_account->setFont(font1);

        gridLayout->addWidget(close_account, 3, 1, 1, 1);

        tran_accounts = new QPushButton(gridLayoutWidget);
        tran_accounts->setObjectName(QStringLiteral("tran_accounts"));
        tran_accounts->setMaximumSize(QSize(150, 25));
        tran_accounts->setSizeIncrement(QSize(150, 25));
        tran_accounts->setFont(font1);

        gridLayout->addWidget(tran_accounts, 3, 0, 1, 1);

        Exit = new QPushButton(gridLayoutWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setMaximumSize(QSize(150, 25));
        Exit->setSizeIncrement(QSize(150, 25));
        Exit->setFont(font1);

        gridLayout->addWidget(Exit, 4, 1, 1, 1);

        look_money = new QPushButton(gridLayoutWidget);
        look_money->setObjectName(QStringLiteral("look_money"));
        look_money->setMaximumSize(QSize(150, 25));
        look_money->setSizeIncrement(QSize(150, 25));
        look_money->setFont(font1);

        gridLayout->addWidget(look_money, 4, 0, 1, 1);

        deal_user->setCentralWidget(centralwidget);

        retranslateUi(deal_user);

        QMetaObject::connectSlotsByName(deal_user);
    } // setupUi

    void retranslateUi(QMainWindow *deal_user)
    {
        deal_user->setWindowTitle(QApplication::translate("deal_user", "\344\270\273\347\252\227\345\217\243", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("deal_user", "Beyond-\345\205\211\350\276\211\345\262\201\346\234\210.mp3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("deal_user", "\351\231\210\346\205\247\345\250\264-\345\215\203\345\215\203\351\230\225\346\255\214.mp3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("deal_user", "\346\235\216\345\205\213\345\213\244-\346\234\210\345\215\212\345\260\217\345\244\234\346\233\262.mp3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("deal_user", "\350\213\217\350\212\256-\351\205\222\345\271\262\345\200\230\345\215\226\346\227\240.mp3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("deal_user", "\346\261\252\345\263\260-\346\200\222\346\224\276\347\232\204\347\224\237\345\221\275.mp3", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("deal_user", "\351\203\221\346\231\272\345\214\226-\346\260\264\346\211\213.mp3", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("deal_user", "\351\237\263\344\271\220\345\210\227\350\241\250", Q_NULLPTR));
        begin->setText(QApplication::translate("deal_user", "\351\232\217\346\234\272\346\222\255\346\224\276", Q_NULLPTR));
        stop->setText(QApplication::translate("deal_user", "\345\205\263\351\227\255\351\237\263\344\271\220", Q_NULLPTR));
        label_2->setText(QString());
        init_user->setText(QApplication::translate("deal_user", "\345\274\200\346\210\267", Q_NULLPTR));
        change_passward->setText(QApplication::translate("deal_user", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        bank_save->setText(QApplication::translate("deal_user", "\345\255\230\346\254\276", Q_NULLPTR));
        account_detail->setText(QApplication::translate("deal_user", "\350\264\246\346\210\267\346\230\216\347\273\206", Q_NULLPTR));
        tran_record->setText(QApplication::translate("deal_user", "\344\272\244\346\230\223\346\212\245\350\241\250", Q_NULLPTR));
        get_money->setText(QApplication::translate("deal_user", "\345\217\226\346\254\276", Q_NULLPTR));
        close_account->setText(QApplication::translate("deal_user", "\351\224\200\346\210\267", Q_NULLPTR));
        tran_accounts->setText(QApplication::translate("deal_user", "\350\275\254\350\264\246", Q_NULLPTR));
        Exit->setText(QApplication::translate("deal_user", "\351\200\200\345\207\272", Q_NULLPTR));
        look_money->setText(QApplication::translate("deal_user", "\344\275\231\351\242\235\346\237\245\350\257\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deal_user: public Ui_deal_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEAL_USER_H
