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
    QByteArrayData data[25];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "doCountDownTick"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "turnOn"
QT_MOC_LITERAL(4, 35, 7), // "turnOff"
QT_MOC_LITERAL(5, 43, 10), // "changeTime"
QT_MOC_LITERAL(6, 54, 11), // "lessIntense"
QT_MOC_LITERAL(7, 66, 11), // "moreIntense"
QT_MOC_LITERAL(8, 78, 18), // "adminChangeBattery"
QT_MOC_LITERAL(9, 97, 4), // "batt"
QT_MOC_LITERAL(10, 102, 11), // "applyToSkin"
QT_MOC_LITERAL(11, 114, 3), // "app"
QT_MOC_LITERAL(12, 118, 18), // "adminChangeCurrent"
QT_MOC_LITERAL(13, 137, 4), // "curr"
QT_MOC_LITERAL(14, 142, 15), // "adminChangeFreq"
QT_MOC_LITERAL(15, 158, 4), // "freq"
QT_MOC_LITERAL(16, 163, 21), // "adminChangeTimerTotal"
QT_MOC_LITERAL(17, 185, 5), // "total"
QT_MOC_LITERAL(18, 191, 19), // "adminChangeWaveform"
QT_MOC_LITERAL(19, 211, 4), // "wave"
QT_MOC_LITERAL(20, 216, 12), // "drainBattery"
QT_MOC_LITERAL(21, 229, 10), // "makeRecord"
QT_MOC_LITERAL(22, 240, 14), // "makeRecordList"
QT_MOC_LITERAL(23, 255, 13), // "deleteRecords"
QT_MOC_LITERAL(24, 269, 6) // "goBack"

    },
    "MainWindow\0doCountDownTick\0\0turnOn\0"
    "turnOff\0changeTime\0lessIntense\0"
    "moreIntense\0adminChangeBattery\0batt\0"
    "applyToSkin\0app\0adminChangeCurrent\0"
    "curr\0adminChangeFreq\0freq\0"
    "adminChangeTimerTotal\0total\0"
    "adminChangeWaveform\0wave\0drainBattery\0"
    "makeRecord\0makeRecordList\0deleteRecords\0"
    "goBack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x08 /* Private */,
      10,    1,  108,    2, 0x08 /* Private */,
      12,    1,  111,    2, 0x08 /* Private */,
      14,    1,  114,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      18,    1,  120,    2, 0x08 /* Private */,
      20,    0,  123,    2, 0x08 /* Private */,
      21,    0,  124,    2, 0x08 /* Private */,
      22,    0,  125,    2, 0x08 /* Private */,
      23,    0,  126,    2, 0x08 /* Private */,
      24,    0,  127,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doCountDownTick(); break;
        case 1: _t->turnOn(); break;
        case 2: _t->turnOff(); break;
        case 3: _t->changeTime(); break;
        case 4: _t->lessIntense(); break;
        case 5: _t->moreIntense(); break;
        case 6: _t->adminChangeBattery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->applyToSkin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->adminChangeCurrent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->adminChangeFreq((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->adminChangeTimerTotal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->adminChangeWaveform((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->drainBattery(); break;
        case 13: _t->makeRecord(); break;
        case 14: _t->makeRecordList(); break;
        case 15: _t->deleteRecords(); break;
        case 16: _t->goBack(); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
