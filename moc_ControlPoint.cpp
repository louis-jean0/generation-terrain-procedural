/****************************************************************************
** Meta object code from reading C++ file 'ControlPoint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/ControlPoint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControlPoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlPoint_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlPoint_t qt_meta_stringdata_ControlPoint = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ControlPoint"
QT_MOC_LITERAL(1, 13, 13), // "pointModified"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "pointReleased"
QT_MOC_LITERAL(4, 42, 18), // "translationApplied"
QT_MOC_LITERAL(5, 61, 7), // "Vector3"
QT_MOC_LITERAL(6, 69, 15), // "rotationApplied"
QT_MOC_LITERAL(7, 85, 4), // "hide"
QT_MOC_LITERAL(8, 90, 4) // "show"

    },
    "ControlPoint\0pointModified\0\0pointReleased\0"
    "translationApplied\0Vector3\0rotationApplied\0"
    "hide\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlPoint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   52,    2, 0x0a /* Public */,
       8,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ControlPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlPoint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pointModified(); break;
        case 1: _t->pointReleased(); break;
        case 2: _t->translationApplied((*reinterpret_cast< Vector3(*)>(_a[1]))); break;
        case 3: _t->rotationApplied((*reinterpret_cast< Vector3(*)>(_a[1]))); break;
        case 4: _t->hide(); break;
        case 5: _t->show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControlPoint::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPoint::pointModified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ControlPoint::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPoint::pointReleased)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ControlPoint::*)(Vector3 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPoint::translationApplied)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ControlPoint::*)(Vector3 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlPoint::rotationApplied)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlPoint::staticMetaObject = { {
    QMetaObject::SuperData::link<qglviewer::ManipulatedFrame::staticMetaObject>(),
    qt_meta_stringdata_ControlPoint.data,
    qt_meta_data_ControlPoint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlPoint.stringdata0))
        return static_cast<void*>(this);
    return qglviewer::ManipulatedFrame::qt_metacast(_clname);
}

int ControlPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qglviewer::ManipulatedFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ControlPoint::pointModified()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ControlPoint::pointReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ControlPoint::translationApplied(Vector3 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ControlPoint::rotationApplied(Vector3 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
