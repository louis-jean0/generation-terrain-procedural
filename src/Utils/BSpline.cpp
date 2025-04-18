#include "Utils/BSpline.h"

#include "Utils/Utils.h"
#include "Utils/Collisions.h"

#include <exception>
#include <sstream>

BSpline::BSpline()
{

}
BSpline::BSpline(int numberOfPoints) {
    for(int i = 0; i < numberOfPoints; i++) {
        this->points.push_back(Vector3::random());
    }
}

BSpline::BSpline(std::vector<Vector3> points)
    : points(points)
{
}
BSpline::BSpline(std::vector<BSpline> subsplines)
{
    for (BSpline& spline : subsplines) {
        bool ignoreFirstPoint = (this->points.empty() ? false : this->points.back() == spline.points.front());
        this->points.insert(this->points.end(), spline.points.begin() + (ignoreFirstPoint ? 1 : 0), spline.points.end());
    }
}


BSpline& BSpline::reverseVertices()
{
    std::reverse(this->points.begin(), this->points.end());
    return *this;
}

std::vector<Vector3> BSpline::getPath(int numberOfPoints, bool linearPath) const
{
    /// I'm really not sure this is the best solution, but an easy fix :
    /// forcing user to have at least 2 points
    numberOfPoints = std::max(numberOfPoints, 2);

    std::vector<Vector3> path;
    float resolution = 1.f / (float)(numberOfPoints - 1);
    for (int i = 0; i < numberOfPoints; i ++)
        path.push_back(this->getPoint(i * resolution, (linearPath ? 0.f : 2.f)));
    return path;
}

Vector3 BSpline::getPoint(float x, float alpha) const
{
    if (this->closed) {
        x = x - std::floor(x); // Warp around if x < 0 or x > 1
    } else {
        x = std::clamp(x, 0.f, 1.f);
    }
    if (points.size() > 2)
        return this->getCatmullPoint(x, alpha);

    if(points.size() == 0)
        return Vector3();

    std::vector<Vector3> controls = points;
    while (controls.size() > 1)
    {
        std::vector<Vector3> newCtrls;
        for (size_t i = 0; i < controls.size() - 1; i++) {
            newCtrls.push_back(this->getPoint(x, controls[i], controls[i+1]));
        }
        controls = newCtrls;
    }
    return controls[0];
}
Vector3 BSpline::getPoint(float x, const Vector3& a, const Vector3& b) const
{
    return a * (1 - x) + b * x;
}

Vector3 BSpline::getDerivative(float x, bool normalize) const
{
    /*float previousTime = std::clamp(x - 0.01f, 0.f, 1.f);
    float nextTime = std::clamp(x + 0.01f, 0.f, 1.f);
    float e = nextTime - previousTime; // Case for start/end of curve

    Vector3 v = (getPoint(nextTime) - getPoint(previousTime));
    return (normalize ? v.normalized() : v / e);
    */
    Vector3 v = std::get<1>(this->pointAndDerivativeAndSecondDerivative(x));
    return (normalize ? v.normalized() : v);
}

Vector3 BSpline::getSecondDerivative(float x, bool normalize) const
{
    /*float previousTime = std::clamp(x - 0.01f, 0.f, 1.f);
    float nextTime = std::clamp(x + 0.01f, 0.f, 1.f);
    float e = nextTime - previousTime; // Case for start/end of curve

    Vector3 v = (getDerivative(nextTime) - getDerivative(previousTime));
    return (normalize ? v.normalized() : v / e);
    */
    Vector3 v = std::get<2>(this->pointAndDerivativeAndSecondDerivative(x));
    return (normalize ? v.normalized() : v);
}

