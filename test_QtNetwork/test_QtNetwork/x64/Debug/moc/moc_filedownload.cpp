/****************************************************************************
** Meta object code from reading C++ file 'filedownload.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../filedownload.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileDownload_t {
    const uint offsetsAndSize[22];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FileDownload_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FileDownload_t qt_meta_stringdata_FileDownload = {
    {
QT_MOC_LITERAL(0, 12), // "FileDownload"
QT_MOC_LITERAL(13, 16), // "downloadFinished"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 14), // "QNetworkReply*"
QT_MOC_LITERAL(46, 5), // "reply"
QT_MOC_LITERAL(52, 26), // "startDownloadButtonClicked"
QT_MOC_LITERAL(79, 13), // "finishedImage"
QT_MOC_LITERAL(93, 11), // "replyObject"
QT_MOC_LITERAL(105, 11), // "downloadBar"
QT_MOC_LITERAL(117, 13), // "bytesReceived"
QT_MOC_LITERAL(131, 10) // "bytesTotal"

    },
    "FileDownload\0downloadFinished\0\0"
    "QNetworkReply*\0reply\0startDownloadButtonClicked\0"
    "finishedImage\0replyObject\0downloadBar\0"
    "bytesReceived\0bytesTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDownload[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    0,   41,    2, 0x0a,    3 /* Public */,
       6,    1,   42,    2, 0x0a,    4 /* Public */,
       8,    2,   45,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    9,   10,

       0        // eod
};

void FileDownload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDownload *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->downloadFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 1: _t->startDownloadButtonClicked(); break;
        case 2: _t->finishedImage((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 3: _t->downloadBar((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject FileDownload::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FileDownload.offsetsAndSize,
    qt_meta_data_FileDownload,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FileDownload_t
, QtPrivate::TypeAndForceComplete<FileDownload, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<quint64, std::false_type>, QtPrivate::TypeAndForceComplete<quint64, std::false_type>


>,
    nullptr
} };


const QMetaObject *FileDownload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDownload::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDownload.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileDownload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
