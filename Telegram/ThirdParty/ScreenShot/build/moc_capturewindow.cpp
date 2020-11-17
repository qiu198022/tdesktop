/****************************************************************************
** Meta object code from reading C++ file 'capturewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../capturewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capturewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CaptureWindow_t {
    QByteArrayData data[13];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CaptureWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CaptureWindow_t qt_meta_stringdata_CaptureWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CaptureWindow"
QT_MOC_LITERAL(1, 14, 6), // "cancel"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "copyColorValue"
QT_MOC_LITERAL(4, 37, 13), // "changeRgb2Hex"
QT_MOC_LITERAL(5, 51, 6), // "upMove"
QT_MOC_LITERAL(6, 58, 8), // "downMove"
QT_MOC_LITERAL(7, 67, 8), // "leftMove"
QT_MOC_LITERAL(8, 76, 9), // "rightMove"
QT_MOC_LITERAL(9, 86, 16), // "upMovePixelPanel"
QT_MOC_LITERAL(10, 103, 18), // "downMovePixelPanel"
QT_MOC_LITERAL(11, 122, 18), // "leftMovePixelPanel"
QT_MOC_LITERAL(12, 141, 19) // "rightMovePixelPanel"

    },
    "CaptureWindow\0cancel\0\0copyColorValue\0"
    "changeRgb2Hex\0upMove\0downMove\0leftMove\0"
    "rightMove\0upMovePixelPanel\0"
    "downMovePixelPanel\0leftMovePixelPanel\0"
    "rightMovePixelPanel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureWindow[] = {

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
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    0,   71,    2, 0x09 /* Protected */,
       5,    0,   72,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x09 /* Protected */,
       7,    0,   74,    2, 0x09 /* Protected */,
       8,    0,   75,    2, 0x09 /* Protected */,
       9,    0,   76,    2, 0x09 /* Protected */,
      10,    0,   77,    2, 0x09 /* Protected */,
      11,    0,   78,    2, 0x09 /* Protected */,
      12,    0,   79,    2, 0x09 /* Protected */,

 // slots: parameters
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

void CaptureWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaptureWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->copyColorValue(); break;
        case 2: _t->changeRgb2Hex(); break;
        case 3: _t->upMove(); break;
        case 4: _t->downMove(); break;
        case 5: _t->leftMove(); break;
        case 6: _t->rightMove(); break;
        case 7: _t->upMovePixelPanel(); break;
        case 8: _t->downMovePixelPanel(); break;
        case 9: _t->leftMovePixelPanel(); break;
        case 10: _t->rightMovePixelPanel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CaptureWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CaptureWindow.data,
    qt_meta_data_CaptureWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CaptureWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CaptureWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
