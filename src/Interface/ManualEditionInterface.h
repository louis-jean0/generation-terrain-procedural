#ifndef MANUALEDITIONINTERFACE_H
#define MANUALEDITIONINTERFACE_H

class ManualEditionInterface;

#include "Interface/ActionInterface.h"
#include <QObject>
#include "TerrainGen/VoxelGrid.h"
#include "Interface/FancySlider.h"
#include "Interface/ControlPoint.h"

class ManualEditionInterface : public ActionInterface
{
    Q_OBJECT
public:
    ManualEditionInterface(QWidget *parent = nullptr);

    void display(const Vector3& camPos = Vector3(false));
    void replay(nlohmann::json action);

//    void affectVoxelGrid(std::shared_ptr<VoxelGrid> voxelGrid);
    QLayout* createGUI();

public Q_SLOTS:
    void show();
    void hide();

    void setSize(int size);
    void setStrength(float strength);
    void setAddingMode(bool newMode);

    void setPosition(const Vector3& newPosition);
    void applyModification();

    void mouseMovedOnMapEvent(const Vector3& mouseWorldPosition, TerrainModel* model);
    void mouseClickedOnMapEvent(const Vector3& mousePosInMap, bool mouseInMap, QMouseEvent* event, TerrainModel *model);

public:
    void mouseMoveEvent(QMouseEvent* event);
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);
    void wheelEvent(QWheelEvent* event);

    bool readyToModify = false;

//    std::shared_ptr<VoxelGrid> voxelGrid;

    int manualEditionSize = 10;
    float manualEditionStrength = 2.f;
    bool addingMode = false;

    std::unique_ptr<ControlPoint> grabber;

    QHBoxLayout* manualEditLayout;
    FancySlider* manualEditSizeSlider;
    FancySlider* manualEditStrengthSlider;
    QRadioButton* addingModeButton;
    QRadioButton* suppressModeButton;
};

#endif // MANUALEDITIONINTERFACE_H