/*
 * Everything here is useless...
float getSegmentClosestTime(const BSpline& curve, float t1, float t2, const Vector3& pos) {
    // Returns the parameter t of the closest point on the curve segment between t1 and t2 to the point pos.
    Vector3 pointAtT1 = curve.getPoint(t1);
    Vector3 pointAtT2 = curve.getPoint(t2);
    Vector3 line = pointAtT2 - pointAtT1;
    float tClosest = ((pos - pointAtT1).dot(line)) / line.norm2();
    return std::clamp(tClosest, 0.0f, 1.0f);  // Ensure tClosest is within [0, 1] relative to t1 and t2
}

float closestTimeSubdivision(const BSpline& curve, const Vector3& pos, float tStart = 0.0f, float tEnd = 1.0f, int depth = 0, const int maxDepth = 10, float epsilon = 0.001f) {
    // Calculate the midpoint and its position
    float tMid = (tStart + tEnd) / 2.0f;
    Vector3 midPoint = curve.getPoint(tMid);

    // Check if the distance at tMid is within the acceptable epsilon range
    float midDistance = (midPoint - pos).norm2();
    if (midDistance < epsilon || depth >= maxDepth) {
        // If the closest distance is less than epsilon or the maximum depth is reached, return tMid
        return tMid;
    }

    // Subdivide the curve and check the distance at the midpoints
    float tLeftMid = (tStart + tMid) / 2.0f;
    Vector3 leftMidPoint = curve.getPoint(tLeftMid);

    float tRightMid = (tMid + tEnd) / 2.0f;
    Vector3 rightMidPoint = curve.getPoint(tRightMid);

    // Compute distances to pos
    float startDistance = (curve.getPoint(tStart) - pos).norm2();
    float leftMidDistance = (leftMidPoint - pos).norm2();
    float rightMidDistance = (rightMidPoint - pos).norm2();
    float endDistance = (curve.getPoint(tEnd) - pos).norm2();

    // Use a lambda function to find the minimum distance and its corresponding parameter
    auto [minDistance, minT] = std::min({std::make_pair(startDistance, tStart),
                                         std::make_pair(leftMidDistance, tLeftMid),
                                         std::make_pair(midDistance, tMid),
                                         std::make_pair(rightMidDistance, tRightMid),
                                         std::make_pair(endDistance, tEnd)},
                                        [](const auto& a, const auto& b) { return a.first < b.first; });

    // If the closest distance is within the epsilon threshold, return the corresponding t value
    if (minDistance < epsilon) {
        return minT;
    }

    // Recur on the appropriate half of the curve
    if (minT <= tLeftMid) {
        return closestTimeSubdivision(curve, pos, tStart, tMid, depth + 1, maxDepth, epsilon);
    } else if (minT <= tRightMid) {
        return closestTimeSubdivision(curve, pos, tLeftMid, tRightMid, depth + 1, maxDepth, epsilon);
    } else {
        return closestTimeSubdivision(curve, pos, tMid, tEnd, depth + 1, maxDepth, epsilon);
    }
}


float closestTimeIntervalAnalysis(const BSpline& curve, const Vector3& pos, float tolerance = 0.001f) {
    float lowerBound = 0.0f;
    float upperBound = 1.0f;
    float closestTime = 0.0f;
    float closestDistance = std::numeric_limits<float>::max();

    while ((upperBound - lowerBound) > tolerance) {
        float mid = (lowerBound + upperBound) / 2.0f;
        float interval = (upperBound - lowerBound) / 4.0f;

        // Sample the curve at the mid-point and quarter points within the current interval
        std::vector<float> sampleTimes = {lowerBound, lowerBound + interval, mid, upperBound - interval, upperBound};
        for (float t : sampleTimes) {
            Vector3 samplePoint = curve.getPoint(t);
            float distance = (samplePoint - pos).norm2(); // Using squared distance to avoid sqrt computation

            if (distance < closestDistance) {
                closestDistance = distance;
                closestTime = t;
            }
        }

        // Narrow down the interval to the one containing the closestTime
        if (closestTime <= mid) {
            upperBound = mid;
        } else {
            lowerBound = mid;
        }
    }

    return closestTime;
}


struct KDNode {
    Vector3 point;
    float t; // parameter t corresponding to the point on the spline
    std::unique_ptr<KDNode> left;
    std::unique_ptr<KDNode> right;
    int axis;

    KDNode(const Vector3& pt, float param, int ax)
        : point(pt), t(param), axis(ax), left(nullptr), right(nullptr) {}
};

class KDTree {
private:
    std::unique_ptr<KDNode> root;

    std::unique_ptr<KDNode> insert(std::unique_ptr<KDNode> node, const Vector3& point, float t, int depth) {
        if (!node) {
            return std::make_unique<KDNode>(point, t, depth % 3);
        }

        int axis = depth % 3;
        if (point[axis] < node->point[axis]) {
            node->left = insert(std::move(node->left), point, t, depth + 1);
        } else {
            node->right = insert(std::move(node->right), point, t, depth + 1);
        }

        return node;
    }

    void nearest(const KDNode* node, const Vector3& point, float& bestDist, float& bestT, int depth) const {
        if (!node) return;

        float d = (node->point - point).norm2();
        if (d < bestDist) {
            bestDist = d;
            bestT = node->t;
        }

        int axis = depth % 3;
        float delta = point[axis] - node->point[axis];
        float delta2 = delta * delta;

        const KDNode* near = delta < 0 ? node->left.get() : node->right.get();
        const KDNode* far = delta < 0 ? node->right.get() : node->left.get();

        nearest(near, point, bestDist, bestT, depth + 1);

        // if there might be a closer point on the other side of the splitting plane
        if (delta2 < bestDist) {
            nearest(far, point, bestDist, bestT, depth + 1);
        }
    }

public:
    void insert(const Vector3& point, float t) {
        root = insert(std::move(root), point, t, 0);
    }

    float nearest(const Vector3& point) const {
        float bestDist = std::numeric_limits<float>::max();
        float bestT = -1;
        nearest(root.get(), point, bestDist, bestT, 0);
        return bestT;
    }
};

float closestTimeSpatialIndex(const BSpline& curve, const Vector3& pos, int initialSamples = 100, float refinementThreshold = 0.001f) {
    // Create the spatial index
    KDTree index;

    // Sample the curve at regular intervals and add the points to the index
    for (int i = 0; i <= initialSamples; ++i) {
        float t = i / static_cast<float>(initialSamples);
        Vector3 point = curve.getPoint(t);
        index.insert(point, t);
    }

    return index.nearest(pos);
}*/

