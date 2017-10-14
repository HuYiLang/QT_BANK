/****************************************************************************
** Meta object code from reading C++ file 'deal_user.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../client/deal_user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deal_user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_deal_user_t {
    QByteArrayData data[16];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deal_user_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deal_user_t qt_meta_stringdata_deal_user = {
    {
QT_MOC_LITERAL(0, 0, 9), // "deal_user"
QT_MOC_LITERAL(1, 10, 27), // "on_listWidget_doubleClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 15), // "on_stop_clicked"
QT_MOC_LITERAL(5, 61, 16), // "on_begin_clicked"
QT_MOC_LITERAL(6, 78, 20), // "on_init_user_clicked"
QT_MOC_LITERAL(7, 99, 20), // "on_bank_save_clicked"
QT_MOC_LITERAL(8, 120, 20), // "on_get_money_clicked"
QT_MOC_LITERAL(9, 141, 24), // "on_tran_accounts_clicked"
QT_MOC_LITERAL(10, 166, 21), // "on_look_money_clicked"
QT_MOC_LITERAL(11, 188, 26), // "on_change_passward_clicked"
QT_MOC_LITERAL(12, 215, 25), // "on_account_detail_clicked"
QT_MOC_LITERAL(13, 241, 22), // "on_tran_record_clicked"
QT_MOC_LITERAL(14, 264, 24), // "on_close_account_clicked"
QT_MOC_LITERAL(15, 289, 15) // "on_Exit_clicked"

    },
    "deal_user\0on_listWidget_doubleClicked\0"
    "\0index\0on_stop_clicked\0on_begin_clicked\0"
    "on_init_user_clicked\0on_bank_save_clicked\0"
    "on_get_money_clicked\0on_tran_accounts_clicked\0"
    "on_look_money_clicked\0on_change_passward_clicked\0"
    "on_account_detail_clicked\0"
    "on_tran_record_clicked\0on_close_account_clicked\0"
    "on_Exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deal_user[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void deal_user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        deal_user *_t = static_cast<deal_user *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_stop_clicked(); break;
        case 2: _t->on_begin_clicked(); break;
        case 3: _t->on_init_user_clicked(); break;
        case 4: _t->on_bank_save_clicked(); break;
        case 5: _t->on_get_money_clicked(); break;
        case 6: _t->on_tran_accounts_clicked(); break;
        case 7: _t->on_look_money_clicked(); break;
        case 8: _t->on_change_passward_clicked(); break;
        case 9: _t->on_account_detail_clicked(); break;
        case 10: _t->on_tran_record_clicked(); break;
        case 11: _t->on_close_account_clicked(); break;
        case 12: _t->on_Exit_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject deal_user::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_deal_user.data,
      qt_meta_data_deal_user,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *deal_user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deal_user::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_deal_user.stringdata0))
        return static_cast<void*>(const_cast< deal_user*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int deal_user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
