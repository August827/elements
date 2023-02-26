/****************************************************************************
** Meta object code from reading C++ file 'subassembly.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../subassembly/subassembly.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subassembly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_subassembly_t {
    uint offsetsAndSizes[16];
    char stringdata0[12];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[25];
    char stringdata5[24];
    char stringdata6[29];
    char stringdata7[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_subassembly_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_subassembly_t qt_meta_stringdata_subassembly = {
    {
        QT_MOC_LITERAL(0, 11),  // "subassembly"
        QT_MOC_LITERAL(12, 17),  // "on_Button_Clicked"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 19),  // "on_CheckBox_Clicked"
        QT_MOC_LITERAL(51, 24),  // "on_m_But_Confirm_clicked"
        QT_MOC_LITERAL(76, 23),  // "on_m_But_Cancel_clicked"
        QT_MOC_LITERAL(100, 28),  // "on_CheckBox_All_stateChanged"
        QT_MOC_LITERAL(129, 4)   // "arg1"
    },
    "subassembly",
    "on_Button_Clicked",
    "",
    "on_CheckBox_Clicked",
    "on_m_But_Confirm_clicked",
    "on_m_But_Cancel_clicked",
    "on_CheckBox_All_stateChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_subassembly[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    1,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject subassembly::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_subassembly.offsetsAndSizes,
    qt_meta_data_subassembly,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_subassembly_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<subassembly, std::true_type>,
        // method 'on_Button_Clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CheckBox_Clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_But_Confirm_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_But_Cancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CheckBox_All_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void subassembly::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<subassembly *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_Button_Clicked(); break;
        case 1: _t->on_CheckBox_Clicked(); break;
        case 2: _t->on_m_But_Confirm_clicked(); break;
        case 3: _t->on_m_But_Cancel_clicked(); break;
        case 4: _t->on_CheckBox_All_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *subassembly::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *subassembly::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_subassembly.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int subassembly::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
