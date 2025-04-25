/****************************************************************************
** Meta object code from reading C++ file 'Viewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/Viewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Viewer_t {
    QByteArrayData data[42];
    char stringdata0[580];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Viewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Viewer_t qt_meta_stringdata_Viewer = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Viewer"
QT_MOC_LITERAL(1, 7, 15), // "mouseClickOnMap"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "Vector3"
QT_MOC_LITERAL(4, 32, 18), // "mouseWorldPosition"
QT_MOC_LITERAL(5, 51, 10), // "mouseInMap"
QT_MOC_LITERAL(6, 62, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 75, 5), // "event"
QT_MOC_LITERAL(8, 81, 13), // "TerrainModel*"
QT_MOC_LITERAL(9, 95, 5), // "model"
QT_MOC_LITERAL(10, 101, 23), // "mouseDoubleClickedOnMap"
QT_MOC_LITERAL(11, 125, 15), // "mouseMovedOnMap"
QT_MOC_LITERAL(12, 141, 18), // "mouseReleasedOnMap"
QT_MOC_LITERAL(13, 160, 14), // "startRecording"
QT_MOC_LITERAL(14, 175, 11), // "std::string"
QT_MOC_LITERAL(15, 187, 10), // "folderUsed"
QT_MOC_LITERAL(16, 198, 13), // "stopRecording"
QT_MOC_LITERAL(17, 212, 18), // "startStopRecording"
QT_MOC_LITERAL(18, 231, 13), // "setViewerMode"
QT_MOC_LITERAL(19, 245, 10), // "ViewerMode"
QT_MOC_LITERAL(20, 256, 7), // "newMode"
QT_MOC_LITERAL(21, 264, 10), // "setMapMode"
QT_MOC_LITERAL(22, 275, 7), // "MapMode"
QT_MOC_LITERAL(23, 283, 21), // "setSmoothingAlgorithm"
QT_MOC_LITERAL(24, 305, 18), // "SmoothingAlgorithm"
QT_MOC_LITERAL(25, 324, 7), // "newAlgo"
QT_MOC_LITERAL(26, 332, 10), // "swapCamera"
QT_MOC_LITERAL(27, 343, 18), // "qglviewer::Camera*"
QT_MOC_LITERAL(28, 362, 9), // "altCamera"
QT_MOC_LITERAL(29, 372, 12), // "useAltCamera"
QT_MOC_LITERAL(30, 385, 19), // "clipViewTemporarily"
QT_MOC_LITERAL(31, 405, 9), // "direction"
QT_MOC_LITERAL(32, 415, 6), // "center"
QT_MOC_LITERAL(33, 422, 6), // "active"
QT_MOC_LITERAL(34, 429, 14), // "drawingProcess"
QT_MOC_LITERAL(35, 444, 16), // "reloadAllShaders"
QT_MOC_LITERAL(36, 461, 17), // "setupViewFromFile"
QT_MOC_LITERAL(37, 479, 8), // "filename"
QT_MOC_LITERAL(38, 488, 39), // "correctedFunctionForCameraRep..."
QT_MOC_LITERAL(39, 528, 14), // "saveViewToFile"
QT_MOC_LITERAL(40, 543, 10), // "screenshot"
QT_MOC_LITERAL(41, 554, 25) // "resetScreenshotFolderName"

    },
    "Viewer\0mouseClickOnMap\0\0Vector3\0"
    "mouseWorldPosition\0mouseInMap\0"
    "QMouseEvent*\0event\0TerrainModel*\0model\0"
    "mouseDoubleClickedOnMap\0mouseMovedOnMap\0"
    "mouseReleasedOnMap\0startRecording\0"
    "std::string\0folderUsed\0stopRecording\0"
    "startStopRecording\0setViewerMode\0"
    "ViewerMode\0newMode\0setMapMode\0MapMode\0"
    "setSmoothingAlgorithm\0SmoothingAlgorithm\0"
    "newAlgo\0swapCamera\0qglviewer::Camera*\0"
    "altCamera\0useAltCamera\0clipViewTemporarily\0"
    "direction\0center\0active\0drawingProcess\0"
    "reloadAllShaders\0setupViewFromFile\0"
    "filename\0correctedFunctionForCameraRepositioning\0"
    "saveViewToFile\0screenshot\0"
    "resetScreenshotFolderName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Viewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,  114,    2, 0x06 /* Public */,
      10,    4,  123,    2, 0x06 /* Public */,
      11,    2,  132,    2, 0x06 /* Public */,
      12,    4,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  146,    2, 0x0a /* Public */,
      13,    0,  149,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  150,    2, 0x0a /* Public */,
      17,    0,  151,    2, 0x0a /* Public */,
      18,    1,  152,    2, 0x0a /* Public */,
      21,    1,  155,    2, 0x0a /* Public */,
      23,    1,  158,    2, 0x0a /* Public */,
      26,    2,  161,    2, 0x0a /* Public */,
      30,    3,  166,    2, 0x0a /* Public */,
      34,    0,  173,    2, 0x0a /* Public */,
      35,    0,  174,    2, 0x0a /* Public */,
      36,    1,  175,    2, 0x0a /* Public */,
      38,    0,  178,    2, 0x0a /* Public */,
      39,    1,  179,    2, 0x0a /* Public */,
      40,    0,  182,    2, 0x0a /* Public */,
      41,    0,  183,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 8,    4,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 8,    4,    5,    7,    9,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 14,   15,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   28,   29,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,   31,   32,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   37,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 14,   37,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Viewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mouseClickOnMap((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 1: _t->mouseDoubleClickedOnMap((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 2: _t->mouseMovedOnMap((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< TerrainModel*(*)>(_a[2]))); break;
        case 3: _t->mouseReleasedOnMap((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QMouseEvent*(*)>(_a[3])),(*reinterpret_cast< TerrainModel*(*)>(_a[4]))); break;
        case 4: { bool _r = _t->startRecording((*reinterpret_cast< std::string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->startRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->stopRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->startStopRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setViewerMode((*reinterpret_cast< ViewerMode(*)>(_a[1]))); break;
        case 9: _t->setMapMode((*reinterpret_cast< MapMode(*)>(_a[1]))); break;
        case 10: _t->setSmoothingAlgorithm((*reinterpret_cast< SmoothingAlgorithm(*)>(_a[1]))); break;
        case 11: _t->swapCamera((*reinterpret_cast< qglviewer::Camera*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->clipViewTemporarily((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< const Vector3(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->drawingProcess(); break;
        case 14: _t->reloadAllShaders(); break;
        case 15: _t->setupViewFromFile((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 16: { bool _r = _t->correctedFunctionForCameraRepositioning();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->saveViewToFile((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 18: _t->screenshot(); break;
        case 19: _t->resetScreenshotFolderName(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< qglviewer::Camera* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Viewer::*)(const Vector3 & , bool , QMouseEvent * , TerrainModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer::mouseClickOnMap)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Viewer::*)(const Vector3 & , bool , QMouseEvent * , TerrainModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer::mouseDoubleClickedOnMap)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Viewer::*)(const Vector3 & , TerrainModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer::mouseMovedOnMap)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Viewer::*)(const Vector3 & , bool , QMouseEvent * , TerrainModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Viewer::mouseReleasedOnMap)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Viewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QGLViewer::staticMetaObject>(),
    qt_meta_stringdata_Viewer.data,
    qt_meta_data_Viewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Viewer.stringdata0))
        return static_cast<void*>(this);
    return QGLViewer::qt_metacast(_clname);
}

int Viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Viewer::mouseClickOnMap(const Vector3 & _t1, bool _t2, QMouseEvent * _t3, TerrainModel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Viewer::mouseDoubleClickedOnMap(const Vector3 & _t1, bool _t2, QMouseEvent * _t3, TerrainModel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Viewer::mouseMovedOnMap(const Vector3 & _t1, TerrainModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Viewer::mouseReleasedOnMap(const Vector3 & _t1, bool _t2, QMouseEvent * _t3, TerrainModel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
