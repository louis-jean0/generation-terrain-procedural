#ifndef COLLISIONS_H
#define COLLISIONS_H

#include "DataStructure/Vector3.h"

namespace Collision {
Vector3 intersectionBetweenTwoSegments(Vector3 p1, Vector3 p2, Vector3 p3, Vector3 p4);
float shortestDistanceBetweenSegments(Vector3 p11, Vector3 p12, Vector3 p21, Vector3 p22);
float tetrahedronSignedVolume(Vector3 a, Vector3 b, Vector3 c, Vector3 d);
int sign(float a);
Vector3 segmentToTriangleCollision(Vector3 s1, Vector3 s2, Vector3 t1, Vector3 t2, Vector3 t3);
Vector3 intersectionRayPlane(Vector3 rayOrigin, Vector3 rayDir, Vector3 planeCenter, Vector3 planeNormal, bool limitRayLength = false);
Vector3 intersectionRaySphere(Vector3 rayOrigin, Vector3 rayDir, Vector3 sphereCenter, float sphereRadius, bool returnClosestPoint = true);
bool intersectionTriangleAABBox(Vector3 t0, Vector3 t1, Vector3 t2, Vector3 minAABBox, Vector3 maxAABBox);
bool intersectionTriangleAABBox(Vector3 t0, Vector3 t1, Vector3 t2, Vector3 boxCenter, Vector3 halfSizeX, Vector3 halfSizeY, Vector3 halfSizeZ);

Vector3 intersectionRayAABBox(Vector3 orig, Vector3 dir, Vector3 boxMin, Vector3 boxMax);

Vector3 projectPointOnSegment(Vector3 point, Vector3 segmentStart, Vector3 segmentEnd);
Vector3 projectPointOnSphere(Vector3 point, Vector3 sphereCenter, float sphereRadius);

bool pointInPolygon(Vector3 point, std::vector<Vector3> polygon);
}


#endif // COLLISIONS_H
