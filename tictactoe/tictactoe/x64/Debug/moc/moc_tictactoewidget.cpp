/****************************************************************************
** Meta object code from reading C++ file 'tictactoewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../tictactoewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TicTacToeWidget_t {
    const uint offsetsAndSize[22];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TicTacToeWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TicTacToeWidget_t qt_meta_stringdata_TicTacToeWidget = {
    {
QT_MOC_LITERAL(0, 15), // "TicTacToeWidget"
QT_MOC_LITERAL(16, 20), // "currentPlayerChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 6), // "Player"
QT_MOC_LITERAL(45, 8), // "gameOver"
QT_MOC_LITERAL(54, 17), // "handleButtonClick"
QT_MOC_LITERAL(72, 5), // "index"
QT_MOC_LITERAL(78, 7), // "Invalid"
QT_MOC_LITERAL(86, 7), // "Player1"
QT_MOC_LITERAL(94, 7), // "Player2"
QT_MOC_LITERAL(102, 4) // "Draw"

    },
    "TicTacToeWidget\0currentPlayerChanged\0"
    "\0Player\0gameOver\0handleButtonClick\0"
    "index\0Invalid\0Player1\0Player2\0Draw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TicTacToeWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   38,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,

 // enums: name, alias, flags, count, data
       3,    3, 0x2,    4,   46,

 // enum data: key, value
       7, uint(TicTacToeWidget::Player::Invalid),
       8, uint(TicTacToeWidget::Player::Player1),
       9, uint(TicTacToeWidget::Player::Player2),
      10, uint(TicTacToeWidget::Player::Draw),

       0        // eod
};

void TicTacToeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TicTacToeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentPlayerChanged((*reinterpret_cast< std::add_pointer_t<Player>>(_a[1]))); break;
        case 1: _t->gameOver((*reinterpret_cast< std::add_pointer_t<Player>>(_a[1]))); break;
        case 2: _t->handleButtonClick((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TicTacToeWidget::*)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TicTacToeWidget::currentPlayerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TicTacToeWidget::*)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TicTacToeWidget::gameOver)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TicTacToeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TicTacToeWidget.offsetsAndSize,
    qt_meta_data_TicTacToeWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TicTacToeWidget_t
, QtPrivate::TypeAndForceComplete<TicTacToeWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Player, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Player, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *TicTacToeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TicTacToeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TicTacToeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TicTacToeWidget::currentPlayerChanged(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TicTacToeWidget::gameOver(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
