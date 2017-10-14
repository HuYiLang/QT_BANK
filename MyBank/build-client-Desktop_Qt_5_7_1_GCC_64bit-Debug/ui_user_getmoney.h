/********************************************************************************
** Form generated from reading UI file 'user_getmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_GETMONEY_H
#define UI_USER_GETMONEY_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_getmoney
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *user_passward1;
    QLabel *label_3;
    QLineEdit *get_money;
    QLineEdit *user_passward2;
    QLineEdit *user_id;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *user_num;
    QDialogButtonBox *yesorno;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QMainWindow *user_getmoney)
    {
        if (user_getmoney->objectName().isEmpty())
            user_getmoney->setObjectName(QStringLiteral("user_getmoney"));
        user_getmoney->resize(451, 253);
        user_getmoney->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));
        centralwidget = new QWidget(user_getmoney);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 321, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        user_passward1 = new QLineEdit(gridLayoutWidget);
        user_passward1->setObjectName(QStringLiteral("user_passward1"));
        user_passward1->setMaximumSize(QSize(200, 16777215));
        user_passward1->setSizeIncrement(QSize(200, 0));
        user_passward1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward1, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        get_money = new QLineEdit(gridLayoutWidget);
        get_money->setObjectName(QStringLiteral("get_money"));
        get_money->setMaximumSize(QSize(200, 16777215));
        get_money->setSizeIncrement(QSize(200, 0));
        get_money->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(get_money, 4, 1, 1, 1);

        user_passward2 = new QLineEdit(gridLayoutWidget);
        user_passward2->setObjectName(QStringLiteral("user_passward2"));
        user_passward2->setMaximumSize(QSize(200, 16777215));
        user_passward2->setSizeIncrement(QSize(200, 0));
        user_passward2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward2, 3, 1, 1, 1);

        user_id = new QLineEdit(gridLayoutWidget);
        user_id->setObjectName(QStringLiteral("user_id"));
        user_id->setMaximumSize(QSize(200, 16777215));
        user_id->setSizeIncrement(QSize(200, 0));

        gridLayout->addWidget(user_id, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 30));
        label->setMaximumSize(QSize(100, 30));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        QPalette palette;
        label_2->setPalette(palette);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 30));
        label_5->setMaximumSize(QSize(100, 30));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        user_num = new QComboBox(gridLayoutWidget);
        user_num->setObjectName(QStringLiteral("user_num"));
        user_num->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));
        user_num->setEditable(true);

        gridLayout->addWidget(user_num, 0, 1, 1, 1);

        yesorno = new QDialogButtonBox(centralwidget);
        yesorno->setObjectName(QStringLiteral("yesorno"));
        yesorno->setGeometry(QRect(150, 220, 273, 23));
        yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(330, 10, 102, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(100, 25));
        label_10->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));

        verticalLayout->addWidget(label_10);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(100, 25));
        label_6->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(100, 25));
        label_7->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(100, 25));
        label_8->setMaximumSize(QSize(100, 25));
        label_8->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(100, 25));
        label_9->setMaximumSize(QSize(100, 25));
        label_9->setStyleSheet(QStringLiteral("background-image: url(:/imagin/hua.bmp);"));

        verticalLayout->addWidget(label_9);

        user_getmoney->setCentralWidget(centralwidget);

        retranslateUi(user_getmoney);

        user_num->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(user_getmoney);
    } // setupUi

    void retranslateUi(QMainWindow *user_getmoney)
    {
        user_getmoney->setWindowTitle(QApplication::translate("user_getmoney", "\345\217\226\346\254\276", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_getmoney", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("user_getmoney", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("user_getmoney", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_getmoney", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\350\264\246\345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_getmoney", "\350\257\267\350\276\223\345\205\245\345\217\226\346\254\276\351\207\221\351\242\235", Q_NULLPTR));
        label_10->setText(QApplication::translate("user_getmoney", "6\344\275\215\346\225\260\350\264\246\345\217\267", Q_NULLPTR));
        label_6->setText(QApplication::translate("user_getmoney", "18\344\275\215\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("user_getmoney", "6\344\275\215\346\225\260\345\257\206\347\240\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("user_getmoney", "6\344\275\215\346\225\260\345\257\206\347\240\201", Q_NULLPTR));
        label_9->setText(QApplication::translate("user_getmoney", "\345\260\217\344\272\2167\344\275\215\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_getmoney: public Ui_user_getmoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_GETMONEY_H
