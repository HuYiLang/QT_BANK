/********************************************************************************
** Form generated from reading UI file 'user_tranaccounts.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_TRANACCOUNTS_H
#define UI_USER_TRANACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_tranaccounts
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *user_id;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *user_passward2;
    QLineEdit *tran_people;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *tran_money;
    QLineEdit *user_passward1;
    QComboBox *user_num;
    QDialogButtonBox *yesorno;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_12;

    void setupUi(QMainWindow *user_tranaccounts)
    {
        if (user_tranaccounts->objectName().isEmpty())
            user_tranaccounts->setObjectName(QStringLiteral("user_tranaccounts"));
        user_tranaccounts->resize(402, 300);
        user_tranaccounts->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\350\212\261.bmp);"));
        centralwidget = new QWidget(user_tranaccounts);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 281, 238));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 30));
        label->setMaximumSize(QSize(100, 30));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        user_id = new QLineEdit(gridLayoutWidget);
        user_id->setObjectName(QStringLiteral("user_id"));
        user_id->setMaximumSize(QSize(200, 16777215));
        user_id->setSizeIncrement(QSize(200, 0));

        gridLayout->addWidget(user_id, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        user_passward2 = new QLineEdit(gridLayoutWidget);
        user_passward2->setObjectName(QStringLiteral("user_passward2"));
        user_passward2->setMaximumSize(QSize(200, 16777215));
        user_passward2->setSizeIncrement(QSize(200, 0));
        user_passward2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward2, 4, 1, 1, 1);

        tran_people = new QLineEdit(gridLayoutWidget);
        tran_people->setObjectName(QStringLiteral("tran_people"));
        tran_people->setMaximumSize(QSize(200, 16777215));
        tran_people->setSizeIncrement(QSize(200, 0));
        tran_people->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(tran_people, 5, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 30));
        label_5->setMaximumSize(QSize(100, 30));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(100, 30));
        label_6->setMaximumSize(QSize(100, 30));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        tran_money = new QLineEdit(gridLayoutWidget);
        tran_money->setObjectName(QStringLiteral("tran_money"));
        tran_money->setMaximumSize(QSize(200, 16777215));
        tran_money->setSizeIncrement(QSize(200, 0));
        tran_money->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(tran_money, 7, 1, 1, 1);

        user_passward1 = new QLineEdit(gridLayoutWidget);
        user_passward1->setObjectName(QStringLiteral("user_passward1"));
        user_passward1->setMaximumSize(QSize(200, 16777215));
        user_passward1->setSizeIncrement(QSize(200, 0));
        user_passward1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward1, 3, 1, 1, 1);

        user_num = new QComboBox(gridLayoutWidget);
        user_num->setObjectName(QStringLiteral("user_num"));
        user_num->setEditable(true);

        gridLayout->addWidget(user_num, 0, 1, 1, 1);

        yesorno = new QDialogButtonBox(centralwidget);
        yesorno->setObjectName(QStringLiteral("yesorno"));
        yesorno->setGeometry(QRect(130, 250, 263, 23));
        yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(300, 10, 91, 241));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_12, 5, 0, 1, 1);

        user_tranaccounts->setCentralWidget(centralwidget);

        retranslateUi(user_tranaccounts);

        QMetaObject::connectSlotsByName(user_tranaccounts);
    } // setupUi

    void retranslateUi(QMainWindow *user_tranaccounts)
    {
        user_tranaccounts->setWindowTitle(QApplication::translate("user_tranaccounts", "\350\275\254\350\264\246", Q_NULLPTR));
        label->setText(QApplication::translate("user_tranaccounts", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_tranaccounts", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("user_tranaccounts", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_tranaccounts", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_tranaccounts", "\350\257\267\350\276\223\345\205\245\350\275\254\350\264\246\351\207\221\351\242\235", Q_NULLPTR));
        label_6->setText(QApplication::translate("user_tranaccounts", "\350\257\267\350\276\223\345\205\245\346\216\245\346\224\266\344\272\272\350\264\246\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("user_tranaccounts", "18\344\275\215\346\225\260\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_10->setText(QApplication::translate("user_tranaccounts", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("user_tranaccounts", "6\344\275\215\346\225\260\350\264\246\345\217\267", Q_NULLPTR));
        label_9->setText(QApplication::translate("user_tranaccounts", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("user_tranaccounts", "6\344\275\215\346\225\260\350\264\246\345\217\267", Q_NULLPTR));
        label_12->setText(QApplication::translate("user_tranaccounts", "\345\260\217\344\272\2167\344\275\215\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_tranaccounts: public Ui_user_tranaccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_TRANACCOUNTS_H
