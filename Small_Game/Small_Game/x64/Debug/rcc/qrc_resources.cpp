/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.3.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/Vaio/Documents/PROJECTS/qt/Small_Game/Small_Game/sprite.png
  0x0,0x0,0x0,0xce,
  0x89,
  0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,
  0x0,0x0,0x14,0x0,0x0,0x0,0x14,0x8,0x3,0x0,0x0,0x0,0xba,0x57,0xed,0x3f,
  0x0,0x0,0x0,0x19,0x74,0x45,0x58,0x74,0x53,0x6f,0x66,0x74,0x77,0x61,0x72,0x65,
  0x0,0x41,0x64,0x6f,0x62,0x65,0x20,0x49,0x6d,0x61,0x67,0x65,0x52,0x65,0x61,0x64,
  0x79,0x71,0xc9,0x65,0x3c,0x0,0x0,0x0,0x6,0x50,0x4c,0x54,0x45,0xe5,0x1b,0x20,
  0x0,0x0,0x0,0x54,0xec,0x3a,0x53,0x0,0x0,0x0,0x2,0x74,0x52,0x4e,0x53,0xff,
  0x0,0xe5,0xb7,0x30,0x4a,0x0,0x0,0x0,0x50,0x49,0x44,0x41,0x54,0x78,0xda,0x94,
  0x90,0x51,0xa,0x0,0x20,0x8,0x43,0xe7,0xfd,0x2f,0x1d,0x68,0xba,0x65,0x41,0x25,
  0xf4,0xb1,0xb7,0xd2,0x26,0xec,0x50,0xf8,0x85,0x88,0x52,0x38,0x75,0xf1,0x10,0x74,
  0xc2,0xd,0xe9,0x8a,0xc0,0x8f,0x34,0xdc,0x60,0xbb,0xe9,0x2d,0x9a,0x1,0x4e,0xb9,
  0xc0,0xe4,0xa,0x97,0x4,0xfa,0xcf,0x4c,0x88,0xca,0x4e,0xa,0x13,0x8,0x7d,0x52,
  0x8b,0x41,0x4b,0xf5,0xb6,0xe4,0x21,0xc0,0x0,0xee,0x72,0x1,0x21,0xef,0x33,0x36,
  0xcf,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82,
  
};

static const unsigned char qt_resource_name[] = {
  // images
  0x0,0x6,
  0x7,0x3,0x7d,0xc3,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x73,
    // sprite.png
  0x0,0xa,
  0x0,0xab,0x18,0x67,
  0x0,0x73,
  0x0,0x70,0x0,0x72,0x0,0x69,0x0,0x74,0x0,0x65,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/images
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/images/sprite.png
  0x0,0x0,0x0,0x12,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x81,0xf3,0xc2,0x21,0xf2,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_resources)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_resources)(); }
   } dummy;
}
