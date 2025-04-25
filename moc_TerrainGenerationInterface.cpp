/****************************************************************************
** Meta object code from reading C++ file 'TerrainGenerationInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.16)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/Interface/TerrainGenerationInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainGenerationInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.16. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TerrainGenerationInterface_t {
    QByteArrayData data[54];
    char stringdata0[884];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TerrainGenerationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TerrainGenerationInterface_t qt_meta_stringdata_TerrainGenerationInterface = {
    {
QT_MOC_LITERAL(0, 0, 26), // "TerrainGenerationInterface"
QT_MOC_LITERAL(1, 27, 4), // "show"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "hide"
QT_MOC_LITERAL(4, 38, 13), // "prepareShader"
QT_MOC_LITERAL(5, 52, 6), // "reload"
QT_MOC_LITERAL(6, 59, 13), // "setWaterLevel"
QT_MOC_LITERAL(7, 73, 8), // "newLevel"
QT_MOC_LITERAL(8, 82, 19), // "setAmbiantOcclusion"
QT_MOC_LITERAL(9, 102, 8), // "newValue"
QT_MOC_LITERAL(10, 111, 19), // "updateDisplayedView"
QT_MOC_LITERAL(11, 131, 7), // "Vector3"
QT_MOC_LITERAL(12, 139, 18), // "newVoxelGridOffset"
QT_MOC_LITERAL(13, 158, 19), // "newVoxelGridScaling"
QT_MOC_LITERAL(14, 178, 13), // "reloadTerrain"
QT_MOC_LITERAL(15, 192, 55), // "std::map<std::string,std::sha..."
QT_MOC_LITERAL(16, 248, 16), // "actionInterfaces"
QT_MOC_LITERAL(17, 265, 19), // "afterTerrainUpdated"
QT_MOC_LITERAL(18, 285, 17), // "heightmapToVoxels"
QT_MOC_LITERAL(19, 303, 17), // "heightmapToLayers"
QT_MOC_LITERAL(20, 321, 19), // "heightmapToImplicit"
QT_MOC_LITERAL(21, 341, 14), // "heightmapToAll"
QT_MOC_LITERAL(22, 356, 17), // "voxelsToHeightmap"
QT_MOC_LITERAL(23, 374, 14), // "voxelsToLayers"
QT_MOC_LITERAL(24, 389, 16), // "voxelsToImplicit"
QT_MOC_LITERAL(25, 406, 11), // "voxelsToAll"
QT_MOC_LITERAL(26, 418, 14), // "layersToVoxels"
QT_MOC_LITERAL(27, 433, 17), // "layersToHeightmap"
QT_MOC_LITERAL(28, 451, 16), // "layersToImplicit"
QT_MOC_LITERAL(29, 468, 11), // "layersToAll"
QT_MOC_LITERAL(30, 480, 16), // "implicitToVoxels"
QT_MOC_LITERAL(31, 497, 16), // "implicitToLayers"
QT_MOC_LITERAL(32, 514, 19), // "implicitToHeightmap"
QT_MOC_LITERAL(33, 534, 13), // "implicitToAll"
QT_MOC_LITERAL(34, 548, 9), // "openMapUI"
QT_MOC_LITERAL(35, 558, 9), // "saveMapUI"
QT_MOC_LITERAL(36, 568, 15), // "reinforceVoxels"
QT_MOC_LITERAL(37, 584, 33), // "saveErosionDepositionTextureM..."
QT_MOC_LITERAL(38, 618, 11), // "std::string"
QT_MOC_LITERAL(39, 630, 12), // "savingFolder"
QT_MOC_LITERAL(40, 643, 10), // "savingName"
QT_MOC_LITERAL(41, 654, 43), // "saveErosionDepositionTextureM..."
QT_MOC_LITERAL(42, 698, 30), // "changeDisplayToComparativeMode"
QT_MOC_LITERAL(43, 729, 13), // "toComparative"
QT_MOC_LITERAL(44, 743, 15), // "setHeightFactor"
QT_MOC_LITERAL(45, 759, 15), // "newHeightFactor"
QT_MOC_LITERAL(46, 775, 22), // "changeDisplayDepthMode"
QT_MOC_LITERAL(47, 798, 7), // "display"
QT_MOC_LITERAL(48, 806, 24), // "changeDisplayShadowsMode"
QT_MOC_LITERAL(49, 831, 26), // "updateScalarFieldToDisplay"
QT_MOC_LITERAL(50, 858, 5), // "GridF"
QT_MOC_LITERAL(51, 864, 11), // "scalarField"
QT_MOC_LITERAL(52, 876, 3), // "min"
QT_MOC_LITERAL(53, 880, 3) // "max"

    },
    "TerrainGenerationInterface\0show\0\0hide\0"
    "prepareShader\0reload\0setWaterLevel\0"
    "newLevel\0setAmbiantOcclusion\0newValue\0"
    "updateDisplayedView\0Vector3\0"
    "newVoxelGridOffset\0newVoxelGridScaling\0"
    "reloadTerrain\0"
    "std::map<std::string,std::shared_ptr<ActionInterface> >\0"
    "actionInterfaces\0afterTerrainUpdated\0"
    "heightmapToVoxels\0heightmapToLayers\0"
    "heightmapToImplicit\0heightmapToAll\0"
    "voxelsToHeightmap\0voxelsToLayers\0"
    "voxelsToImplicit\0voxelsToAll\0"
    "layersToVoxels\0layersToHeightmap\0"
    "layersToImplicit\0layersToAll\0"
    "implicitToVoxels\0implicitToLayers\0"
    "implicitToHeightmap\0implicitToAll\0"
    "openMapUI\0saveMapUI\0reinforceVoxels\0"
    "saveErosionDepositionTextureMasks\0"
    "std::string\0savingFolder\0savingName\0"
    "saveErosionDepositionTextureMasksOnMultiple\0"
    "changeDisplayToComparativeMode\0"
    "toComparative\0setHeightFactor\0"
    "newHeightFactor\0changeDisplayDepthMode\0"
    "display\0changeDisplayShadowsMode\0"
    "updateScalarFieldToDisplay\0GridF\0"
    "scalarField\0min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TerrainGenerationInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  204,    2, 0x0a /* Public */,
       3,    0,  205,    2, 0x0a /* Public */,
       4,    1,  206,    2, 0x0a /* Public */,
       4,    0,  209,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  210,    2, 0x0a /* Public */,
       8,    1,  213,    2, 0x0a /* Public */,
      10,    2,  216,    2, 0x0a /* Public */,
      14,    1,  221,    2, 0x0a /* Public */,
      14,    0,  224,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  225,    2, 0x0a /* Public */,
      18,    0,  226,    2, 0x0a /* Public */,
      19,    0,  227,    2, 0x0a /* Public */,
      20,    0,  228,    2, 0x0a /* Public */,
      21,    0,  229,    2, 0x0a /* Public */,
      22,    0,  230,    2, 0x0a /* Public */,
      23,    0,  231,    2, 0x0a /* Public */,
      24,    0,  232,    2, 0x0a /* Public */,
      25,    0,  233,    2, 0x0a /* Public */,
      26,    0,  234,    2, 0x0a /* Public */,
      27,    0,  235,    2, 0x0a /* Public */,
      28,    0,  236,    2, 0x0a /* Public */,
      29,    0,  237,    2, 0x0a /* Public */,
      30,    0,  238,    2, 0x0a /* Public */,
      31,    0,  239,    2, 0x0a /* Public */,
      32,    0,  240,    2, 0x0a /* Public */,
      33,    0,  241,    2, 0x0a /* Public */,
      34,    0,  242,    2, 0x0a /* Public */,
      35,    0,  243,    2, 0x0a /* Public */,
      36,    0,  244,    2, 0x0a /* Public */,
      37,    2,  245,    2, 0x0a /* Public */,
      41,    0,  250,    2, 0x0a /* Public */,
      42,    1,  251,    2, 0x0a /* Public */,
      44,    1,  254,    2, 0x0a /* Public */,
      46,    1,  257,    2, 0x0a /* Public */,
      48,    1,  260,    2, 0x0a /* Public */,
      49,    3,  263,    2, 0x0a /* Public */,
      49,    2,  270,    2, 0x2a /* Public | MethodCloned */,
      49,    1,  275,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Float,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 38,   39,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void, QMetaType::Float,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, 0x80000000 | 50, QMetaType::Float, QMetaType::Float,   51,   52,   53,
    QMetaType::Void, 0x80000000 | 50, QMetaType::Float,   51,   52,
    QMetaType::Void, 0x80000000 | 50,   51,

       0        // eod
};

void TerrainGenerationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerrainGenerationInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->show(); break;
        case 1: _t->hide(); break;
        case 2: _t->prepareShader((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->prepareShader(); break;
        case 4: _t->setWaterLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setAmbiantOcclusion((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->updateDisplayedView((*reinterpret_cast< const Vector3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->reloadTerrain((*reinterpret_cast< std::map<std::string,std::shared_ptr<ActionInterface> >(*)>(_a[1]))); break;
        case 8: _t->reloadTerrain(); break;
        case 9: _t->afterTerrainUpdated(); break;
        case 10: _t->heightmapToVoxels(); break;
        case 11: _t->heightmapToLayers(); break;
        case 12: _t->heightmapToImplicit(); break;
        case 13: _t->heightmapToAll(); break;
        case 14: _t->voxelsToHeightmap(); break;
        case 15: _t->voxelsToLayers(); break;
        case 16: _t->voxelsToImplicit(); break;
        case 17: _t->voxelsToAll(); break;
        case 18: _t->layersToVoxels(); break;
        case 19: _t->layersToHeightmap(); break;
        case 20: _t->layersToImplicit(); break;
        case 21: _t->layersToAll(); break;
        case 22: _t->implicitToVoxels(); break;
        case 23: _t->implicitToLayers(); break;
        case 24: _t->implicitToHeightmap(); break;
        case 25: _t->implicitToAll(); break;
        case 26: _t->openMapUI(); break;
        case 27: _t->saveMapUI(); break;
        case 28: _t->reinforceVoxels(); break;
        case 29: _t->saveErosionDepositionTextureMasks((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 30: _t->saveErosionDepositionTextureMasksOnMultiple(); break;
        case 31: _t->changeDisplayToComparativeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->setHeightFactor((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 33: _t->changeDisplayDepthMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->changeDisplayShadowsMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->updateScalarFieldToDisplay((*reinterpret_cast< const GridF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 36: _t->updateScalarFieldToDisplay((*reinterpret_cast< const GridF(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 37: _t->updateScalarFieldToDisplay((*reinterpret_cast< const GridF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TerrainGenerationInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<ActionInterface::staticMetaObject>(),
    qt_meta_stringdata_TerrainGenerationInterface.data,
    qt_meta_data_TerrainGenerationInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TerrainGenerationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerrainGenerationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerrainGenerationInterface.stringdata0))
        return static_cast<void*>(this);
    return ActionInterface::qt_metacast(_clname);
}

int TerrainGenerationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 38;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
