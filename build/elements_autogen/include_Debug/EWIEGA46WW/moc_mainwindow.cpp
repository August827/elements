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
    char stringdata1[48];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[26];
    char stringdata5[12];
    char stringdata6[8];
    char stringdata7[9];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[24];
    char stringdata11[28];
    char stringdata12[24];
    char stringdata13[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 47),  // "on_m_ComBox_HugeSectionName_c..."
        QT_MOC_LITERAL(59, 0),  // ""
        QT_MOC_LITERAL(60, 5),  // "index"
        QT_MOC_LITERAL(66, 25),  // "showOperationDetails_Data"
        QT_MOC_LITERAL(92, 11),  // "QModelIndex"
        QT_MOC_LITERAL(104, 7),  // "current"
        QT_MOC_LITERAL(112, 8),  // "previous"
        QT_MOC_LITERAL(121, 24),  // "on_action_Open_triggered"
        QT_MOC_LITERAL(146, 24),  // "on_action_Save_triggered"
        QT_MOC_LITERAL(171, 23),  // "on_action_Ver_triggered"
        QT_MOC_LITERAL(195, 27),  // "on_action_AboutMe_triggered"
        QT_MOC_LITERAL(223, 23),  // "on_m_But_UpPage_clicked"
        QT_MOC_LITERAL(247, 25)   // "on_m_But_NextPage_clicked"
    },
    "MainWindow",
    "on_m_ComBox_HugeSectionName_currentIndexChanged",
    "",
    "index",
    "showOperationDetails_Data",
    "QModelIndex",
    "current",
    "previous",
    "on_action_Open_triggered",
    "on_action_Save_triggered",
    "on_action_Ver_triggered",
    "on_action_AboutMe_triggered",
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
       1,    1,   62,    2, 0x08,    1 /* Private */,
       4,    2,   65,    2, 0x08,    3 /* Private */,
       8,    0,   70,    2, 0x08,    6 /* Private */,
       9,    0,   71,    2, 0x08,    7 /* Private */,
      10,    0,   72,    2, 0x08,    8 /* Private */,
      11,    0,   73,    2, 0x08,    9 /* Private */,
      12,    0,   74,    2, 0x08,   10 /* Private */,
      13,    0,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        // method 'on_m_ComBox_HugeSectionName_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
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
        case 0: _t->on_m_ComBox_HugeSectionName_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->showOperationDetails_Data((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->on_action_Open_triggered(); break;
        case 3: _t->on_action_Save_triggered(); break;
        case 4: _t->on_action_Ver_triggered(); break;
        case 5: _t->on_action_AboutMe_triggered(); break;
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
