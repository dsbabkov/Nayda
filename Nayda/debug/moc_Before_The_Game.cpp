/****************************************************************************
** Meta object code from reading C++ file 'Before_The_Game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Application/Before_The_Game/Before_The_Game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Before_The_Game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Before_The_Game_t {
    QByteArrayData data[4];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Before_The_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Before_The_Game_t qt_meta_stringdata_Before_The_Game = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Before_The_Game"
QT_MOC_LITERAL(1, 16, 23), // "dbg_switch_to_game_mode"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 38) // "dbg_switch_to_game_mode_butto..."

    },
    "Before_The_Game\0dbg_switch_to_game_mode\0"
    "\0dbg_switch_to_game_mode_button_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Before_The_Game[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Before_The_Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Before_The_Game *_t = static_cast<Before_The_Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbg_switch_to_game_mode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->dbg_switch_to_game_mode_button_pressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Before_The_Game::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Before_The_Game::dbg_switch_to_game_mode)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Before_The_Game::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Before_The_Game.data,
      qt_meta_data_Before_The_Game,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Before_The_Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Before_The_Game::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Before_The_Game.stringdata0))
        return static_cast<void*>(const_cast< Before_The_Game*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Before_The_Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Before_The_Game::dbg_switch_to_game_mode(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
