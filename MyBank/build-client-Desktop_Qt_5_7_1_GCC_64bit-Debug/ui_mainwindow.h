/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *log_worker;
    QPushButton *Exit;
    QLabel *label_2;
    QPushButton *init_worker;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(416, 309);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/imagin/03.JPG);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 421, 311));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        log_worker = new QPushButton(gridLayoutWidget_2);
        log_worker->setObjectName(QStringLiteral("log_worker"));
        log_worker->setMinimumSize(QSize(150, 0));
        log_worker->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(log_worker, 2, 0, 1, 1);

        Exit = new QPushButton(gridLayoutWidget_2);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setMinimumSize(QSize(150, 25));
        Exit->setMaximumSize(QSize(150, 25));

        gridLayout_2->addWidget(Exit, 3, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 35));
        label_2->setMaximumSize(QSize(150, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \344\273\277\345\256\213 Std R"));
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        init_worker = new QPushButton(gridLayoutWidget_2);
        init_worker->setObjectName(QStringLiteral("init_worker"));
        init_worker->setMinimumSize(QSize(150, 0));
        init_worker->setMaximumSize(QSize(150, 16777215));

        gridLayout_2->addWidget(init_worker, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "China Bank", Q_NULLPTR));
        log_worker->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\346\235\245\345\210\260\344\270\255\345\233\275\351\223\266\350\241\214", Q_NULLPTR));
        init_worker->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
