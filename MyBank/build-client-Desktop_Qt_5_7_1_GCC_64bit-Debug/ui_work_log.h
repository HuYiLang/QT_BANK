/********************************************************************************
** Form generated from reading UI file 'work_log.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORK_LOG_H
#define UI_WORK_LOG_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Work_log
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *worker_pssward;
    QComboBox *worker_num;
    QDialogButtonBox *Yesorno;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Work_log)
    {
        if (Work_log->objectName().isEmpty())
            Work_log->setObjectName(QStringLiteral("Work_log"));
        Work_log->resize(400, 320);
        QFont font;
        font.setPointSize(9);
        Work_log->setFont(font);
        Work_log->setStyleSheet(QStringLiteral("background-image: url(:/imagin/13.png);"));
        centralwidget = new QWidget(Work_log);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 50, 331, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 40));
        label_2->setMaximumSize(QSize(100, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \344\273\277\345\256\213 Std R"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 40));
        label->setMaximumSize(QSize(100, 40));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        worker_pssward = new QLineEdit(gridLayoutWidget);
        worker_pssward->setObjectName(QStringLiteral("worker_pssward"));

        gridLayout->addWidget(worker_pssward, 1, 1, 1, 1);

        worker_num = new QComboBox(gridLayoutWidget);
        worker_num->setObjectName(QStringLiteral("worker_num"));
        worker_num->setEditable(true);

        gridLayout->addWidget(worker_num, 0, 1, 1, 1);

        Yesorno = new QDialogButtonBox(centralwidget);
        Yesorno->setObjectName(QStringLiteral("Yesorno"));
        Yesorno->setGeometry(QRect(200, 250, 156, 23));
        Yesorno->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Work_log->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Work_log);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 21));
        Work_log->setMenuBar(menubar);
        statusBar = new QStatusBar(Work_log);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Work_log->setStatusBar(statusBar);

        retranslateUi(Work_log);

        worker_num->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Work_log);
    } // setupUi

    void retranslateUi(QMainWindow *Work_log)
    {
        Work_log->setWindowTitle(QApplication::translate("Work_log", "\350\201\214\345\267\245\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("Work_log", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Work_log", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        worker_num->clear();
        worker_num->insertItems(0, QStringList()
         << QApplication::translate("Work_log", "112075", Q_NULLPTR)
         << QApplication::translate("Work_log", "121856", Q_NULLPTR)
         << QApplication::translate("Work_log", "115769", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Work_log: public Ui_Work_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORK_LOG_H
