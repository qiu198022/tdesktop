/****************************************************************************
** Meta object code from reading C++ file 'texttool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../tool/texttool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'texttool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextTool_t {
    QByteArrayData data[9];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextTool_t qt_meta_stringdata_TextTool = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TextTool"
QT_MOC_LITERAL(1, 9, 15), // "setCurrentColor"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 36), // "on_combFontFamily_currentText..."
QT_MOC_LITERAL(4, 63, 34), // "on_combFontSize_currentTextCh..."
QT_MOC_LITERAL(5, 98, 22), // "on_btnTextBold_clicked"
QT_MOC_LITERAL(6, 121, 27), // "on_btnTextUnderline_clicked"
QT_MOC_LITERAL(7, 149, 24), // "on_btnTextItalic_clicked"
QT_MOC_LITERAL(8, 174, 27) // "on_btnTextStrikeout_clicked"

    },
    "TextTool\0setCurrentColor\0\0"
    "on_combFontFamily_currentTextChanged\0"
    "on_combFontSize_currentTextChanged\0"
    "on_btnTextBold_clicked\0"
    "on_btnTextUnderline_clicked\0"
    "on_btnTextItalic_clicked\0"
    "on_btnTextStrikeout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    1,   50,    2, 0x09 /* Protected */,
       4,    1,   53,    2, 0x09 /* Protected */,
       5,    0,   56,    2, 0x09 /* Protected */,
       6,    0,   57,    2, 0x09 /* Protected */,
       7,    0,   58,    2, 0x09 /* Protected */,
       8,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TextTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentColor(); break;
        case 1: _t->on_combFontFamily_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_combFontSize_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnTextBold_clicked(); break;
        case 4: _t->on_btnTextUnderline_clicked(); break;
        case 5: _t->on_btnTextItalic_clicked(); break;
        case 6: _t->on_btnTextStrikeout_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextTool::staticMetaObject = { {
    QMetaObject::SuperData::link<BaseTool::staticMetaObject>(),
    qt_meta_stringdata_TextTool.data,
    qt_meta_data_TextTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextTool.stringdata0))
        return static_cast<void*>(this);
    return BaseTool::qt_metacast(_clname);
}

int TextTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
