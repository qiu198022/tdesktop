/****************************************************************************
** Meta object code from reading C++ file 'toolwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../widget/toolwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolWidget_t {
    QByteArrayData data[15];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolWidget_t qt_meta_stringdata_ToolWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ToolWidget"
QT_MOC_LITERAL(1, 11, 23), // "on_btnSave2File_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 27), // "on_btnCopyClipboard_clicked"
QT_MOC_LITERAL(4, 64, 20), // "on_btnCancel_clicked"
QT_MOC_LITERAL(5, 85, 19), // "on_btnShape_clicked"
QT_MOC_LITERAL(6, 105, 17), // "on_btnPen_clicked"
QT_MOC_LITERAL(7, 123, 19), // "on_btnArrow_clicked"
QT_MOC_LITERAL(8, 143, 18), // "on_btnText_clicked"
QT_MOC_LITERAL(9, 162, 19), // "on_btnErase_clicked"
QT_MOC_LITERAL(10, 182, 18), // "on_btnUndo_clicked"
QT_MOC_LITERAL(11, 201, 18), // "on_btnRedo_clicked"
QT_MOC_LITERAL(12, 220, 18), // "on_btnBlur_clicked"
QT_MOC_LITERAL(13, 239, 19), // "on_btnBrush_clicked"
QT_MOC_LITERAL(14, 259, 17) // "on_btnPin_clicked"

    },
    "ToolWidget\0on_btnSave2File_clicked\0\0"
    "on_btnCopyClipboard_clicked\0"
    "on_btnCancel_clicked\0on_btnShape_clicked\0"
    "on_btnPen_clicked\0on_btnArrow_clicked\0"
    "on_btnText_clicked\0on_btnErase_clicked\0"
    "on_btnUndo_clicked\0on_btnRedo_clicked\0"
    "on_btnBlur_clicked\0on_btnBrush_clicked\0"
    "on_btnPin_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x09 /* Protected */,
       3,    0,   80,    2, 0x09 /* Protected */,
       4,    0,   81,    2, 0x09 /* Protected */,
       5,    0,   82,    2, 0x09 /* Protected */,
       6,    0,   83,    2, 0x09 /* Protected */,
       7,    0,   84,    2, 0x09 /* Protected */,
       8,    0,   85,    2, 0x09 /* Protected */,
       9,    0,   86,    2, 0x09 /* Protected */,
      10,    0,   87,    2, 0x09 /* Protected */,
      11,    0,   88,    2, 0x09 /* Protected */,
      12,    0,   89,    2, 0x09 /* Protected */,
      13,    0,   90,    2, 0x09 /* Protected */,
      14,    0,   91,    2, 0x09 /* Protected */,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ToolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToolWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSave2File_clicked(); break;
        case 1: _t->on_btnCopyClipboard_clicked(); break;
        case 2: _t->on_btnCancel_clicked(); break;
        case 3: _t->on_btnShape_clicked(); break;
        case 4: _t->on_btnPen_clicked(); break;
        case 5: _t->on_btnArrow_clicked(); break;
        case 6: _t->on_btnText_clicked(); break;
        case 7: _t->on_btnErase_clicked(); break;
        case 8: _t->on_btnUndo_clicked(); break;
        case 9: _t->on_btnRedo_clicked(); break;
        case 10: _t->on_btnBlur_clicked(); break;
        case 11: _t->on_btnBrush_clicked(); break;
        case 12: _t->on_btnPin_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToolWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseTool::staticMetaObject>(),
    qt_meta_stringdata_ToolWidget.data,
    qt_meta_data_ToolWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToolWidget.stringdata0))
        return static_cast<void*>(this);
    return BaseTool::qt_metacast(_clname);
}

int ToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTool::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
