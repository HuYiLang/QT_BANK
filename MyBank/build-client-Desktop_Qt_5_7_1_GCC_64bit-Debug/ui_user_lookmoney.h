/********************************************************************************
** Form generated from reading UI file 'user_lookmoney.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_LOOKMONEY_H
#define UI_USER_LOOKMONEY_H

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

class Ui_user_lookmoney
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *user_id;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *user_passward2;
    QLabel *label_2;
    QLineEdit *user_passward1;
    QComboBox *user_num;
    QDialogButtonBox *yesorno;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;

    void setupUi(QMainWindow *user_lookmoney)
    {
        if (user_lookmoney->objectName().isEmpty())
            user_lookmoney->setObjectName(QStringLiteral("user_lookmoney"));
        user_lookmoney->resize(451, 252);
        user_lookmoney->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\350\212\2611.bmp);"));
        centralwidget = new QWidget(user_lookmoney);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 311, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 30));
        label_4->setMaximumSize(QSize(100, 30));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

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

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        user_passward2 = new QLineEdit(gridLayoutWidget);
        user_passward2->setObjectName(QStringLiteral("user_passward2"));
        user_passward2->setMaximumSize(QSize(200, 16777215));
        user_passward2->setSizeIncrement(QSize(200, 0));
        user_passward2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward2, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        user_passward1 = new QLineEdit(gridLayoutWidget);
        user_passward1->setObjectName(QStringLiteral("user_passward1"));
        user_passward1->setMaximumSize(QSize(200, 16777215));
        user_passward1->setSizeIncrement(QSize(200, 0));
        user_passward1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward1, 2, 1, 1, 1);

        user_num = new QComboBox(gridLayoutWidget);
        user_num->setObjectName(QStringLiteral("user_num"));
        user_num->setEditable(true);

        gridLayout->addWidget(user_num, 0, 1, 1, 1);

        yesorno = new QDialogButtonBox(centralwidget);
        yesorno->setObjectName(QStringLiteral("yesorno"));
        yesorno->setGeometry(QRect(140, 210, 273, 23));
        yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(330, 10, 91, 181));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        user_lookmoney->setCentralWidget(centralwidget);

        retranslateUi(user_lookmoney);

        QMetaObject::connectSlotsByName(user_lookmoney);
    } // setupUi

    void retranslateUi(QMainWindow *user_lookmoney)
    {
        user_lookmoney->setWindowTitle(QApplication::translate("user_lookmoney", "\346\237\245\347\234\213\344\275\231\351\242\235", Q_NULLPTR));
        label_4->setText(QApplication::translate("user_lookmoney", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("user_lookmoney", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_lookmoney", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_lookmoney", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\350\264\246\345\217\267", Q_NULLPTR));
        label_6->setText(QApplication::translate("user_lookmoney", "18\344\275\215\350\272\253\344\273\275\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("user_lookmoney", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_lookmoney", "6\344\275\215\350\264\246\345\217\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("user_lookmoney", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_lookmoney: public Ui_user_lookmoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_LOOKMONEY_H
