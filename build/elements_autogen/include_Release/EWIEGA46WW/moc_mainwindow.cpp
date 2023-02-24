/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[25];
    char stringdata7[25];
    char stringdata8[24];
    char stringdata9[28];
    char stringdata10[40];
    char stringdata11[6];
    char stringdata12[24];
    char stringdata13[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 25),  // "showOperationDetails_Data"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 11),  // "QModelIndex"
        QT_MOC_LITERAL(50, 7),  // "current"
        QT_MOC_LITERAL(58, 8),  // "previous"
        QT_MOC_LITERAL(67, 24),  // "on_action_Open_triggered"
        QT_MOC_LITERAL(92, 24),  // "on_action_Save_triggered"
        QT_MOC_LITERAL(117, 23),  // "on_action_Ver_triggered"
        QT_MOC_LITERAL(141, 27),  // "on_action_AboutMe_triggered"
        QT_MOC_LITERAL(169, 39),  // "on_m_ComBox_Section_currentIn..."
        QT_MOC_LITERAL(209, 5),  // "index"
        QT_MOC_LITERAL(215, 23),  // "on_m_But_UpPage_clicked"
        QT_MOC_LITERAL(239, 25)   // "on_m_But_NextPage_clicked"
    },
    "MainWindow",
    "showOperationDetails_Data",
    "",
    "QModelIndex",
    "current",
    "previous",
    "on_action_Open_triggered",
    "on_action_Save_triggered",
    "on_action_Ver_triggered",
    "on_action_AboutMe_triggered",
    "on_m_ComBox_Section_currentIndexChanged",
    "index",
    "on_m_But_UpPage_clicked",
    "on_m_But_NextPage_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x08,    1 /* Private */,
       6,    0,   67,    2, 0x08,    4 /* Private */,
       7,    0,   68,    2, 0x08,    5 /* Private */,
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    1,   71,    2, 0x08,    8 /* Private */,
      12,    0,   74,    2, 0x08,   10 /* Private */,
      13,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'showOperationDetails_Data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_action_Open_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Save_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Ver_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_AboutMe_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_ComBox_Section_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_m_But_UpPage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_But_NextPage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showOperationDetails_Data((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 1: _t->on_action_Open_triggered(); break;
        case 2: _t->on_action_Save_triggered(); break;
        case 3: _t->on_action_Ver_triggered(); break;
        case 4: _t->on_action_AboutMe_triggered(); break;
        case 5: _t->on_m_ComBox_Section_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_m_But_UpPage_clicked(); break;
        case 7: _t->on_m_But_NextPage_clicked(); break;
        default: ;
        }
    }
}

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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
