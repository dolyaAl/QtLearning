/****************************************************************************
** Meta object code from reading C++ file 'chessalgorithm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../chessalgorithm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chessalgorithm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChessAlgorithm_t {
    const uint offsetsAndSize[50];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ChessAlgorithm_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ChessAlgorithm_t qt_meta_stringdata_ChessAlgorithm = {
    {
QT_MOC_LITERAL(0, 14), // "ChessAlgorithm"
QT_MOC_LITERAL(15, 12), // "boardChanged"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 11), // "ChessBoard*"
QT_MOC_LITERAL(41, 8), // "gameOver"
QT_MOC_LITERAL(50, 6), // "Result"
QT_MOC_LITERAL(57, 20), // "currentPlayerChanged"
QT_MOC_LITERAL(78, 6), // "Player"
QT_MOC_LITERAL(85, 7), // "newGame"
QT_MOC_LITERAL(93, 4), // "move"
QT_MOC_LITERAL(98, 5), // "fromR"
QT_MOC_LITERAL(104, 5), // "fromC"
QT_MOC_LITERAL(110, 3), // "toR"
QT_MOC_LITERAL(114, 3), // "toC"
QT_MOC_LITERAL(118, 4), // "from"
QT_MOC_LITERAL(123, 2), // "to"
QT_MOC_LITERAL(126, 6), // "result"
QT_MOC_LITERAL(133, 13), // "currentPlayer"
QT_MOC_LITERAL(147, 8), // "NoResult"
QT_MOC_LITERAL(156, 11), // "Player1Wins"
QT_MOC_LITERAL(168, 4), // "Draw"
QT_MOC_LITERAL(173, 11), // "Player2Wins"
QT_MOC_LITERAL(185, 8), // "NoPlayer"
QT_MOC_LITERAL(194, 7), // "Player1"
QT_MOC_LITERAL(202, 7) // "Player2"

    },
    "ChessAlgorithm\0boardChanged\0\0ChessBoard*\0"
    "gameOver\0Result\0currentPlayerChanged\0"
    "Player\0newGame\0move\0fromR\0fromC\0toR\0"
    "toC\0from\0to\0result\0currentPlayer\0"
    "NoResult\0Player1Wins\0Draw\0Player2Wins\0"
    "NoPlayer\0Player1\0Player2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChessAlgorithm[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   74, // properties
       2,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    3 /* Public */,
       4,    1,   53,    2, 0x06,    5 /* Public */,
       6,    1,   56,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   59,    2, 0x0a,    9 /* Public */,
       9,    4,   60,    2, 0x0a,   10 /* Public */,
       9,    2,   69,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,   13,
    QMetaType::Bool, QMetaType::QPoint, QMetaType::QPoint,   14,   15,

 // properties: name, type, flags
      16, 0x80000000 | 5, 0x00015009, uint(-1), 0,
      17, 0x80000000 | 7, 0x00015009, uint(2), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    4,   94,
       7,    7, 0x0,    3,  102,

 // enum data: key, value
      18, uint(ChessAlgorithm::NoResult),
      19, uint(ChessAlgorithm::Player1Wins),
      20, uint(ChessAlgorithm::Draw),
      21, uint(ChessAlgorithm::Player2Wins),
      22, uint(ChessAlgorithm::NoPlayer),
      23, uint(ChessAlgorithm::Player1),
      24, uint(ChessAlgorithm::Player2),

       0        // eod
};

void ChessAlgorithm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChessAlgorithm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->boardChanged((*reinterpret_cast< std::add_pointer_t<ChessBoard*>>(_a[1]))); break;
        case 1: _t->gameOver((*reinterpret_cast< std::add_pointer_t<Result>>(_a[1]))); break;
        case 2: _t->currentPlayerChanged((*reinterpret_cast< std::add_pointer_t<Player>>(_a[1]))); break;
        case 3: _t->newGame(); break;
        case 4: { bool _r = _t->move((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->move((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ChessBoard* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChessAlgorithm::*)(ChessBoard * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessAlgorithm::boardChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChessAlgorithm::*)(Result );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessAlgorithm::gameOver)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChessAlgorithm::*)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessAlgorithm::currentPlayerChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ChessAlgorithm *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Result*>(_v) = _t->result(); break;
        case 1: *reinterpret_cast< Player*>(_v) = _t->currentPlayer(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ChessAlgorithm::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ChessAlgorithm.offsetsAndSize,
    qt_meta_data_ChessAlgorithm,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChessAlgorithm_t
, QtPrivate::TypeAndForceComplete<Result, std::true_type>, QtPrivate::TypeAndForceComplete<Player, std::true_type>, QtPrivate::TypeAndForceComplete<ChessAlgorithm, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ChessBoard *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Result, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Player, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChessAlgorithm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChessAlgorithm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChessAlgorithm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChessAlgorithm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChessAlgorithm::boardChanged(ChessBoard * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChessAlgorithm::gameOver(Result _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChessAlgorithm::currentPlayerChanged(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