float BSpline::estimateClosestTime(const Vector3& pos, float initialEpsilon, float nbChecksFactor, float earlyExitThreshold) const
{
    if (this->points.size() == 0) {
        return 0;
    } else if (this->points.size() == 1) {
        return 0;
    } else if (this->points.size() == 2) {
        Vector3 line = (this->points[1] - this->points[0]);
        float time = clamp((pos - this->points[0]).dot(line) / line.dot(line), 0.f, 1.f);
        return time;
    }

    float closestTime = 0.0f;
    float minDistance = std::numeric_limits<float>::max();
    int numberOfChecks = int(this->points.size() * nbChecksFactor);
    float precisionFactor = 1.0f / numberOfChecks;
    float precision = precisionFactor;
    float searchRangeMin = 0.0f;

    float epsilon = initialEpsilon;


    while (precision > epsilon) {
        for (int i = 0; i < numberOfChecks + 1; i++) {
            float time = searchRangeMin + (i * precision); // std::clamp(searchRangeMin + (i * precision), 0.f, 1.f);
            float distance = (getPoint(time) - pos).norm2();
            if (distance < minDistance) {
                minDistance = distance;
                closestTime = time;
            }
        }
//        if (minDistance < earlyExitThreshold)
//            return closestTime;
        searchRangeMin = closestTime - precision/2.f; //clamp(closestTime - precision/2.f, 0.f, 1.f);
        precision *= precisionFactor;
    }

    // Second method: get distance to bspline points directly, return closest
    // This works only because the BSpline go through all the points.
    for (int i = 0; i < this->size(); i++) {
        float dist = (this->points[i] - pos).norm2();
        if (dist < minDistance) {
            minDistance = dist;
            closestTime = float(i) / float(this->size() - 1);
        }
    }
    return closestTime;
}

Vector3 BSpline::estimateClosestPos(const Vector3& pos, bool useNativeShape, float epsilon) const
{
    if (useNativeShape) {
        float minDist = std::numeric_limits<float>::max();
        int minIndex = 0;
        for (int i = 0; i < this->size() - 1; i++) {
            float dist = (pos - Collision::projectPointOnSegment(pos, points[i], points[i + 1])).norm2();
            if (dist < minDist) {
                minDist = dist;
                minIndex = i;
            }
        }

        // recompute t on the closest segment
        Vector3 startToPoint = pos - points[minIndex];
        Vector3 segment = points[minIndex + 1] - points[minIndex];
        float lengthSqr = segment.norm2();
        float t = (lengthSqr != 0 ? clamp(startToPoint.dot(segment) / lengthSqr, 0.f, 1.f) : 0.f);
        // if (t > 1) std::cout << "Too big" << std::endl;
        return points[minIndex] + t * segment;
//        return (float(i) + t) / float(this->size());
    }
    // "Pos epsilon" is in term of distance [0, inf], while "Time epsilon" is in term of time [0, 1]
    return this->getPoint(this->estimateClosestTime(pos, epsilon / this->length()));
}

float BSpline::estimateSqrDistanceFrom(const Vector3& pos, bool useNativeShape, float epsilon) const
{
    return (this->estimateClosestPos(pos, useNativeShape, epsilon) - pos).norm2();
}
float BSpline::estimateDistanceFrom(const Vector3& pos, bool useNativeShape, float epsilon) const
{
    return std::sqrt(this->estimateSqrDistanceFrom(pos, useNativeShape, epsilon));
}

float BSpline::estimateSignedDistanceFrom(const Vector3& pos, bool useNativeShape, float epsilon) const
{
    // Only available for 2D paths, otherwise there's no sense
    float t = this->estimateClosestTime(pos, epsilon);
    Vector3 normal = this->getNormal(t);
    Vector3 posOnCurve = this->getPoint(t);
    float dist = (posOnCurve - pos).norm();
    float sign = (normal.dot(posOnCurve - pos) > 0.f ? 1.f : -1.f);
    return dist * sign;
}

float BSpline::length() const
{
    float length = 0;
    if (this->points.empty()) return length;
    for (size_t i = 0; i < this->points.size() - 1; i++) {
        length += (this->points[i] - this->points[i + 1]).norm();
    }
    return length;
}

BSpline BSpline::smooth(float factor) const
{
    BSpline newCurve = *this;
    for (int i = 0; i < this->size(); i++) {
        if (i == 0 || i == this->size() - 1) continue;

        newCurve[i] = (*this)[i] - factor * ((*this)[i] - ((*this)[i+1] + (*this)[i-1]) * .5f);
    }
    return newCurve;
}

BSpline BSpline::taubinSmooth(float factor) const
{
    auto initCurve = *this;
    auto newCurve = *this;
    for (int i = 1; i < initCurve.size() - 1; i++) {
        newCurve[i] = initCurve[i] - factor * (initCurve[i] - (initCurve[i+1] + initCurve[i-1]) * .5f).normalized();
    }
    initCurve = newCurve;
    for (int i = 1; i < newCurve.size() - 1; i++) {
        initCurve[i] = newCurve[i] + factor * (newCurve[i] - (newCurve[i+1] + newCurve[i-1]) * .5f).normalized();
    }
    return initCurve;
}

BSpline& BSpline::setPoint(int i, const Vector3 &newPos)
{
    this->points[(i + this->size()) % this->size()] = newPos;
    return *this;
}

BSpline& BSpline::resamplePoints(int newNbPoints)
{
    this->cleanPoints();
    if (this->size() == 0) return *this;
    if (newNbPoints < 0)
        newNbPoints = this->points.size();

    std::vector<Vector3> newPoints; //(newNbPoints);

    float totalLength = this->length();

    if (totalLength == 0) {
        this->points = std::vector<Vector3>(newNbPoints, this->points[0]);
        return *this;
    }
    float currentDistance = 0.f;
    int currentPointIndex = 0;
    Vector3 currentPos = points[currentPointIndex];
    float nextObjectiveDistance = totalLength / float(newNbPoints - 1);

    newPoints.push_back(this->points.front());

    while (int(newPoints.size()) < newNbPoints - 1) {
        auto& p1 = points[currentPointIndex + 1];

        float edgeDist = (p1 - currentPos).norm();
        if (currentDistance + edgeDist > nextObjectiveDistance) {
            float t = (nextObjectiveDistance - currentDistance) / edgeDist;
            newPoints.push_back(lerp(t, currentPos, p1));
//            currentDistance += t * edgeDist;
            currentDistance = 0;
            currentPos = newPoints.back();
        } else {
            currentDistance += edgeDist;
            currentPointIndex ++;
            currentPos = p1;
        }
    }
    newPoints.push_back(this->points.back());
    this->points = newPoints;
    return *this;
}

