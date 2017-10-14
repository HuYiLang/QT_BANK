#ifndef RECORD_H
#define RECORD_H

#include <QMainWindow>
#include "user_tranrecord.h"

namespace Ui {
class record;
}

class record : public QMainWindow
{
    Q_OBJECT

public:
    explicit record(QWidget *parent = 0);
    ~record();

private slots:
    void on_pushButton_clicked();

private:
    Ui::record *ui;
    user_tranrecord* UTparent;
};

#endif // RECORD_H
