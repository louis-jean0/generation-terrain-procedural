/****************************************************************************
** Meta object code from reading C++ file 'ActionInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/ActionInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ActionInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActionInterface_t {
    QByteArrayData data[19];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionInterface_t qt_meta_stringdata_ActionInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ActionInterface"
QT_MOC_LITERAL(1, 16, 7), // "updated"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "terrainUpdated"
QT_MOC_LITERAL(4, 40, 17), // "waterLevelChanged"
QT_MOC_LITERAL(5, 58, 8), // "newLevel"
QT_MOC_LITERAL(6, 67, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(7, 87, 22), // "afterWaterLevelChanged"
QT_MOC_LITERAL(8, 110, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(9, 133, 7), // "Vector3"
QT_MOC_LITERAL(10, 141, 18), // "mouseWorldPosition"
QT_MOC_LITERAL(11, 160, 10), // "mouseInMap"
QT_MOC_LITERAL(12, 171, 12), // "QMouseEvent*"
QT_MOC_LITERAL(13, 184, 5), // "event"
QT_MOC_LITERAL(14, 190, 13), // "TerrainModel*"
QT_MOC_LITERAL(15, 204, 5), // "model"
QT_MOC_LITERAL(16, 210, 28), // "mouseDoubleClickedOnMapEvent"
QT_MOC_LITERAL(17, 239, 23), // "mouseReleasedOnMapEvent"
QT_MOC_LITERAL(18, 263, 20) // "mouseMovedOnMapEvent"

    },
    "ActionInterface\0updated\0\0terrainUpdated\0"
    "waterLevelChanged\0newLevel\0"
    "afterTerrainUpdated\0afterWaterLevelChanged\0"
    "mouseClickedOnMapEvent\0Vector3\0"
    "mouseWorldPosition\0mouseInMap\0"
    "QMouseEvent*\0event\0TerrainModel*\0model\0"
    "mouseDoubleClickedOnMapEvent\0"
    "mouseReleasedOnMapEvent\0mouseMovedOnMapEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    4,   66,    2, 0x0a /* Public */,
      16,    4,   75,    2, 0x0a /* Public */,
      17,    4,   84,    2, 0x0a /* Public */,
      18,    2,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 14,   10,   11,   13,   15,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 14,   10,   11,   13,   15,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 14,   10,   11,   13,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 14,   10,   15,

       0        // eod
};

void ActionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->terrainUpdated(); break;
        case 2: _t->waterLevelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->afterTerrainUpdated(); break;
        case 4: _t->afterWaterLevelChanged(); break;
        case 5: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 6: _t->mouseDoubleClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 7: _t->mouseReleasedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 8: _t->mouseMovedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< TerrainModel*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActionInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionInterface::updated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActionInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionInterface::terrainUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActionInterface::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionInterface::waterLevelChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActionInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomInteractiveObject::staticMetaObject>(),
    qt_meta_stringdata_ActionInterface.data,
    qt_meta_data_ActionInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActionInterface.stringdata0))
        return static_cast<void*>(this);
    return CustomInteractiveObject::qt_metacast(_clname);
}

int ActionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomInteractiveObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void ActionInterface::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActionInterface::terrainUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ActionInterface::waterLevelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