std::tuple<Vector3, Vector3, Vector3> BSpline::getFrenetFrame(float x) const
{
    return {getFrenetDirection(x), getFrenetNormal(x), getFrenetBinormal(x)};
}

Vector3 BSpline::getFrenetDirection(float x) const
{
    return getDirection(x);
}

Vector3 BSpline::getFrenetNormal(float x) const
{
    Vector3 new_dir = this->getFrenetDirection(x);
    Vector3 forward(0, 1, 0);
    Vector3 up(0, 0, 1);
    Vector3 right(1, 0, 0);
    if (!new_dir.isAlmostVertical())
        right = Vector3(0, 0, 1).cross(new_dir);
    else
        right = Vector3(0, 0.01, 1).cross(new_dir);
    return right.normalize();
}

Vector3 BSpline::getFrenetBinormal(float x) const
{
    return this->getFrenetDirection(x).cross(this->getFrenetNormal(x)).normalize();
}

Vector3 BSpline::getCenterCircle(float x) const
{
    return this->getPoint(x) + this->getNormal(x) * (1 / this->getCurvature(x));
}

Vector3 BSpline::getDirection(float x) const
{
    return this->getDerivative(x, true);
}

Vector3 BSpline::getNormal(float x) const
{
    return this->getSecondDerivative(x, true);
}

Vector3 BSpline::getBinormal(float x) const
{
    return this->getDirection(x).cross(this->getNormal(x)).normalize();
}

float BSpline::getCurvature(float x) const
{
    return (getDerivative(x).cross(getSecondDerivative(x))).norm() / (std::pow(getDerivative(x).norm(), 3));
}

Vector3 BSpline::center() const
{
    if (this->points.empty()) return Vector3();

    BSpline copy = *this;
    copy.removeDuplicates();
    Vector3 center;
    for (const auto& point : copy.points)
        center += point;
    return center / (float) copy.points.size();
}

BSpline& BSpline::close()
{
    if (this->points.size() > 1 && !this->closed) { // && this->points.front() != this->points.back()) {
        this->closed = true;
    }
    return *this;
}

BSpline &BSpline::cleanPoints()
{
    for (int i = this->size() - 1; i >= 0; i--) {
        if (!this->points[i].isValid()) this->points.erase(this->points.begin() + i);
    }
    return *this;
}

float CatmullNextT(const Vector3& P0, const Vector3& P1, float t_prev, float alpha)
{
    float norm = std::max(1e-2f, (P0 - P1).norm2());
    return std::pow(norm, alpha) + t_prev;
}
template <class T>
T map(T x, T prev_min, T prev_max, T new_min, T new_max)
{
    return ((x - prev_min) / (prev_max - prev_min)) * (new_max - new_min) + new_min;
}

Vector3 BSpline::getCatmullPoint(float x, float alpha) const
{
    Vector3 v = std::get<0>(this->pointAndDerivativeAndSecondDerivative(x));
    return v;
    /*
    alpha /= 2.f;

    std::vector<Vector3> displayedPoints = this->points;
    if (this->closed)
        displayedPoints.push_back(displayedPoints.front());

    size_t lastPointIndex = displayedPoints.size() - 1;
    size_t nbPoints = displayedPoints.size(); // + (this->closed ? 1 : 0);

    if (x == 0.f) return displayedPoints[0];
    if (x == 1.f) return displayedPoints[lastPointIndex];


    float res = 1 / (float)(nbPoints - 1);
    int iFloor = int(x / res);
    int iCeil = int(x / res) + 1;
    float resFloor = iFloor * res;
    float resCeil = iCeil * res;
    float x_prime = map(x, resFloor, resCeil, 0.f, 1.f);

    Vector3 P0 = displayedPoints[(iFloor == 0 ? (this->closed ? int(nbPoints-2) : 1) : iFloor - 1)];
    Vector3 P1 = displayedPoints[iFloor - 0];
    Vector3 P2 = displayedPoints[iCeil + 0];
    Vector3 P3 = displayedPoints[(iCeil >= int(nbPoints-1) ? (this->closed ? 1 : displayedPoints.size()-2) : iCeil + 1)];

    float t0 = 0;
    float t1 = CatmullNextT(P0, P1, t0, alpha);
    float t2 = CatmullNextT(P1, P2, t1, alpha);
    float t3 = CatmullNextT(P2, P3, t2, alpha);

    float t = map(x_prime, 0.f, 1.f, t1, t2);

    Vector3 A1 = P0 * (t1 - t) / (t1 - t0) + P1 * (t - t0) / (t1 - t0);
    Vector3 A2 = P1 * (t2 - t) / (t2 - t1) + P2 * (t - t1) / (t2 - t1);
    Vector3 A3 = P2 * (t3 - t) / (t3 - t2) + P3 * (t - t2) / (t3 - t2);

    Vector3 B1 = A1 * (t2 - t) / (t2 - t0) + A2 * (t - t0) / (t2 - t0);
    Vector3 B2 = A2 * (t3 - t) / (t3 - t1) + A3 * (t - t1) / (t3 - t1);

    Vector3 C  = B1 * (t2 - t) / (t2 - t1) + B2 * (t - t1) / (t2 - t1);
    return C;
    */
}

