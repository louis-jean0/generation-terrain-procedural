/****************************************************************************
** Meta object code from reading C++ file 'TerrainComparatorInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/TerrainComparatorInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainComparatorInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TerrainComparatorInterface_t {
    QByteArrayData data[17];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainComparatorInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainComparatorInterface_t qt_meta_stringdata_TerrainComparatorInterface = {
    {
QT_MOC_LITERAL(0, 0, 26), // "TerrainComparatorInterface"
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
QT_MOC_LITERAL(12, 133, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(13, 153, 22), // "afterWaterLevelChanged"
QT_MOC_LITERAL(14, 176, 11), // "interpolate"
QT_MOC_LITERAL(15, 188, 1), // "t"
QT_MOC_LITERAL(16, 190, 11) // "updateStuff"

    },
    "TerrainComparatorInterface\0hide\0\0show\0"
    "mouseClickedOnMapEvent\0Vector3\0"
    "mousePosInMap\0mouseInMap\0QMouseEvent*\0"
    "event\0TerrainModel*\0model\0afterTerrainUpdated\0"
    "afterWaterLevelChanged\0interpolate\0t\0"
    "updateStuff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainComparatorInterface[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    4,   51,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x0a /* Public */,
      13,    0,   61,    2, 0x0a /* Public */,
      14,    1,   62,    2, 0x0a /* Public */,
      16,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 10,    6,    7,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   15,
    QMetaType::Void,

       0        // eod
};

void TerrainComparatorInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainComparatorInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hide(); break;
        case 1: _t->show(); break;
        case 2: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 3: _t->afterTerrainUpdated(); break;
        case 4: _t->afterWaterLevelChanged(); break;
        case 5: _t->interpolate((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->updateStuff(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainComparatorInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_TerrainComparatorInterface.data,
    qt_meta_data_TerrainComparatorInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainComparatorInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainComparatorInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainComparatorInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int TerrainComparatorInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
