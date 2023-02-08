/****************************************************************************
** Meta object code from reading C++ file 'inventoryitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../inventoryitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inventoryitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InventoryItem_t {
    const uint offsetsAndSize[14];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_InventoryItem_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_InventoryItem_t qt_meta_stringdata_InventoryItem = {
    {
QT_MOC_LITERAL(0, 13), // "InventoryItem"
QT_MOC_LITERAL(14, 4), // "Type"
QT_MOC_LITERAL(19, 6), // "Weapon"
QT_MOC_LITERAL(26, 5), // "Armor"
QT_MOC_LITERAL(32, 3), // "Gem"
QT_MOC_LITERAL(36, 4), // "Book"
QT_MOC_LITERAL(41, 5) // "Other"

    },
    "InventoryItem\0Type\0Weapon\0Armor\0Gem\0"
    "Book\0Other"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InventoryItem[] = {

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
       1,    1, 0x2,    5,   19,

 // enum data: key, value
       2, uint(InventoryItem::Type::Weapon),
       3, uint(InventoryItem::Type::Armor),
       4, uint(InventoryItem::Type::Gem),
       5, uint(InventoryItem::Type::Book),
       6, uint(InventoryItem::Type::Other),

       0        // eod
};

const QMetaObject InventoryItem::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_InventoryItem.offsetsAndSize,
    qt_meta_data_InventoryItem,
    nullptr,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_InventoryItem_t
, QtPrivate::TypeAndForceComplete<InventoryItem, std::true_type>



>,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
