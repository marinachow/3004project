/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CES-device/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 6), // "turnOn"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 7), // "turnOff"
QT_MOC_LITERAL(4, 27, 10), // "changeTime"
QT_MOC_LITERAL(5, 38, 11), // "lessIntense"
QT_MOC_LITERAL(6, 50, 11), // "moreIntense"
QT_MOC_LITERAL(7, 62, 18), // "adminChangeBattery"
QT_MOC_LITERAL(8, 81, 4), // "batt"
QT_MOC_LITERAL(9, 86, 11), // "applyToSkin"
QT_MOC_LITERAL(10, 98, 3), // "app"
QT_MOC_LITERAL(11, 102, 18), // "adminChangeCurrent"
QT_MOC_LITERAL(12, 121, 4), // "curr"
QT_MOC_LITERAL(13, 126, 15), // "adminChangeFreq"
QT_MOC_LITERAL(14, 142, 4), // "freq"
QT_MOC_LITERAL(15, 147, 21), // "adminChangeTimerTotal"
QT_MOC_LITERAL(16, 169, 5), // "total"
QT_MOC_LITERAL(17, 175, 5) // "reset"

    },
    "MainWindow\0turnOn\0\0turnOff\0changeTime\0"
    "lessIntense\0moreIntense\0adminChangeBattery\0"
    "batt\0applyToSkin\0app\0adminChangeCurrent\0"
    "curr\0adminChangeFreq\0freq\0"
    "adminChangeTimerTotal\0total\0reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,
      15,    1,   86,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->turnOn(); break;
        case 1: _t->turnOff(); break;
        case 2: _t->changeTime(); break;
        case 3: _t->lessIntense(); break;
        case 4: _t->moreIntense(); break;
        case 5: _t->adminChangeBattery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->applyToSkin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->adminChangeCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->adminChangeFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->adminChangeTimerTotal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->reset(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
