/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(4, 56, 26), // "on_setFolderButton_clicked"
QT_MOC_LITERAL(5, 83, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(6, 115, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 132, 4), // "item"
QT_MOC_LITERAL(8, 137, 29), // "on_positionSlider_sliderMoved"
QT_MOC_LITERAL(9, 167, 8), // "position"
QT_MOC_LITERAL(10, 176, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(11, 204, 24), // "on_refreshButton_clicked"
QT_MOC_LITERAL(12, 229, 24), // "on_ShuffleButton_toggled"
QT_MOC_LITERAL(13, 254, 7), // "checked"
QT_MOC_LITERAL(14, 262, 23), // "on_RepeatButton_toggled"
QT_MOC_LITERAL(15, 286, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(16, 308, 21), // "on_PrevButton_clicked"
QT_MOC_LITERAL(17, 330, 19), // "onCurrentRowChanged"
QT_MOC_LITERAL(18, 350, 10) // "currentRow"

    },
    "MainWindow\0on_playButton_clicked\0\0"
    "on_stopButton_clicked\0on_setFolderButton_clicked\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_positionSlider_sliderMoved\0position\0"
    "on_actionSettings_triggered\0"
    "on_refreshButton_clicked\0"
    "on_ShuffleButton_toggled\0checked\0"
    "on_RepeatButton_toggled\0on_NextButton_clicked\0"
    "on_PrevButton_clicked\0onCurrentRowChanged\0"
    "currentRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,
      16,    0,   92,    2, 0x08 /* Private */,
      17,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_playButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_setFolderButton_clicked(); break;
        case 3: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->on_positionSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_actionSettings_triggered(); break;
        case 6: _t->on_refreshButton_clicked(); break;
        case 7: _t->on_ShuffleButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_RepeatButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_NextButton_clicked(); break;
        case 10: _t->on_PrevButton_clicked(); break;
        case 11: _t->onCurrentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
