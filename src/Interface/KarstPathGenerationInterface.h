#ifndef KARSTPATHGENERATIONINTERFACE_H
#define KARSTPATHGENERATIONINTERFACE_H

class KarstPathGenerationInterface;
#include "Interface/ControlPoint.h"
#include "Interface/InteractiveVector.h"
#include "Interface/Slider3D.h"
#include "Karst/KarstPathsGeneration.h"
#include "Graphics/Mesh.h"
#include "Interface/FancySlider.h"
#include "Utils/BSpline.h"
#include <QWidget>
#include "TerrainGen/VoxelGrid.h"
#include "Interface/PathCameraConstraint.h"
#include <QGLViewer/manipulatedCameraFrame.h>
#include "Interface/ActionInterface.h"

class KarstPathGenerationInterface : public ActionInterface
{
    Q_OBJECT
public:
    KarstPathGenerationInterface(QWidget *parent = nullptr);
    ~KarstPathGenerationInterface();
//    KarstPathGenerationInterface(KarstPathsGeneration karstCreator, Vector3 AABBoxMinPos, Vector3 AABBoxMaxPos);

    void display();
    void replay(nlohmann::json action);

    std::unique_ptr<InteractiveVector> fractureVector;
    std::unique_ptr<Slider3D> waterHeightSlider;
    Mesh waterLevelMesh;

//    bool isHidden;
    void affectTerrains(std::shared_ptr<Heightmap> heightmap, std::shared_ptr<VoxelGrid> voxelGrid, std::shared_ptr<LayerBasedGrid> layerGrid);
//    void affectVoxelGrid(std::shared_ptr<VoxelGrid> voxelGrid);
//    std::shared_ptr<VoxelGrid> voxelGrid;

    std::vector<BSpline> karstPaths;

    Mesh pathsMeshes;

    QLayout* createGUI();
    QHBoxLayout* karstCreationLayout;

Q_SIGNALS:
    void useAsMainCamera(qglviewer::Camera* cam, bool useMyCamera);
    void karstPathUpdated();

public Q_SLOTS:
    void updateFracture(Vector3 newFractureDir = Vector3());
    void updateWaterHeight(float newHeight = 0.f);

    void computeKarst();
    void updateKarstPath();
    void createKarst();

    void hide();
    void show();

public:
    Vector3 AABBoxMinPos;
    Vector3 AABBoxMaxPos;

    KarstPathsGeneration* karstCreator = nullptr;
    std::unique_ptr<ControlPoint> sourceControlPoint;
    qglviewer::Camera* visitingCamera = nullptr;
    PathCameraConstraint *cameraConstraint;
};

#endif // KARSTPATHGENERATIONINTERFACE_H
