/****************************************************************************
** Meta object code from reading C++ file 'BiomeInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/BiomeInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BiomeInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BiomeInterface_t {
    QByteArrayData data[41];
    char stringdata0[556];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiomeInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiomeInterface_t qt_meta_stringdata_BiomeInterface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BiomeInterface"
QT_MOC_LITERAL(1, 15, 19), // "terrainViewModified"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "Vector3"
QT_MOC_LITERAL(4, 44, 9), // "newOffset"
QT_MOC_LITERAL(5, 54, 10), // "newScaling"
QT_MOC_LITERAL(6, 65, 16), // "displayAllBiomes"
QT_MOC_LITERAL(7, 82, 17), // "interchangeBiomes"
QT_MOC_LITERAL(8, 100, 26), // "mouseDoubleClickOnMapEvent"
QT_MOC_LITERAL(9, 127, 13), // "mousePosition"
QT_MOC_LITERAL(10, 141, 10), // "mouseInMap"
QT_MOC_LITERAL(11, 152, 12), // "QMouseEvent*"
QT_MOC_LITERAL(12, 165, 5), // "event"
QT_MOC_LITERAL(13, 171, 13), // "TerrainModel*"
QT_MOC_LITERAL(14, 185, 5), // "model"
QT_MOC_LITERAL(15, 191, 14), // "generateBiomes"
QT_MOC_LITERAL(16, 206, 30), // "std::shared_ptr<BiomeInstance>"
QT_MOC_LITERAL(17, 237, 23), // "predefinedBiomeInstance"
QT_MOC_LITERAL(18, 261, 9), // "randomize"
QT_MOC_LITERAL(19, 271, 12), // "replaceBiome"
QT_MOC_LITERAL(20, 284, 14), // "biomeToReplace"
QT_MOC_LITERAL(21, 299, 8), // "newBiome"
QT_MOC_LITERAL(22, 308, 4), // "hide"
QT_MOC_LITERAL(23, 313, 4), // "show"
QT_MOC_LITERAL(24, 318, 9), // "addTunnel"
QT_MOC_LITERAL(25, 328, 10), // "KarstHole&"
QT_MOC_LITERAL(26, 339, 4), // "hole"
QT_MOC_LITERAL(27, 344, 22), // "mouseClickedOnMapEvent"
QT_MOC_LITERAL(28, 367, 13), // "mousePosInMap"
QT_MOC_LITERAL(29, 381, 30), // "updateSelectionPlaneToFitBiome"
QT_MOC_LITERAL(30, 412, 7), // "biomeID"
QT_MOC_LITERAL(31, 420, 10), // "planeIndex"
QT_MOC_LITERAL(32, 431, 10), // "callUpdate"
QT_MOC_LITERAL(33, 442, 22), // "displayUniqueSelection"
QT_MOC_LITERAL(34, 465, 14), // "selectionIndex"
QT_MOC_LITERAL(35, 480, 13), // "prepareTrench"
QT_MOC_LITERAL(36, 494, 5), // "GridF"
QT_MOC_LITERAL(37, 500, 5), // "biome"
QT_MOC_LITERAL(38, 506, 16), // "prepareCoralWall"
QT_MOC_LITERAL(39, 523, 12), // "prepareArche"
QT_MOC_LITERAL(40, 536, 19) // "preparePatateCorail"

    },
    "BiomeInterface\0terrainViewModified\0\0"
    "Vector3\0newOffset\0newScaling\0"
    "displayAllBiomes\0interchangeBiomes\0"
    "mouseDoubleClickOnMapEvent\0mousePosition\0"
    "mouseInMap\0QMouseEvent*\0event\0"
    "TerrainModel*\0model\0generateBiomes\0"
    "std::shared_ptr<BiomeInstance>\0"
    "predefinedBiomeInstance\0randomize\0"
    "replaceBiome\0biomeToReplace\0newBiome\0"
    "hide\0show\0addTunnel\0KarstHole&\0hole\0"
    "mouseClickedOnMapEvent\0mousePosInMap\0"
    "updateSelectionPlaneToFitBiome\0biomeID\0"
    "planeIndex\0callUpdate\0displayUniqueSelection\0"
    "selectionIndex\0prepareTrench\0GridF\0"
    "biome\0prepareCoralWall\0prepareArche\0"
    "preparePatateCorail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiomeInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  114,    2, 0x0a /* Public */,
       7,    0,  115,    2, 0x0a /* Public */,
       8,    4,  116,    2, 0x0a /* Public */,
      15,    1,  125,    2, 0x0a /* Public */,
      15,    0,  128,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  129,    2, 0x0a /* Public */,
      19,    2,  130,    2, 0x0a /* Public */,
      22,    0,  135,    2, 0x0a /* Public */,
      23,    0,  136,    2, 0x0a /* Public */,
      24,    1,  137,    2, 0x0a /* Public */,
      27,    4,  140,    2, 0x0a /* Public */,
      29,    3,  149,    2, 0x0a /* Public */,
      29,    2,  156,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  161,    2, 0x0a /* Public */,
      35,    1,  164,    2, 0x0a /* Public */,
      38,    1,  167,    2, 0x0a /* Public */,
      39,    1,  170,    2, 0x0a /* Public */,
      40,    1,  173,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Float,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 11, 0x80000000 | 13,    9,   10,   12,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 11, 0x80000000 | 13,   28,   10,   12,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   30,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void, QMetaType::Int,   34,
    0x80000000 | 36, 0x80000000 | 16,   37,
    0x80000000 | 36, 0x80000000 | 16,   37,
    0x80000000 | 36, 0x80000000 | 16,   37,
    0x80000000 | 36, 0x80000000 | 16,   37,

       0        // eod
};

void BiomeInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BiomeInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->terrainViewModified((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->displayAllBiomes(); break;
        case 2: _t->interchangeBiomes(); break;
        case 3: _t->mouseDoubleClickOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 4: _t->generateBiomes((*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[1]))); break;
        case 5: _t->generateBiomes(); break;
        case 6: _t->randomize(); break;
        case 7: _t->replaceBiome((*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[1])),(*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[2]))); break;
        case 8: _t->hide(); break;
        case 9: _t->show(); break;
        case 10: _t->addTunnel((*reinterpret_cast< KarstHole(*)>(_a[1]))); break;
        case 11: _t->mouseClickedOnMapEvent((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 12: _t->updateSelectionPlaneToFitBiome((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->updateSelectionPlaneToFitBiome((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->displayUniqueSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: { GridF _r = _t->prepareTrench((*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GridF*>(_a[0]) = std::move(_r); }  break;
        case 16: { GridF _r = _t->prepareCoralWall((*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GridF*>(_a[0]) = std::move(_r); }  break;
        case 17: { GridF _r = _t->prepareArche((*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GridF*>(_a[0]) = std::move(_r); }  break;
        case 18: { GridF _r = _t->preparePatateCorail((*reinterpret_cast< std::shared_ptr<BiomeInstance>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GridF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BiomeInterface::*)(const Vector3 & , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BiomeInterface::terrainViewModified)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BiomeInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_BiomeInterface.data,
    qt_meta_data_BiomeInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiomeInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiomeInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiomeInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int BiomeInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void BiomeInterface::terrainViewModified(const Vector3 & _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_BiomeReplacementDialog_t {
    QByteArrayData data[5];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BiomeReplacementDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BiomeReplacementDialog_t qt_meta_stringdata_BiomeReplacementDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BiomeReplacementDialog"
QT_MOC_LITERAL(1, 23, 4), // "open"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "cancel"
QT_MOC_LITERAL(4, 36, 7) // "confirm"

    },
    "BiomeReplacementDialog\0open\0\0cancel\0"
    "confirm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BiomeReplacementDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BiomeReplacementDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BiomeReplacementDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->cancel(); break;
        case 2: _t->confirm(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject BiomeReplacementDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_BiomeReplacementDialog.data,
    qt_meta_data_BiomeReplacementDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BiomeReplacementDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BiomeReplacementDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BiomeReplacementDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BiomeReplacementDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
