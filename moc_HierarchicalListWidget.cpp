/****************************************************************************
** Meta object code from reading C++ file 'HierarchicalListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/HierarchicalListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HierarchicalListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HierarchicalListWidget_t {
    QByteArrayData data[14];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HierarchicalListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HierarchicalListWidget_t qt_meta_stringdata_HierarchicalListWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "HierarchicalListWidget"
QT_MOC_LITERAL(1, 23, 20), // "itemChangedHierarchy"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "changedItemID"
QT_MOC_LITERAL(4, 59, 14), // "relationItemID"
QT_MOC_LITERAL(5, 74, 14), // "HIERARCHY_TYPE"
QT_MOC_LITERAL(6, 89, 11), // "newRelation"
QT_MOC_LITERAL(7, 101, 11), // "QDropEvent*"
QT_MOC_LITERAL(8, 113, 5), // "event"
QT_MOC_LITERAL(9, 119, 14), // "dragEnterEvent"
QT_MOC_LITERAL(10, 134, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(11, 151, 14), // "dragLeaveEvent"
QT_MOC_LITERAL(12, 166, 16), // "QDragLeaveEvent*"
QT_MOC_LITERAL(13, 183, 9) // "dropEvent"

    },
    "HierarchicalListWidget\0itemChangedHierarchy\0"
    "\0changedItemID\0relationItemID\0"
    "HIERARCHY_TYPE\0newRelation\0QDropEvent*\0"
    "event\0dragEnterEvent\0QDragEnterEvent*\0"
    "dragLeaveEvent\0QDragLeaveEvent*\0"
    "dropEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HierarchicalListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,
       1,    3,   48,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   55,    2, 0x0a /* Public */,
      11,    1,   58,    2, 0x0a /* Public */,
      13,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, 0x80000000 | 7,    3,    4,    6,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    3,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,    8,
    QMetaType::Void, 0x80000000 | 12,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void HierarchicalListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HierarchicalListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemChangedHierarchy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< HIERARCHY_TYPE(*)>(_a[3])),(*reinterpret_cast< QDropEvent*(*)>(_a[4]))); break;
        case 1: _t->itemChangedHierarchy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< HIERARCHY_TYPE(*)>(_a[3]))); break;
        case 2: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 3: _t->dragLeaveEvent((*reinterpret_cast< QDragLeaveEvent*(*)>(_a[1]))); break;
        case 4: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HierarchicalListWidget::*)(int , int , HIERARCHY_TYPE , QDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HierarchicalListWidget::itemChangedHierarchy)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HierarchicalListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_HierarchicalListWidget.data,
    qt_meta_data_HierarchicalListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HierarchicalListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HierarchicalListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HierarchicalListWidget.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int HierarchicalListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
void HierarchicalListWidget::itemChangedHierarchy(int _t1, int _t2, HIERARCHY_TYPE _t3, QDropEvent * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
