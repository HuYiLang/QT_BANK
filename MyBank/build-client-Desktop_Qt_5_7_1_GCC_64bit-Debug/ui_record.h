/********************************************************************************
** Form generated from reading UI file 'record.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECORD_H
#define UI_RECORD_H

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

class Ui_record
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *record)
    {
        if (record->objectName().isEmpty())
            record->setObjectName(QStringLiteral("record"));
        record->resize(665, 449);
        record->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\350\212\2614.bmp);"));
        centralwidget = new QWidget(record);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 671, 451));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \344\273\277\345\256\213 Std R"));
        font.setPointSize(13);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 400, 75, 23));
        record->setCentralWidget(centralwidget);

        retranslateUi(record);

        QMetaObject::connectSlotsByName(record);
    } // setupUi

    void retranslateUi(QMainWindow *record)
    {
        record->setWindowTitle(QApplication::translate("record", "\344\272\244\346\230\223\350\256\260\345\275\225", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("record", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class record: public Ui_record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECORD_H
