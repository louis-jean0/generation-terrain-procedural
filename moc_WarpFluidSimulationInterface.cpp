/****************************************************************************
** Meta object code from reading C++ file 'WarpFluidSimulationInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/WarpFluidSimulationInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WarpFluidSimulationInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WarpFluidSimulationInterface_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WarpFluidSimulationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WarpFluidSimulationInterface_t qt_meta_stringdata_WarpFluidSimulationInterface = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WarpFluidSimulationInterface"
QT_MOC_LITERAL(1, 29, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(2, 49, 0) // ""

    },
    "WarpFluidSimulationInterface\0"
    "afterTerrainUpdated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WarpFluidSimulationInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WarpFluidSimulationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WarpFluidSimulationInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->afterTerrainUpdated(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WarpFluidSimulationInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractFluidSimulationInterface::staticMetaObject>(),
    qt_meta_stringdata_WarpFluidSimulationInterface.data,
    qt_meta_data_WarpFluidSimulationInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WarpFluidSimulationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WarpFluidSimulationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WarpFluidSimulationInterface.stringdata0))
        return static_cast<void*>(this);
    return AbstractFluidSimulationInterface::qt_metacast(_clname);
}

int WarpFluidSimulationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractFluidSimulationInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
