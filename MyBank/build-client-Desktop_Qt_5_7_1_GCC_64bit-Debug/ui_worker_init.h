/********************************************************************************
** Form generated from reading UI file 'worker_init.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKER_INIT_H
#define UI_WORKER_INIT_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Worker_init
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *passward;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *identfy;
    QLabel *label;
    QDialogButtonBox *Yesorno;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QMainWindow *Worker_init)
    {
        if (Worker_init->objectName().isEmpty())
            Worker_init->setObjectName(QStringLiteral("Worker_init"));
        Worker_init->resize(437, 294);
        Worker_init->setStyleSheet(QString::fromUtf8("background-image: url(:/imagin/\345\233\276\347\211\207.bmp);"));
        centralwidget = new QWidget(Worker_init);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 0, 311, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setMaximumSize(QSize(100, 30));
        QPalette palette;
        label_2->setPalette(palette);
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passward = new QLineEdit(gridLayoutWidget);
        passward->setObjectName(QStringLiteral("passward"));

        gridLayout->addWidget(passward, 2, 1, 1, 1);

        name = new QLineEdit(gridLayoutWidget);
        name->setObjectName(QStringLiteral("name"));

        gridLayout->addWidget(name, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(100, 30));
        label_3->setMaximumSize(QSize(100, 30));
        QPalette palette1;
        label_3->setPalette(palette1);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        identfy = new QLineEdit(gridLayoutWidget);
        identfy->setObjectName(QStringLiteral("identfy"));

        gridLayout->addWidget(identfy, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 30));
        label->setMaximumSize(QSize(100, 30));
        QPalette palette2;
        label->setPalette(palette2);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Yesorno = new QDialogButtonBox(centralwidget);
        Yesorno->setObjectName(QStringLiteral("Yesorno"));
        Yesorno->setGeometry(QRect(250, 240, 156, 23));
        QPalette palette3;
        Yesorno->setPalette(palette3);
        Yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 30, 75, 30));
        label_4->setMinimumSize(QSize(70, 30));
        label_4->setMaximumSize(QSize(75, 30));
        QPalette palette4;
        label_4->setPalette(palette4);
        QFont font1;
        font1.setPointSize(9);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(340, 100, 75, 30));
        label_5->setMinimumSize(QSize(70, 30));
        label_5->setMaximumSize(QSize(75, 30));
        QPalette palette5;
        label_5->setPalette(palette5);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(340, 170, 75, 30));
        label_6->setMinimumSize(QSize(70, 30));
        label_6->setMaximumSize(QSize(75, 30));
        QPalette palette6;
        label_6->setPalette(palette6);
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral(""));
        Worker_init->setCentralWidget(centralwidget);

        retranslateUi(Worker_init);

        QMetaObject::connectSlotsByName(Worker_init);
    } // setupUi

    void retranslateUi(QMainWindow *Worker_init)
    {
        Worker_init->setWindowTitle(QApplication::translate("Worker_init", "\350\201\214\345\267\245\346\263\250\345\206\214", Q_NULLPTR));
        label_2->setText(QApplication::translate("Worker_init", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("Worker_init", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Worker_init", "\350\257\267\350\276\223\345\205\245\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("Worker_init", "18\344\275\215\350\272\253\344\273\275\350\257\201", Q_NULLPTR));
        label_5->setText(QApplication::translate("Worker_init", "\344\270\215\350\266\205\350\277\2076\344\270\252\345\255\227", Q_NULLPTR));
        label_6->setText(QApplication::translate("Worker_init", "\350\276\223\345\205\2456\344\275\215\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Worker_init: public Ui_Worker_init {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKER_INIT_H
