/****************************************************************************
** Meta object code from reading C++ file 'InteractiveVector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/InteractiveVector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InteractiveVector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InteractiveVector_t {
    QByteArrayData data[9];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InteractiveVector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InteractiveVector_t qt_meta_stringdata_InteractiveVector = {
    {
QT_MOC_LITERAL(0, 0, 17), // "InteractiveVector"
QT_MOC_LITERAL(1, 18, 8), // "modified"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "Vector3"
QT_MOC_LITERAL(4, 36, 9), // "newVector"
QT_MOC_LITERAL(5, 46, 16), // "startingModified"
QT_MOC_LITERAL(6, 63, 14), // "endingModified"
QT_MOC_LITERAL(7, 78, 4), // "hide"
QT_MOC_LITERAL(8, 83, 4) // "show"

    },
    "InteractiveVector\0modified\0\0Vector3\0"
    "newVector\0startingModified\0endingModified\0"
    "hide\0show"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InteractiveVector[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   48,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InteractiveVector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InteractiveVector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->modified((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 1: _t->startingModified((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 2: _t->endingModified((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 3: _t->hide(); break;
        case 4: _t->show(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InteractiveVector::*)(const Vector3 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveVector::modified)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InteractiveVector::*)(const Vector3 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveVector::startingModified)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InteractiveVector::*)(const Vector3 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InteractiveVector::endingModified)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InteractiveVector::staticMetaObject = { {
    QMetaObject::SuperData::link<CustomInteractiveObject::staticMetaObject>(),
    qt_meta_stringdata_InteractiveVector.data,
    qt_meta_data_InteractiveVector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InteractiveVector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InteractiveVector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InteractiveVector.stringdata0))
        return static_cast<void*>(this);
    return CustomInteractiveObject::qt_metacast(_clname);
}

int InteractiveVector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomInteractiveObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void InteractiveVector::modified(const Vector3 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InteractiveVector::startingModified(const Vector3 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InteractiveVector::endingModified(const Vector3 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
