/****************************************************************************
** Meta object code from reading C++ file 'MeshInstanceAmplificationInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/MeshInstanceAmplificationInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MeshInstanceAmplificationInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeshInstanceAmplificationInterface_t {
    QByteArrayData data[14];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshInstanceAmplificationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshInstanceAmplificationInterface_t qt_meta_stringdata_MeshInstanceAmplificationInterface = {
    {
QT_MOC_LITERAL(0, 0, 34), // "MeshInstanceAmplificationInte..."
QT_MOC_LITERAL(1, 35, 18), // "setCoralsDisplayed"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 7), // "display"
QT_MOC_LITERAL(4, 63, 17), // "setRocksDisplayed"
QT_MOC_LITERAL(5, 81, 17), // "setDisplayingType"
QT_MOC_LITERAL(6, 99, 24), // "InstantiationMeshOption&"
QT_MOC_LITERAL(7, 124, 7), // "options"
QT_MOC_LITERAL(8, 132, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(9, 152, 24), // "regenerateRocksPositions"
QT_MOC_LITERAL(10, 177, 26), // "regenerateAllTypePositions"
QT_MOC_LITERAL(11, 204, 14), // "exportJSONFile"
QT_MOC_LITERAL(12, 219, 11), // "std::string"
QT_MOC_LITERAL(13, 231, 8) // "filename"

    },
    "MeshInstanceAmplificationInterface\0"
    "setCoralsDisplayed\0\0display\0"
    "setRocksDisplayed\0setDisplayingType\0"
    "InstantiationMeshOption&\0options\0"
    "afterTerrainUpdated\0regenerateRocksPositions\0"
    "regenerateAllTypePositions\0exportJSONFile\0"
    "std::string\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshInstanceAmplificationInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       5,    2,   55,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool,    7,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void MeshInstanceAmplificationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeshInstanceAmplificationInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCoralsDisplayed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setRocksDisplayed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setDisplayingType((*reinterpret_cast< InstantiationMeshOption(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->afterTerrainUpdated(); break;
        case 4: _t->regenerateRocksPositions(); break;
        case 5: _t->regenerateAllTypePositions(); break;
        case 6: _t->exportJSONFile((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MeshInstanceAmplificationInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_MeshInstanceAmplificationInterface.data,
    qt_meta_data_MeshInstanceAmplificationInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshInstanceAmplificationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshInstanceAmplificationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshInstanceAmplificationInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int MeshInstanceAmplificationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
