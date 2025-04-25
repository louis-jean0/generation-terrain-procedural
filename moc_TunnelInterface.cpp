/****************************************************************************
** Meta object code from reading C++ file 'TunnelInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/TunnelInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TunnelInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TunnelInterface_t {
    QByteArrayData data[35];
    char stringdata0[426];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TunnelInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TunnelInterface_t qt_meta_stringdata_TunnelInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TunnelInterface"
QT_MOC_LITERAL(1, 16, 14), // "needToClipView"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "Vector3"
QT_MOC_LITERAL(4, 40, 9), // "direction"
QT_MOC_LITERAL(5, 50, 6), // "center"
QT_MOC_LITERAL(6, 57, 6), // "active"
QT_MOC_LITERAL(7, 64, 13), // "tunnelCreated"
QT_MOC_LITERAL(8, 78, 10), // "KarstHole&"
QT_MOC_LITERAL(9, 89, 6), // "tunnel"
QT_MOC_LITERAL(10, 96, 4), // "show"
QT_MOC_LITERAL(11, 101, 4), // "hide"
QT_MOC_LITERAL(12, 106, 14), // "setTunnelWidth"
QT_MOC_LITERAL(13, 121, 7), // "newSize"
QT_MOC_LITERAL(14, 129, 15), // "setTunnelHeight"
QT_MOC_LITERAL(15, 145, 18), // "setErosionStrength"
QT_MOC_LITERAL(16, 164, 11), // "newStrength"
QT_MOC_LITERAL(17, 176, 21), // "addCurvesControlPoint"
QT_MOC_LITERAL(18, 198, 3), // "pos"
QT_MOC_LITERAL(19, 202, 14), // "justUpdatePath"
QT_MOC_LITERAL(20, 217, 19), // "updateStartingShape"
QT_MOC_LITERAL(21, 237, 17), // "updateEndingShape"
QT_MOC_LITERAL(22, 255, 17), // "clearTunnelPoints"
QT_MOC_LITERAL(23, 273, 12), // "createTunnel"
QT_MOC_LITERAL(24, 286, 14), // "removingMatter"
QT_MOC_LITERAL(25, 301, 11), // "createCrack"
QT_MOC_LITERAL(26, 313, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(27, 336, 15), // "mousePosInWorld"
QT_MOC_LITERAL(28, 352, 10), // "mouseInMap"
QT_MOC_LITERAL(29, 363, 12), // "QMouseEvent*"
QT_MOC_LITERAL(30, 376, 5), // "event"
QT_MOC_LITERAL(31, 382, 13), // "TerrainModel*"
QT_MOC_LITERAL(32, 396, 5), // "model"
QT_MOC_LITERAL(33, 402, 10), // "wheelEvent"
QT_MOC_LITERAL(34, 413, 12) // "QWheelEvent*"

    },
    "TunnelInterface\0needToClipView\0\0Vector3\0"
    "direction\0center\0active\0tunnelCreated\0"
    "KarstHole&\0tunnel\0show\0hide\0setTunnelWidth\0"
    "newSize\0setTunnelHeight\0setErosionStrength\0"
    "newStrength\0addCurvesControlPoint\0pos\0"
    "justUpdatePath\0updateStartingShape\0"
    "updateEndingShape\0clearTunnelPoints\0"
    "createTunnel\0removingMatter\0createCrack\0"
    "mouseClickedOnMapEvent\0mousePosInWorld\0"
    "mouseInMap\0QMouseEvent*\0event\0"
    "TerrainModel*\0model\0wheelEvent\0"
    "QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TunnelInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  104,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    1,  116,    2, 0x0a /* Public */,
      14,    1,  119,    2, 0x0a /* Public */,
      15,    1,  122,    2, 0x0a /* Public */,
      17,    2,  125,    2, 0x0a /* Public */,
      17,    1,  130,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  133,    2, 0x0a /* Public */,
      21,    0,  134,    2, 0x0a /* Public */,
      22,    0,  135,    2, 0x0a /* Public */,
      23,    1,  136,    2, 0x0a /* Public */,
      23,    0,  139,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  140,    2, 0x0a /* Public */,
      25,    0,  143,    2, 0x2a /* Public | MethodCloned */,
      26,    4,  144,    2, 0x0a /* Public */,
      33,    1,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,   18,   19,
    QMetaType::Void, 0x80000000 | 3,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 29, 0x80000000 | 31,   27,   28,   30,   32,
    QMetaType::Void, 0x80000000 | 34,   30,

       0        // eod
};

void TunnelInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TunnelInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->needToClipView((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< const Vector3(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->tunnelCreated((*reinterpret_cast< KarstHole(*)>(_a[1]))); break;
        case 2: _t->show(); break;
        case 3: _t->hide(); break;
        case 4: _t->setTunnelWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setTunnelHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setErosionStrength((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->addCurvesControlPoint((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->addCurvesControlPoint((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 9: _t->updateStartingShape(); break;
        case 10: _t->updateEndingShape(); break;
        case 11: _t->clearTunnelPoints(); break;
        case 12: _t->createTunnel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->createTunnel(); break;
        case 14: _t->createCrack((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->createCrack(); break;
        case 16: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 17: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TunnelInterface::*)(const Vector3 & , const Vector3 & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelInterface::needToClipView)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TunnelInterface::*)(KarstHole & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TunnelInterface::tunnelCreated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TunnelInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_TunnelInterface.data,
    qt_meta_data_TunnelInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TunnelInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TunnelInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TunnelInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int TunnelInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TunnelInterface::needToClipView(const Vector3 & _t1, const Vector3 & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TunnelInterface::tunnelCreated(KarstHole & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
