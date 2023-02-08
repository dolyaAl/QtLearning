/****************************************************************************
** Meta object code from reading C++ file 'playerinfowriter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../playerinfowriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerinfowriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerInfoWriter_t {
    const uint offsetsAndSize[22];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_PlayerInfoWriter_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_PlayerInfoWriter_t qt_meta_stringdata_PlayerInfoWriter = {
    {
QT_MOC_LITERAL(0, 16), // "PlayerInfoWriter"
QT_MOC_LITERAL(17, 5), // "Token"
QT_MOC_LITERAL(23, 7), // "Invalid"
QT_MOC_LITERAL(31, 10), // "PlayerInfo"
QT_MOC_LITERAL(42, 6), // "Player"
QT_MOC_LITERAL(49, 4), // "Name"
QT_MOC_LITERAL(54, 8), // "Password"
QT_MOC_LITERAL(63, 9), // "Inventory"
QT_MOC_LITERAL(73, 8), // "Location"
QT_MOC_LITERAL(82, 8), // "Position"
QT_MOC_LITERAL(91, 7) // "InvItem"

    },
    "PlayerInfoWriter\0Token\0Invalid\0"
    "PlayerInfo\0Player\0Name\0Password\0"
    "Inventory\0Location\0Position\0InvItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerInfoWriter[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    9,   19,

 // enum data: key, value
       2, uint(PlayerInfoWriter::Token::Invalid),
       3, uint(PlayerInfoWriter::Token::PlayerInfo),
       4, uint(PlayerInfoWriter::Token::Player),
       5, uint(PlayerInfoWriter::Token::Name),
       6, uint(PlayerInfoWriter::Token::Password),
       7, uint(PlayerInfoWriter::Token::Inventory),
       8, uint(PlayerInfoWriter::Token::Location),
       9, uint(PlayerInfoWriter::Token::Position),
      10, uint(PlayerInfoWriter::Token::InvItem),

       0        // eod
};

const QMetaObject PlayerInfoWriter::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_PlayerInfoWriter.offsetsAndSize,
    qt_meta_data_PlayerInfoWriter,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_PlayerInfoWriter_t
, QtPrivate::TypeAndForceComplete<PlayerInfoWriter, std::true_type>



>,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