BSpline BSpline::simplifyByRamerDouglasPeucker(float epsilon, BSpline subspline)
{
    if (subspline.points.empty()) {
        if (this->points.empty()) return *this; // We are just trying to do a simplification from an empty curve, that's pointless
        else subspline = *this;
    }
    if (subspline.points.size() == 1) return subspline;

    // Find farest point from the line going from start to end of this (sub)spline
    Vector3 vecAB = (subspline.points.front() - subspline.points.back()).normalized();
    float maxDist = 0;
    int index = -1;
    for (size_t i = 1; i < subspline.points.size() - 1; i++) {
        float d = vecAB.cross((subspline.points[i] - subspline.points.front())).norm2();
        if (d > maxDist) {
            maxDist = d;
            index = i;
        }
    }
    // Now we split the spline in two subsplines, and apply recursively the algorithm until all points are "close" enough ( dist < epsilon)
    BSpline returningSpline;
    if (maxDist > epsilon * epsilon) {
        BSpline sub1 = this->simplifyByRamerDouglasPeucker(epsilon, std::vector<Vector3>(subspline.points.begin(), subspline.points.begin() + index));
        BSpline sub2 = this->simplifyByRamerDouglasPeucker(epsilon, std::vector<Vector3>(subspline.points.begin() + index, subspline.points.end()));
        returningSpline = BSpline({sub1, sub2});
    } else {
        returningSpline.points = {subspline.points.front(), subspline.points.back()};
    }
    return returningSpline;
}

std::tuple<Vector3, Vector3> BSpline::AABBox() const
{
    if (this->points.empty()) return std::make_tuple(Vector3(), Vector3());
    if (this->points.size() == 1) return std::make_tuple(points[0], points[0]);

    float minDim = std::numeric_limits<float>::lowest();
    float maxDim = std::numeric_limits<float>::max();
    Vector3 minVec = Vector3(maxDim, maxDim, maxDim),
            maxVec = Vector3(minDim, minDim, minDim);
    for (const auto& point : points) {
        minVec.x = std::min(point.x, minVec.x);
        minVec.y = std::min(point.y, minVec.y);
        minVec.z = std::min(point.z, minVec.z);
        maxVec.x = std::max(point.x, maxVec.x);
        maxVec.y = std::max(point.y, maxVec.y);
        maxVec.z = std::max(point.z, maxVec.z);
    }
    return std::make_tuple(minVec, maxVec);
}

Vector3 BSpline::containingBoxSize() const
{
    Vector3 minBox, maxBox;
    std::tie(minBox, maxBox) = this->AABBox();
    return (maxBox - minBox);
}

BSpline &BSpline::scale(float factor)
{
    return this->scale(Vector3(factor, factor, factor));
}

BSpline &BSpline::scale(const Vector3 &factor)
{
    for (auto& vert : this->points)
        vert *= factor;
    return *this;
}

BSpline BSpline::computeConvexHull() const
{
    if (this->points.empty()) return BSpline();
    // Graham scan's algorithm
    std::vector<Vector3> stack;
    Vector3 start = this->points[0];
    // Get point with lowest Y (and lowest X in case of tie)
    for (size_t i = 0; i < this->points.size(); i++) {
        Vector3 p = points[i];
        if (p.y < start.y || (p.y == start.y && p.x < start.x)) {
            start = p;
        }
    }
    // Sort points by the minimum angle from the "starting point"
    std::map<float, Vector3> points_angle;
    for (size_t i = 0; i < this->points.size(); i++) {
        Vector3 dir = (points[i] - start).normalize();
        if (dir == Vector3()) continue; // Ignore the starting point
        float angle = -dir.x; // Sort from "most right" to "more left"
        if (points_angle.count(angle) == 0 || ((points_angle[angle] - start).norm2() < (points[i] - start).norm2())) {
            points_angle[angle] = points[i];
        }
    }
    // Add the starting point on the stack
    stack.push_back(start);
    // Iterate over all the points:
    while (points_angle.begin() != points_angle.end()) {
        // Remove the points from the stack if they create a "left turn"
        // This can be checked if the Z component of (P1-P0).cross(P2-P0) <= 0
        // With P0 the current point, P1 the top of stack and P2 the second top
        while(stack.size() > 1 && ((stack[stack.size() - 1] - stack[stack.size() - 2]).cross((points_angle.begin()->second - stack[stack.size() - 2])).z <= 0)) {
            stack.pop_back();
        }
        // Add the point at the end of the stack
        stack.push_back(points_angle.begin()->second);
        points_angle.erase(points_angle.begin());
    }
    return stack;
}

BSpline &BSpline::translate(const Vector3& translation)
{
    for (auto& point : points)
        point += translation;
    return *this;
}

std::vector<std::pair<size_t, size_t> > BSpline::checkAutointersections() const
{
    auto self = *this;
    float spacingHeuristic = 1.0f;
    float selfSpacing = self.length() / float(self.size() - 1);
    if (selfSpacing < spacingHeuristic)
        self.scale(spacingHeuristic / selfSpacing);
    std::vector<std::pair<size_t, size_t> > results;
    int s = size();
    #pragma omp parallel for collapse(2)
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            int i00 = i;
            int i01 = (i00 + 1) % s;
            int i10 = (j + i + 2) % s;
            int i11 = (i10 + 1) % s;

            if (i10 <= i00 || i11 == i00 || i01 == i10 || (!closed && i11 <= i00)) continue;

            Vector3 intersection = Collision::intersectionBetweenTwoSegments(self[i00], self[i01], self[i10], self[i11], 1e-6);

            if (intersection.isValid()) {
                #pragma omp critical
                {
                    results.push_back({i00, i10});
                }
            }
        }
    }
    return results;
}

