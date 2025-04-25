/****************************************************************************
** Meta object code from reading C++ file 'ManualEditionInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/ManualEditionInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManualEditionInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ManualEditionInterface_t {
    QByteArrayData data[23];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ManualEditionInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ManualEditionInterface_t qt_meta_stringdata_ManualEditionInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ManualEditionInterface"
QT_MOC_LITERAL(1, 23, 4), // "show"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 4), // "hide"
QT_MOC_LITERAL(4, 34, 7), // "setSize"
QT_MOC_LITERAL(5, 42, 4), // "size"
QT_MOC_LITERAL(6, 47, 11), // "setStrength"
QT_MOC_LITERAL(7, 59, 8), // "strength"
QT_MOC_LITERAL(8, 68, 13), // "setAddingMode"
QT_MOC_LITERAL(9, 82, 7), // "newMode"
QT_MOC_LITERAL(10, 90, 11), // "setPosition"
QT_MOC_LITERAL(11, 102, 7), // "Vector3"
QT_MOC_LITERAL(12, 110, 11), // "newPosition"
QT_MOC_LITERAL(13, 122, 17), // "applyModification"
QT_MOC_LITERAL(14, 140, 20), // "mouseMovedOnMapEvent"
QT_MOC_LITERAL(15, 161, 18), // "mouseWorldPosition"
QT_MOC_LITERAL(16, 180, 13), // "TerrainModel*"
QT_MOC_LITERAL(17, 194, 5), // "model"
QT_MOC_LITERAL(18, 200, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(19, 223, 13), // "mousePosInMap"
QT_MOC_LITERAL(20, 237, 10), // "mouseInMap"
QT_MOC_LITERAL(21, 248, 12), // "QMouseEvent*"
QT_MOC_LITERAL(22, 261, 5) // "event"

    },
    "ManualEditionInterface\0show\0\0hide\0"
    "setSize\0size\0setStrength\0strength\0"
    "setAddingMode\0newMode\0setPosition\0"
    "Vector3\0newPosition\0applyModification\0"
    "mouseMovedOnMapEvent\0mouseWorldPosition\0"
    "TerrainModel*\0model\0mouseClickedOnMapEvent\0"
    "mousePosInMap\0mouseInMap\0QMouseEvent*\0"
    "event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ManualEditionInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    1,   61,    2, 0x0a /* Public */,
       6,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,
      10,    1,   70,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x0a /* Public */,
      14,    2,   74,    2, 0x0a /* Public */,
      18,    4,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool, 0x80000000 | 21, 0x80000000 | 16,   19,   20,   22,   17,

       0        // eod
};

void ManualEditionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManualEditionInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->setSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setStrength((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setAddingMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setPosition((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 6: _t->applyModification(); break;
        case 7: _t->mouseMovedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< TerrainModel*(*)>(_a[2]))); break;
        case 8: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ManualEditionInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_ManualEditionInterface.data,
    qt_meta_data_ManualEditionInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ManualEditionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualEditionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManualEditionInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int ManualEditionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
