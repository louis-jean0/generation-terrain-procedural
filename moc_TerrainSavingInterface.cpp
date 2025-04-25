/****************************************************************************
** Meta object code from reading C++ file 'TerrainSavingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/TerrainSavingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainSavingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TerrainSavingInterface_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainSavingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainSavingInterface_t qt_meta_stringdata_TerrainSavingInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TerrainSavingInterface"
QT_MOC_LITERAL(1, 23, 19), // "saveTerrainGeometry"
QT_MOC_LITERAL(2, 43, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(3, 68, 0), // ""
QT_MOC_LITERAL(4, 69, 11), // "std::string"
QT_MOC_LITERAL(5, 81, 8), // "filename"
QT_MOC_LITERAL(6, 90, 11), // "quickSaveAt"
QT_MOC_LITERAL(7, 102, 10), // "folderName"
QT_MOC_LITERAL(8, 113, 10), // "filePrefix"
QT_MOC_LITERAL(9, 124, 9), // "heightmap"
QT_MOC_LITERAL(10, 134, 6), // "voxels"
QT_MOC_LITERAL(11, 141, 6) // "layers"

    },
    "TerrainSavingInterface\0saveTerrainGeometry\0"
    "std::vector<std::string>\0\0std::string\0"
    "filename\0quickSaveAt\0folderName\0"
    "filePrefix\0heightmap\0voxels\0layers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainSavingInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       1,    0,   32,    3, 0x2a /* Public | MethodCloned */,
       6,    5,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    7,    8,    9,   10,   11,

       0        // eod
};

void TerrainSavingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainSavingInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { std::vector<std::string> _r = _t->saveTerrainGeometry((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::vector<std::string>*>(_a[0]) = std::move(_r); }  break;
        case 1: { std::vector<std::string> _r = _t->saveTerrainGeometry();
            if (_a[0]) *reinterpret_cast< std::vector<std::string>*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->quickSaveAt((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainSavingInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_TerrainSavingInterface.data,
    qt_meta_data_TerrainSavingInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainSavingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainSavingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainSavingInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int TerrainSavingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