BSpline &BSpline::displacePointsRandomly(float maxDistance)
{
    /*std::vector<Vector3> newPoints(this->size());
    for (int i = 0; i < this->size(); i++) {
        newPoints[i] = points[i] + this->getNormal(float(i) / float(this->size())) * random_gen::generate(-maxDistance, maxDistance);
    }
    this->points = newPoints;
    return *this;*/
    return this->displacePointsRandomly(Vector3(maxDistance, maxDistance, maxDistance));
}

BSpline &BSpline::displacePointsRandomly(const Vector3 &maxDistance)
{
    std::vector<Vector3> newPoints(this->size());
    for (int i = 0; i < this->size(); i++) {
        float x = float(i) / float(this->size());
        auto [pos, dir, normal] = this->pointAndDerivativeAndSecondDerivative(x);
        Vector3 binormal = this->getBinormal(x).normalized();
        dir.normalize();
        normal.normalize();
        newPoints[i] = points[i] + (dir * random_gen::generate(-1, 1) * maxDistance.x) + (normal * random_gen::generate(-1, 1) * maxDistance.y) + (binormal * random_gen::generate(-1, 1) * maxDistance.z);
    }
    this->points = newPoints;
    return *this;
}

BSpline &BSpline::displacePointsRandomlyPerlin(float maxDistance, float scale, bool loop)
{
    return this->displacePointsRandomlyPerlin(Vector3(maxDistance, maxDistance, maxDistance), scale, loop);
}

BSpline &BSpline::displacePointsRandomlyPerlin(const Vector3& maxDistance, float scale, bool loop)
{
    std::vector<Vector3> newPoints(this->size());
    for (int i = 0; i < this->size(); i++) {
        float x = float(i) / float(this->size());
        auto [pos, dir, normal] = this->pointAndDerivativeAndSecondDerivative(x);
        Vector3 binormal = this->getBinormal(x).normalized();
        dir.normalize();
        normal.normalize();
        newPoints[i] = points[i] + (dir * random_gen::generate_perlin(points[i].x * scale, points[i].y * scale, points[i].z * scale + (!loop ? 10 * i : 0)) * maxDistance.x) + (normal * random_gen::generate_perlin(100 + points[i].x * scale, points[i].y * scale, points[i].z * scale + (!loop ? 10 * i : 0)) * maxDistance.y) + (binormal * random_gen::generate_perlin(points[i].x * scale, 100 + points[i].y * scale, points[i].z * scale + (!loop ? 10 * i : 0)) * maxDistance.z);
    }
    this->points = newPoints;
    return *this;
}

BSpline& BSpline::removeDuplicates()
{
    std::vector<Vector3> newPoints;
    for (const auto& point : this->points) {
        if (newPoints.empty() || (point - newPoints.back()).norm() > 0.001f)
            newPoints.push_back(point);
    }
    this->points = newPoints;
    return *this;
}

std::string BSpline::toString() const
{
    std::ostringstream out;
    out << "BSpline with " << this->points.size() << " points (" << (closed ? "closed" : "not closed") << ") :\n";
    for (auto& p : this->points)
        out << "- " << p << "\n";
    return out.str();
}

Vector3 &BSpline::operator[](size_t i)
{
    return this->points[(i + size()) % size()];
}

std::string BSpline::display1DPlot(int sizeX, int sizeY) const
{
    std::ostringstream oss;
    BSpline translated = *this;
    std::vector<Vector3> roundedPositions(translated.size());
    auto [mini, maxi] = AABBox();
    for (auto& p : translated) {
        p = (p - mini) / (maxi - mini); // between (0, 0) and (1, 1)
        p.y = 1.f - p.y;
        p *= Vector3(sizeX, sizeY);
        roundedPositions.push_back(p.roundedDown());
    }

    for (int y = 0; y < sizeY; y++) {
        if (y == 0) oss << std::fixed << std::setprecision(2) << maxi.y << "|";
        else if (y == sizeY - 1) oss << std::fixed << std::setprecision(2) << mini.y << "|";
        else oss << "    |";
        for (int x = 0; x < sizeX; x++) {
            Vector3 pos(x, y);
            if (isIn(pos, roundedPositions)) {
                oss << "X";
            } else {
                float dist = translated.estimateSqrDistanceFrom(pos);
                oss << (dist < 2 * 2 ? "#" : (dist < 4 * 4 ? "+" : "-"));
            }
        }
        oss << std::endl;
    }
    oss << std::fixed << std::setprecision(2) << "   " << mini.x;
    for (int x = 0; x < sizeX - 4; x++) oss << " ";
    oss << std::fixed << std::setprecision(2) << maxi.x;

    return oss.str();
}

