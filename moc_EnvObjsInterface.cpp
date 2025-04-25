/****************************************************************************
** Meta object code from reading C++ file 'EnvObjsInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/EnvObjsInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EnvObjsInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EnvObjsInterface_t {
    QByteArrayData data[18];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnvObjsInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnvObjsInterface_t qt_meta_stringdata_EnvObjsInterface = {
    {
QT_MOC_LITERAL(0, 0, 16), // "EnvObjsInterface"
QT_MOC_LITERAL(1, 17, 4), // "show"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "hide"
QT_MOC_LITERAL(4, 28, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(5, 48, 22), // "afterWaterLevelChanged"
QT_MOC_LITERAL(6, 71, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(7, 94, 7), // "Vector3"
QT_MOC_LITERAL(8, 102, 18), // "mouseWorldPosition"
QT_MOC_LITERAL(9, 121, 10), // "mouseInMap"
QT_MOC_LITERAL(10, 132, 12), // "QMouseEvent*"
QT_MOC_LITERAL(11, 145, 5), // "event"
QT_MOC_LITERAL(12, 151, 13), // "TerrainModel*"
QT_MOC_LITERAL(13, 165, 5), // "model"
QT_MOC_LITERAL(14, 171, 20), // "mouseMovedOnMapEvent"
QT_MOC_LITERAL(15, 192, 23), // "mouseReleasedOnMapEvent"
QT_MOC_LITERAL(16, 216, 13), // "keyPressEvent"
QT_MOC_LITERAL(17, 230, 10) // "QKeyEvent*"

    },
    "EnvObjsInterface\0show\0\0hide\0"
    "afterTerrainUpdated\0afterWaterLevelChanged\0"
    "mouseClickedOnMapEvent\0Vector3\0"
    "mouseWorldPosition\0mouseInMap\0"
    "QMouseEvent*\0event\0TerrainModel*\0model\0"
    "mouseMovedOnMapEvent\0mouseReleasedOnMapEvent\0"
    "keyPressEvent\0QKeyEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnvObjsInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    4,   58,    2, 0x0a /* Public */,
      14,    2,   67,    2, 0x0a /* Public */,
      15,    4,   72,    2, 0x0a /* Public */,
      16,    1,   81,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10, 0x80000000 | 12,    8,    9,   11,   13,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 12,    8,   13,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10, 0x80000000 | 12,    8,    9,   11,   13,
    QMetaType::Void, 0x80000000 | 17,   11,

       0        // eod
};

void EnvObjsInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnvObjsInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->afterTerrainUpdated(); break;
        case 3: _t->afterWaterLevelChanged(); break;
        case 4: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 5: _t->mouseMovedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< TerrainModel*(*)>(_a[2]))); break;
        case 6: _t->mouseReleasedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 7: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EnvObjsInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_EnvObjsInterface.data,
    qt_meta_data_EnvObjsInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EnvObjsInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnvObjsInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EnvObjsInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int EnvObjsInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
