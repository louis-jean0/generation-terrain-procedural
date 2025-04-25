/****************************************************************************
** Meta object code from reading C++ file 'CoralIslandGeneratorInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/CoralIslandGeneratorInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoralIslandGeneratorInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoralIslandGeneratorInterface_t {
    QByteArrayData data[24];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoralIslandGeneratorInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoralIslandGeneratorInterface_t qt_meta_stringdata_CoralIslandGeneratorInterface = {
    {
QT_MOC_LITERAL(0, 0, 29), // "CoralIslandGeneratorInterface"
QT_MOC_LITERAL(1, 30, 4), // "hide"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "show"
QT_MOC_LITERAL(4, 41, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(5, 64, 7), // "Vector3"
QT_MOC_LITERAL(6, 72, 13), // "mousePosInMap"
QT_MOC_LITERAL(7, 86, 10), // "mouseInMap"
QT_MOC_LITERAL(8, 97, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 110, 5), // "event"
QT_MOC_LITERAL(10, 116, 13), // "TerrainModel*"
QT_MOC_LITERAL(11, 130, 5), // "model"
QT_MOC_LITERAL(12, 136, 13), // "setSubsidence"
QT_MOC_LITERAL(13, 150, 6), // "newVal"
QT_MOC_LITERAL(14, 157, 16), // "setCoralLevelMin"
QT_MOC_LITERAL(15, 174, 16), // "setCoralLevelMax"
QT_MOC_LITERAL(16, 191, 9), // "setVScale"
QT_MOC_LITERAL(17, 201, 9), // "setHScale"
QT_MOC_LITERAL(18, 211, 8), // "setAlpha"
QT_MOC_LITERAL(19, 220, 21), // "validateTerrainChange"
QT_MOC_LITERAL(20, 242, 11), // "updateCoral"
QT_MOC_LITERAL(21, 254, 9), // "fromGanUI"
QT_MOC_LITERAL(22, 264, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(23, 284, 22) // "afterWaterLevelChanged"

    },
    "CoralIslandGeneratorInterface\0hide\0\0"
    "show\0mouseClickedOnMapEvent\0Vector3\0"
    "mousePosInMap\0mouseInMap\0QMouseEvent*\0"
    "event\0TerrainModel*\0model\0setSubsidence\0"
    "newVal\0setCoralLevelMin\0setCoralLevelMax\0"
    "setVScale\0setHScale\0setAlpha\0"
    "validateTerrainChange\0updateCoral\0"
    "fromGanUI\0afterTerrainUpdated\0"
    "afterWaterLevelChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoralIslandGeneratorInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    4,   86,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      16,    1,  104,    2, 0x0a /* Public */,
      17,    1,  107,    2, 0x0a /* Public */,
      18,    1,  110,    2, 0x0a /* Public */,
      19,    0,  113,    2, 0x0a /* Public */,
      20,    0,  114,    2, 0x0a /* Public */,
      21,    0,  115,    2, 0x0a /* Public */,
      22,    0,  116,    2, 0x0a /* Public */,
      23,    0,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10,    6,    7,    9,   11,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoralIslandGeneratorInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoralIslandGeneratorInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->show(); break;
        case 2: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 3: _t->setSubsidence((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setCoralLevelMin((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setCoralLevelMax((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setVScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->setHScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setAlpha((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->validateTerrainChange(); break;
        case 10: _t->updateCoral(); break;
        case 11: _t->fromGanUI(); break;
        case 12: _t->afterTerrainUpdated(); break;
        case 13: _t->afterWaterLevelChanged(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CoralIslandGeneratorInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_CoralIslandGeneratorInterface.data,
    qt_meta_data_CoralIslandGeneratorInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoralIslandGeneratorInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoralIslandGeneratorInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoralIslandGeneratorInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int CoralIslandGeneratorInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
