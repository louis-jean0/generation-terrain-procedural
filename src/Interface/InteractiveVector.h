#ifndef INTERACTIVEVECTOR_H
#define INTERACTIVEVECTOR_H

#include "DataStructure/Vector3.h"
#include "Interface/ControlPoint.h"
#include "Graphics/Mesh.h"
#include "Interface/CustomInteractiveObject.h"

class InteractiveVector : public CustomInteractiveObject
{
    Q_OBJECT
public:
    InteractiveVector();
    InteractiveVector(const Vector3& end);
    InteractiveVector(const Vector3& start, const Vector3& end);

    void display();
    void setPosition(const Vector3& start);
    void setPositions(const Vector3& start, const Vector3& end);

public Q_SLOTS:
    void hide();
    void show();

Q_SIGNALS:
    void modified(const Vector3& newVector);
    void startingModified(const Vector3& newVector);
    void endingModified(const Vector3& newVector);

public:
    Vector3 getResultingVector() { return getEndingVector() - getStartingVector(); }
    Vector3 getStartingVector() { return this->startingControlPoint->getPosition(); }
    Vector3 getEndingVector() { return this->endingControlPoint->getPosition(); }

    std::unique_ptr<ControlPoint> startingControlPoint;
    std::unique_ptr<ControlPoint> endingControlPoint;
    Mesh arrowMesh;

    std::vector<Vector3> getArrowPath();
    float _length;

    static std::shared_ptr<Shader> base_shader;
};

#endif // INTERACTIVEVECTOR_H
