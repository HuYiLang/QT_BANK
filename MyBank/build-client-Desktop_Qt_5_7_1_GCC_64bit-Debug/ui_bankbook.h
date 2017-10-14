/********************************************************************************
** Form generated from reading UI file 'bankbook.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKBOOK_H
#define UI_BANKBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankbook
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *exit;

    void setupUi(QMainWindow *bankbook)
    {
        if (bankbook->objectName().isEmpty())
            bankbook->setObjectName(QStringLiteral("bankbook"));
        bankbook->resize(701, 435);
        bankbook->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\345\244\251\347\251\272.bmp);"));
        centralwidget = new QWidget(bankbook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(3, 0, 701, 431));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \344\273\277\345\256\213 Std R"));
        font.setPointSize(13);
        label->setFont(font);
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(620, 380, 75, 23));
        bankbook->setCentralWidget(centralwidget);

        retranslateUi(bankbook);

        QMetaObject::connectSlotsByName(bankbook);
    } // setupUi

    void retranslateUi(QMainWindow *bankbook)
    {
        bankbook->setWindowTitle(QApplication::translate("bankbook", "\345\255\230\346\212\230", Q_NULLPTR));
        label->setText(QString());
        exit->setText(QApplication::translate("bankbook", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class bankbook: public Ui_bankbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKBOOK_H