Vector3 BSpline::computeDerivative(float x, float alpha) const
{
    alpha /= 2.f;

    std::vector<Vector3> displayedPoints = this->points;
    if (this->closed)
        displayedPoints.push_back(displayedPoints.front());

    size_t lastPointIndex = displayedPoints.size() - 1;
    size_t nbPoints = displayedPoints.size(); // + (this->closed ? 1 : 0);

    float res = 1 / (float)(nbPoints - 1);
    int iFloor = int(x / res);
    int iCeil = int(x / res) + 1;
    float resFloor = iFloor * res;
    float resCeil = iCeil * res;
    float x_prime = map(x, resFloor, resCeil, 0.f, 1.f);

    Vector3 P0 = displayedPoints[(iFloor == 0 ? (this->closed ? int(nbPoints-2) : 1) : iFloor - 1)];
    Vector3 P1 = displayedPoints[iFloor - 0];
    Vector3 P2 = displayedPoints[iCeil + 0];
    Vector3 P3 = displayedPoints[(iCeil >= int(nbPoints-1) ? (this->closed ? 1 : displayedPoints.size()-2) : iCeil + 1)];

    float t0 = 0;
    float t1 = CatmullNextT(P0, P1, t0, alpha);
    float t2 = CatmullNextT(P1, P2, t1, alpha);
    float t3 = CatmullNextT(P2, P3, t2, alpha);

    float t = map(x_prime, 0.f, 1.f, t1, t2);


    Vector3 A1 = P0 * (t1 - t) / (t1 - t0) + P1 * (t - t0) / (t1 - t0);
    Vector3 A2 = P1 * (t2 - t) / (t2 - t1) + P2 * (t - t1) / (t2 - t1);
    Vector3 A3 = P2 * (t3 - t) / (t3 - t2) + P3 * (t - t2) / (t3 - t2);

    Vector3 B1 = A1 * (t2 - t) / (t2 - t0) + A2 * (t - t0) / (t2 - t0);
    Vector3 B2 = A2 * (t3 - t) / (t3 - t1) + A3 * (t - t1) / (t3 - t1);

    Vector3 A1_prim = (P1 - P0) / (t1 - t0);
    Vector3 A2_prim = (P2 - P1) / (t2 - t1);
    Vector3 A3_prim = (P3 - P2) / (t3 - t2);

    Vector3 B1_prim = (A2 - A1) / (t2 - t0) + ((t2 - t) / (t2 - t0)) * A1_prim + ((t - t0) / (t2 - t0)) * A2_prim;
    Vector3 B2_prim = (A3 - A2) / (t3 - t1) + ((t3 - t) / (t3 - t1)) * A2_prim + ((t - t1) / (t3 - t1)) * A3_prim;

    Vector3 C_prim  = (B2 - B1) / (t2 - t1) + ((t2 - t) / (t2 - t1)) * B1_prim + ((t - t1) / (t2 - t1)) * B2_prim;
    return C_prim;
}

std::pair<Vector3, Vector3> BSpline::pointAndDerivative(float x, float alpha) const
{
    alpha /= 2.f;

    std::vector<Vector3> displayedPoints = this->points;
    if (this->closed)
        displayedPoints.push_back(displayedPoints.front());

    size_t lastPointIndex = displayedPoints.size() - 1;
    size_t nbPoints = displayedPoints.size(); // + (this->closed ? 1 : 0);

    if (nbPoints == 0) return {Vector3::invalid(), Vector3::invalid()};
    else if (nbPoints == 1) return {displayedPoints[0], Vector3::invalid()};
    else if (nbPoints == 2) return {displayedPoints[0] * (1.f - x) + displayedPoints[1] * x, displayedPoints[1] - displayedPoints[0]};

    float res = 1 / (float)(nbPoints - 1);
    int iFloor = int(x / res);
    int iCeil = int(x / res) + 1;
    float resFloor = iFloor * res;
    float resCeil = iCeil * res;
    float x_prime = map(x, resFloor, resCeil, 0.f, 1.f);

    Vector3 P0 = displayedPoints[(iFloor == 0 ? (this->closed ? int(nbPoints-2) : 1) : iFloor - 1)];
    Vector3 P1 = displayedPoints[iFloor - 0];
    Vector3 P2 = displayedPoints[iCeil + 0];
    Vector3 P3 = displayedPoints[(iCeil >= int(nbPoints-1) ? (this->closed ? 1 : displayedPoints.size()-2) : iCeil + 1)];

    float t0 = 0;
    float t1 = CatmullNextT(P0, P1, t0, alpha);
    float t2 = CatmullNextT(P1, P2, t1, alpha);
    float t3 = CatmullNextT(P2, P3, t2, alpha);

    float t = map(x_prime, 0.f, 1.f, t1, t2);


    Vector3 A1 = P0 * (t1 - t) / (t1 - t0) + P1 * (t - t0) / (t1 - t0);
    Vector3 A2 = P1 * (t2 - t) / (t2 - t1) + P2 * (t - t1) / (t2 - t1);
    Vector3 A3 = P2 * (t3 - t) / (t3 - t2) + P3 * (t - t2) / (t3 - t2);

    Vector3 B1 = A1 * (t2 - t) / (t2 - t0) + A2 * (t - t0) / (t2 - t0);
    Vector3 B2 = A2 * (t3 - t) / (t3 - t1) + A3 * (t - t1) / (t3 - t1);

    Vector3 C  = B1 * (t2 - t) / (t2 - t1) + B2 * (t - t1) / (t2 - t1);

    Vector3 A1_prim = (P1 - P0) / (t1 - t0);
    Vector3 A2_prim = (P2 - P1) / (t2 - t1);
    Vector3 A3_prim = (P3 - P2) / (t3 - t2);

    Vector3 B1_prim = (A2 - A1) / (t2 - t0) + ((t2 - t) / (t2 - t0)) * A1_prim + ((t - t0) / (t2 - t0)) * A2_prim;
    Vector3 B2_prim = (A3 - A2) / (t3 - t1) + ((t3 - t) / (t3 - t1)) * A2_prim + ((t - t1) / (t3 - t1)) * A3_prim;

    Vector3 C_prim  = (B2 - B1) / (t2 - t1) + ((t2 - t) / (t2 - t1)) * B1_prim + ((t - t1) / (t2 - t1)) * B2_prim;
    return {C, C_prim};
}

