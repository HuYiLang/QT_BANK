/********************************************************************************
** Form generated from reading UI file 'user_changepassward.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_CHANGEPASSWARD_H
#define UI_USER_CHANGEPASSWARD_H

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

class Ui_user_changepassward
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label_3;
    QLineEdit *user_passward1;
    QLineEdit *newpassward;
    QLabel *label;
    QLineEdit *user_id;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *newpassward1;
    QComboBox *user_num;
    QDialogButtonBox *yesorno;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_6;

    void setupUi(QMainWindow *user_changepassward)
    {
        if (user_changepassward->objectName().isEmpty())
            user_changepassward->setObjectName(QStringLiteral("user_changepassward"));
        user_changepassward->resize(486, 297);
        user_changepassward->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\350\212\2612.bmp);"));
        centralwidget = new QWidget(user_changepassward);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 321, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 30));
        label_5->setMaximumSize(QSize(100, 30));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        user_passward1 = new QLineEdit(gridLayoutWidget);
        user_passward1->setObjectName(QStringLiteral("user_passward1"));
        user_passward1->setMaximumSize(QSize(200, 16777215));
        user_passward1->setSizeIncrement(QSize(200, 0));
        user_passward1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_passward1, 3, 2, 1, 1);

        newpassward = new QLineEdit(gridLayoutWidget);
        newpassward->setObjectName(QStringLiteral("newpassward"));
        newpassward->setMaximumSize(QSize(200, 16777215));
        newpassward->setSizeIncrement(QSize(200, 0));
        newpassward->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(newpassward, 4, 2, 1, 1);

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

        gridLayout->addWidget(user_id, 1, 2, 1, 1);

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

        newpassward1 = new QLineEdit(gridLayoutWidget);
        newpassward1->setObjectName(QStringLiteral("newpassward1"));
        newpassward1->setMaximumSize(QSize(200, 16777215));
        newpassward1->setSizeIncrement(QSize(200, 0));
        newpassward1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(newpassward1, 5, 2, 1, 1);

        user_num = new QComboBox(gridLayoutWidget);
        user_num->setObjectName(QStringLiteral("user_num"));
        user_num->setEditable(true);

        gridLayout->addWidget(user_num, 0, 2, 1, 1);

        yesorno = new QDialogButtonBox(centralwidget);
        yesorno->setObjectName(QStringLiteral("yesorno"));
        yesorno->setGeometry(QRect(190, 250, 273, 23));
        yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(350, 10, 111, 241));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(100, 25));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        user_changepassward->setCentralWidget(centralwidget);

        retranslateUi(user_changepassward);

        QMetaObject::connectSlotsByName(user_changepassward);
    } // setupUi

    void retranslateUi(QMainWindow *user_changepassward)
    {
        user_changepassward->setWindowTitle(QApplication::translate("user_changepassward", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("user_changepassward", "\350\257\267\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("user_changepassward", "\350\257\267\350\276\223\345\205\245\346\227\247\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("user_changepassward", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_changepassward", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\350\264\246\345\217\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("user_changepassward", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("user_changepassward", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_10->setText(QApplication::translate("user_changepassward", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_7->setText(QApplication::translate("user_changepassward", "18\344\275\215\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_9->setText(QApplication::translate("user_changepassward", "6\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("user_changepassward", "6\344\275\215\346\225\260\350\264\246\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_changepassward: public Ui_user_changepassward {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_CHANGEPASSWARD_H
