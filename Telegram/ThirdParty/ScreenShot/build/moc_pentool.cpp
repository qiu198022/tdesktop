/****************************************************************************
** Meta object code from reading C++ file 'pentool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../tool/pentool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pentool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PenTool_t {
    QByteArrayData data[7];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PenTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PenTool_t qt_meta_stringdata_PenTool = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PenTool"
QT_MOC_LITERAL(1, 8, 19), // "on_btnPoint_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_btnLine_clicked"
QT_MOC_LITERAL(4, 48, 22), // "on_btnDashLine_clicked"
QT_MOC_LITERAL(5, 71, 19), // "on_btnCurve_clicked"
QT_MOC_LITERAL(6, 91, 33) // "on_combPenSize_currentTextCha..."

    },
    "PenTool\0on_btnPoint_clicked\0\0"
    "on_btnLine_clicked\0on_btnDashLine_clicked\0"
    "on_btnCurve_clicked\0"
    "on_combPenSize_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PenTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PenTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PenTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnPoint_clicked(); break;
        case 1: _t->on_btnLine_clicked(); break;
        case 2: _t->on_btnDashLine_clicked(); break;
        case 3: _t->on_btnCurve_clicked(); break;
        case 4: _t->on_combPenSize_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PenTool::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseTool::staticMetaObject>(),
    qt_meta_stringdata_PenTool.data,
    qt_meta_data_PenTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PenTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PenTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PenTool.stringdata0))
        return static_cast<void*>(this);
    return BaseTool::qt_metacast(_clname);
}

int PenTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