std::tuple<Vector3, Vector3, Vector3> BSpline::pointAndDerivativeAndSecondDerivative(float x, float alpha) const
{
    // This is incredibly dirty!!!!
    x = std::clamp(x, 0.0001f, 0.9999f);


    alpha /= 2.f;

    std::vector<Vector3> displayedPoints = this->points;
    if (this->closed)
        displayedPoints.push_back(displayedPoints.front());

    size_t lastPointIndex = displayedPoints.size() - 1;
    size_t nbPoints = displayedPoints.size(); // + (this->closed ? 1 : 0);

    if (nbPoints == 0) return {Vector3::invalid(), Vector3::invalid(), Vector3::invalid()};
    else if (nbPoints == 1) return {displayedPoints[0], Vector3::invalid(), Vector3::invalid()};
    else if (nbPoints == 2) return {displayedPoints[0] * (1.f - x) + displayedPoints[1] * x, displayedPoints[1] - displayedPoints[0], Vector3(0, 0, 0)};

    float res = 1 / (float)(nbPoints - 1);
    int iFloor = int(x / res);
    int iCeil = int(x / res) + 1;
    float resFloor = iFloor * res;
    float resCeil = iCeil * res;
    float x_prime = map(x, resFloor, resCeil, 0.f, 1.f);

    const Vector3 P0 = displayedPoints[(iFloor == 0 ? (this->closed ? int(nbPoints-2) : 1) : iFloor - 1)];
    const Vector3 P1 = displayedPoints[iFloor - 0];
    const Vector3 P2 = displayedPoints[iCeil + 0];
    const Vector3 P3 = displayedPoints[(iCeil >= int(nbPoints-1) ? (this->closed ? 1 : displayedPoints.size()-2) : iCeil + 1)];

    float t0 = 0;
    float t1 = CatmullNextT(P0, P1, t0, alpha);
    float t2 = CatmullNextT(P1, P2, t1, alpha);
    float t3 = CatmullNextT(P2, P3, t2, alpha);

    float t = map(x_prime, 0.f, 1.f, t1, t2);


    const Vector3 A1 = P0 * (t1 - t) / (t1 - t0) + P1 * (t - t0) / (t1 - t0);
    const Vector3 A2 = P1 * (t2 - t) / (t2 - t1) + P2 * (t - t1) / (t2 - t1);
    const Vector3 A3 = P2 * (t3 - t) / (t3 - t2) + P3 * (t - t2) / (t3 - t2);

    const Vector3 B1 = A1 * (t2 - t) / (t2 - t0) + A2 * (t - t0) / (t2 - t0);
    const Vector3 B2 = A2 * (t3 - t) / (t3 - t1) + A3 * (t - t1) / (t3 - t1);

    const Vector3 C  = B1 * (t2 - t) / (t2 - t1) + B2 * (t - t1) / (t2 - t1);

    const Vector3 A1p = (P1 - P0) / (t1 - t0);
    const Vector3 A2p = (P2 - P1) / (t2 - t1);
    const Vector3 A3p = (P3 - P2) / (t3 - t2);

    const Vector3 B1p = (A2 - A1) / (t2 - t0) + ((t2 - t) / (t2 - t0)) * A1p + ((t - t0) / (t2 - t0)) * A2p;
    const Vector3 B2p = (A3 - A2) / (t3 - t1) + ((t3 - t) / (t3 - t1)) * A2p + ((t - t1) / (t3 - t1)) * A3p;

    const Vector3 Cp  = (B2 - B1) / (t2 - t1) + ((t2 - t) / (t2 - t1)) * B1p + ((t - t1) / (t2 - t1)) * B2p;

    const Vector3 B1pp = 2.f * (A2p - A1p) / (t2 - t0);
    const Vector3 B2pp = 2.f * (A3p - A2p) / (t3 - t1);

    const Vector3 Cpp = (B1pp * (t2 - t) + B2pp * (t - t1) + 2.f * (B2p - B1p)) / (t2 - t1);

    return {C, Cp, Cpp};
}
const Vector3 &BSpline::operator[](size_t i) const
{
    return this->points[(i + size()) % size()];
}

std::ostream& operator<<(std::ostream& io, const BSpline& s) {
    io << s.toString();
    return io;
}

std::ostream& operator<<(std::ostream& io, std::shared_ptr<BSpline> s) {
    io << s->toString();
    return io;
}


nlohmann::json bspline_to_json(const BSpline& spline) {
    std::vector<nlohmann::json> points;
    for (const auto& p : spline) {
        points.push_back(vec3_to_json(p));
    }
    return nlohmann::json({
                              {"points", points},
                              {"closed", spline.closed}
                          });
}
BSpline json_to_bspline(nlohmann::json json) {
    BSpline spline;
    for (auto& point : json.at("points"))
        spline.points.push_back(json_to_vec3(point));
    if (json.at("closed").get<bool>())
        spline.close();
    return spline;
}
