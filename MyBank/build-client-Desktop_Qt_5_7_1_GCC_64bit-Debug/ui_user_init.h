/********************************************************************************
** Form generated from reading UI file 'user_init.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INIT_H
#define UI_USER_INIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_init
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *user_passward2;
    QLineEdit *first_money;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *user_id;
    QLabel *label_2;
    QLineEdit *user_name;
    QLineEdit *user_passward1;
    QLabel *label_3;
    QDialogButtonBox *yesorno;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;

    void setupUi(QMainWindow *User_init)
    {
        if (User_init->objectName().isEmpty())
            User_init->setObjectName(QStringLiteral("User_init"));
        User_init->resize(451, 342);
        QPalette palette;
        QBrush brush(QColor(85, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        User_init->setPalette(palette);
        User_init->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\345\233\276\347\211\207 (2).bmp);"));
        centralwidget = new QWidget(User_init);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 30, 321, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 30));
        label_5->setMaximumSize(QSize(100, 30));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        user_passward2 = new QLineEdit(gridLayoutWidget);
        user_passward2->setObjectName(QStringLiteral("user_passward2"));
        user_passward2->setMaximumSize(QSize(200, 16777215));
        user_passward2->setSizeIncrement(QSize(200, 0));
        QPalette palette2;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        user_passward2->setPalette(palette2);
        user_passward2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward2, 3, 1, 1, 1);

        first_money = new QLineEdit(gridLayoutWidget);
        first_money->setObjectName(QStringLiteral("first_money"));
        first_money->setMaximumSize(QSize(200, 16777215));
        first_money->setSizeIncrement(QSize(200, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        first_money->setPalette(palette3);
        first_money->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(first_money, 4, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette4);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 30));
        label->setMaximumSize(QSize(100, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label->setPalette(palette5);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        user_id = new QLineEdit(gridLayoutWidget);
        user_id->setObjectName(QStringLiteral("user_id"));
        user_id->setMaximumSize(QSize(200, 16777215));
        user_id->setSizeIncrement(QSize(200, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        user_id->setPalette(palette6);

        gridLayout->addWidget(user_id, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_2->setPalette(palette7);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        user_name = new QLineEdit(gridLayoutWidget);
        user_name->setObjectName(QStringLiteral("user_name"));
        user_name->setMaximumSize(QSize(200, 16777215));
        user_name->setSizeIncrement(QSize(200, 0));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        user_name->setPalette(palette8);

        gridLayout->addWidget(user_name, 0, 1, 1, 1);

        user_passward1 = new QLineEdit(gridLayoutWidget);
        user_passward1->setObjectName(QStringLiteral("user_passward1"));
        user_passward1->setMaximumSize(QSize(200, 16777215));
        user_passward1->setSizeIncrement(QSize(200, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        user_passward1->setPalette(palette9);
        user_passward1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward1, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette10);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        yesorno = new QDialogButtonBox(centralwidget);
        yesorno->setObjectName(QStringLiteral("yesorno"));
        yesorno->setGeometry(QRect(260, 300, 156, 23));
        yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(340, 30, 111, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(70, 30));
        label_8->setMaximumSize(QSize(75, 30));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_8->setPalette(palette11);
        QFont font;
        font.setPointSize(9);
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_8);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(70, 25));
        label_6->setMaximumSize(QSize(75, 25));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette12);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(70, 25));
        label_7->setMaximumSize(QSize(75, 25));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_7->setPalette(palette13);
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_7);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(70, 25));
        label_9->setMaximumSize(QSize(75, 25));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_9->setPalette(palette14);
        label_9->setFont(font);
        label_9->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(70, 25));
        label_10->setMaximumSize(QSize(75, 25));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_10->setPalette(palette15);
        label_10->setFont(font);
        label_10->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(label_10);

        User_init->setCentralWidget(centralwidget);

        retranslateUi(User_init);

        QMetaObject::connectSlotsByName(User_init);
    } // setupUi

    void retranslateUi(QMainWindow *User_init)
    {
        User_init->setWindowTitle(QApplication::translate("User_init", "\345\274\200\346\210\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("User_init", "\345\274\200\346\210\267\351\207\221\351\242\235", Q_NULLPTR));
        label_4->setText(QApplication::translate("User_init", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("User_init", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("User_init", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("User_init", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("User_init", "\344\270\215\350\266\205\350\277\2076\344\270\252\345\255\227", Q_NULLPTR));
        label_6->setText(QApplication::translate("User_init", "18\344\275\215\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_7->setText(QApplication::translate("User_init", "\350\276\223\345\205\2456\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_9->setText(QApplication::translate("User_init", "\350\276\223\345\205\2456\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("User_init", "\345\260\217\344\272\2167\344\275\215\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User_init: public Ui_User_init {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INIT_H
