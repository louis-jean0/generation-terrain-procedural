/****************************************************************************
** Meta object code from reading C++ file 'Plotter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Graphics/Plotter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Plotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChartView_t {
    QByteArrayData data[11];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChartView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChartView_t qt_meta_stringdata_ChartView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ChartView"
QT_MOC_LITERAL(1, 10, 7), // "updated"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "clickedOnValue"
QT_MOC_LITERAL(4, 34, 7), // "Vector3"
QT_MOC_LITERAL(5, 42, 3), // "pos"
QT_MOC_LITERAL(6, 46, 10), // "mouseMoved"
QT_MOC_LITERAL(7, 57, 11), // "relativePos"
QT_MOC_LITERAL(8, 69, 16), // "previousMousePos"
QT_MOC_LITERAL(9, 86, 12), // "QMouseEvent*"
QT_MOC_LITERAL(10, 99, 1) // "e"

    },
    "ChartView\0updated\0\0clickedOnValue\0"
    "Vector3\0pos\0mouseMoved\0relativePos\0"
    "previousMousePos\0QMouseEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChartView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       6,    3,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 9,    7,    8,   10,

       0        // eod
};

void ChartView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChartView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->clickedOnValue((*reinterpret_cast< const Vector3(*)>(_a[1]))); break;
        case 2: _t->mouseMoved((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< const Vector3(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChartView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartView::updated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChartView::*)(const Vector3 & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartView::clickedOnValue)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChartView::*)(const Vector3 & , const Vector3 & , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartView::mouseMoved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChartView::staticMetaObject = { {
    QMetaObject::SuperData::link<QChartView::staticMetaObject>(),
    qt_meta_stringdata_ChartView.data,
    qt_meta_data_ChartView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChartView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChartView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChartView.stringdata0))
        return static_cast<void*>(this);
    return QChartView::qt_metacast(_clname);
}

int ChartView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChartView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ChartView::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChartView::clickedOnValue(const Vector3 & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChartView::mouseMoved(const Vector3 & _t1, const Vector3 & _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_Chart_t {
    QByteArrayData data[1];
    char stringdata0[6];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Chart_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Chart_t qt_meta_stringdata_Chart = {
    {
QT_MOC_LITERAL(0, 0, 5) // "Chart"

    },
    "Chart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Chart[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Chart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Chart::staticMetaObject = { {
    QMetaObject::SuperData::link<QChart::staticMetaObject>(),
    qt_meta_stringdata_Chart.data,
    qt_meta_data_Chart,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Chart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chart::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Chart.stringdata0))
        return static_cast<void*>(this);
    return QChart::qt_metacast(_clname);
}

int Chart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QChart::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Plotter_t {
    QByteArrayData data[24];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plotter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plotter_t qt_meta_stringdata_Plotter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Plotter"
QT_MOC_LITERAL(1, 8, 14), // "clickedOnImage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "Vector3"
QT_MOC_LITERAL(4, 32, 3), // "pos"
QT_MOC_LITERAL(5, 36, 5), // "value"
QT_MOC_LITERAL(6, 42, 12), // "movedOnImage"
QT_MOC_LITERAL(7, 55, 11), // "previousPos"
QT_MOC_LITERAL(8, 67, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 80, 5), // "event"
QT_MOC_LITERAL(10, 86, 21), // "updateLabelsPositions"
QT_MOC_LITERAL(11, 108, 8), // "Plotter*"
QT_MOC_LITERAL(12, 117, 10), // "selectData"
QT_MOC_LITERAL(13, 128, 21), // "displayInfoUnderMouse"
QT_MOC_LITERAL(14, 150, 16), // "relativeMousePos"
QT_MOC_LITERAL(15, 167, 4), // "draw"
QT_MOC_LITERAL(16, 172, 4), // "show"
QT_MOC_LITERAL(17, 177, 8), // "updateUI"
QT_MOC_LITERAL(18, 186, 22), // "setNormalizedModeImage"
QT_MOC_LITERAL(19, 209, 9), // "normalize"
QT_MOC_LITERAL(20, 219, 20), // "setAbsoluteModeImage"
QT_MOC_LITERAL(21, 240, 8), // "absolute"
QT_MOC_LITERAL(22, 249, 22), // "setFilteredValuesImage"
QT_MOC_LITERAL(23, 272, 8) // "filtered"

    },
    "Plotter\0clickedOnImage\0\0Vector3\0pos\0"
    "value\0movedOnImage\0previousPos\0"
    "QMouseEvent*\0event\0updateLabelsPositions\0"
    "Plotter*\0selectData\0displayInfoUnderMouse\0"
    "relativeMousePos\0draw\0show\0updateUI\0"
    "setNormalizedModeImage\0normalize\0"
    "setAbsoluteModeImage\0absolute\0"
    "setFilteredValuesImage\0filtered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plotter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       6,    3,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   81,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      13,    1,   85,    2, 0x0a /* Public */,
      15,    0,   88,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,
      17,    0,   90,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,
      20,    1,   94,    2, 0x0a /* Public */,
      22,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 8,    4,    7,    9,

 // slots: parameters
    0x80000000 | 11,
    0x80000000 | 11, 0x80000000 | 3,    4,
    0x80000000 | 11, 0x80000000 | 3,   14,
    0x80000000 | 11,
    0x80000000 | 11,
    0x80000000 | 11,
    0x80000000 | 11, QMetaType::Bool,   19,
    0x80000000 | 11, QMetaType::Bool,   21,
    0x80000000 | 11, QMetaType::Bool,   23,

       0        // eod
};

void Plotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plotter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clickedOnImage((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< Vector3(*)>(_a[2]))); break;
        case 1: _t->movedOnImage((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< const Vector3(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3]))); break;
        case 2: { Plotter* _r = _t->updateLabelsPositions();
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 3: { Plotter* _r = _t->selectData((*reinterpret_cast< const Vector3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 4: { Plotter* _r = _t->displayInfoUnderMouse((*reinterpret_cast< const Vector3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 5: { Plotter* _r = _t->draw();
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 6: { Plotter* _r = _t->show();
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 7: { Plotter* _r = _t->updateUI();
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 8: { Plotter* _r = _t->setNormalizedModeImage((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 9: { Plotter* _r = _t->setAbsoluteModeImage((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        case 10: { Plotter* _r = _t->setFilteredValuesImage((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Plotter**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Plotter::*)(const Vector3 & , Vector3 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::clickedOnImage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Plotter::*)(const Vector3 & , const Vector3 & , QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Plotter::movedOnImage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Plotter::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Plotter.data,
    qt_meta_data_Plotter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Plotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Plotter.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Plotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Plotter::clickedOnImage(const Vector3 & _t1, Vector3 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Plotter::movedOnImage(const Vector3 & _t1, const Vector3 & _t2, QMouseEvent * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
