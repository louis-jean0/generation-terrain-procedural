/****************************************************************************
** Meta object code from reading C++ file 'SpheroidalErosionInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/SpheroidalErosionInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SpheroidalErosionInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpheroidalErosionInterface_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpheroidalErosionInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpheroidalErosionInterface_t qt_meta_stringdata_SpheroidalErosionInterface = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SpheroidalErosionInterface"
QT_MOC_LITERAL(1, 27, 4), // "hide"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "show"
QT_MOC_LITERAL(4, 38, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(5, 61, 7), // "Vector3"
QT_MOC_LITERAL(6, 69, 13), // "mousePosInMap"
QT_MOC_LITERAL(7, 83, 10), // "mouseInMap"
QT_MOC_LITERAL(8, 94, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 107, 5), // "event"
QT_MOC_LITERAL(10, 113, 13), // "TerrainModel*"
QT_MOC_LITERAL(11, 127, 5), // "model"
QT_MOC_LITERAL(12, 133, 22), // "applyWeatheringErosion"
QT_MOC_LITERAL(13, 156, 19) // "afterTerrainUpdated"

    },
    "SpheroidalErosionInterface\0hide\0\0show\0"
    "mouseClickedOnMapEvent\0Vector3\0"
    "mousePosInMap\0mouseInMap\0QMouseEvent*\0"
    "event\0TerrainModel*\0model\0"
    "applyWeatheringErosion\0afterTerrainUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpheroidalErosionInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    4,   41,    2, 0x0a /* Public */,
      12,    0,   50,    2, 0x0a /* Public */,
      13,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10,    6,    7,    9,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpheroidalErosionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpheroidalErosionInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->show(); break;
        case 2: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 3: _t->applyWeatheringErosion(); break;
        case 4: _t->afterTerrainUpdated(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpheroidalErosionInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_SpheroidalErosionInterface.data,
    qt_meta_data_SpheroidalErosionInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpheroidalErosionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpheroidalErosionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpheroidalErosionInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int SpheroidalErosionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
