/****************************************************************************
** Meta object code from reading C++ file 'turing_pre.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../turing_pre.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'turing_pre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_turing_pre_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_turing_pre_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_turing_pre_t qt_meta_stringdata_turing_pre = {
    {
QT_MOC_LITERAL(0, 0, 10), // "turing_pre"
QT_MOC_LITERAL(1, 11, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_toolButton_2_clicked"
QT_MOC_LITERAL(4, 58, 23) // "on_toolButton_3_clicked"

    },
    "turing_pre\0on_toolButton_clicked\0\0"
    "on_toolButton_2_clicked\0on_toolButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_turing_pre[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void turing_pre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        turing_pre *_t = static_cast<turing_pre *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toolButton_clicked(); break;
        case 1: _t->on_toolButton_2_clicked(); break;
        case 2: _t->on_toolButton_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject turing_pre::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_turing_pre.data,
      qt_meta_data_turing_pre,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *turing_pre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *turing_pre::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_turing_pre.stringdata0))
        return static_cast<void*>(const_cast< turing_pre*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int turing_pre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
