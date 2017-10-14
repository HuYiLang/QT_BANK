/********************************************************************************
** Form generated from reading UI file 'user_tranrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_TRANRECORD_H
#define UI_USER_TRANRECORD_H

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

class Ui_user_tranrecord
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *passward;
    QDialogButtonBox *Yesorno;
    QComboBox *num;

    void setupUi(QMainWindow *user_tranrecord)
    {
        if (user_tranrecord->objectName().isEmpty())
            user_tranrecord->setObjectName(QStringLiteral("user_tranrecord"));
        user_tranrecord->resize(390, 319);
        user_tranrecord->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\350\212\2615.bmp);"));
        centralwidget = new QWidget(user_tranrecord);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 50, 331, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 30));
        label->setMaximumSize(QSize(100, 30));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        passward = new QLineEdit(gridLayoutWidget);
        passward->setObjectName(QStringLiteral("passward"));

        gridLayout->addWidget(passward, 2, 1, 1, 1);

        Yesorno = new QDialogButtonBox(gridLayoutWidget);
        Yesorno->setObjectName(QStringLiteral("Yesorno"));
        Yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(Yesorno, 4, 1, 1, 1);

        num = new QComboBox(gridLayoutWidget);
        num->setObjectName(QStringLiteral("num"));
        num->setEditable(true);

        gridLayout->addWidget(num, 0, 1, 1, 1);

        user_tranrecord->setCentralWidget(centralwidget);

        retranslateUi(user_tranrecord);

        QMetaObject::connectSlotsByName(user_tranrecord);
    } // setupUi

    void retranslateUi(QMainWindow *user_tranrecord)
    {
        user_tranrecord->setWindowTitle(QApplication::translate("user_tranrecord", "\344\272\244\346\230\223\350\256\260\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("user_tranrecord", "\345\267\245\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("user_tranrecord", "\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class user_tranrecord: public Ui_user_tranrecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_TRANRECORD_H
