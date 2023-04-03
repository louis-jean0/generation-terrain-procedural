#include "DataStructure/Voxel.h"

//#include "Graphics/MarchingCubes.h"
/*
std::vector<std::set<int>> Voxel::voxelGroups;
int Voxel::currentLabelIndex = 0;
std::unordered_map<TerrainTypes, bool> Voxel::isMatter = {
    {AIR, false},
    {DIRT, true},
    {WATER, false},
    {SAND, true}
};

Voxel::Voxel(int x, int y, int z, TerrainTypes type, float blockSize, float isosurface, std::shared_ptr<VoxelChunk> parent)
    : x(x), y(y), z(z), type(type), blockSize(blockSize), isosurface(isosurface), parent(parent) {

}

Voxel::Voxel() { //: Voxel(0, 0, 0, TerrainTypes::AIR, 1.0, 0.0, nullptr) {

}
void Voxel::addNeighbor(std::shared_ptr<Voxel> neighbor)
{
    if(neighbor == nullptr || !(bool)*neighbor || !(bool)*this)
        return;
    if (this->globalX() < neighbor->globalX()) {
        this->neighbors[RIGHT] = neighbor;
        neighbor->neighbors[LEFT] = this->shared_from_this();
    }
    if (this->globalX() > neighbor->globalX()) {
        this->neighbors[LEFT] = neighbor;
        neighbor->neighbors[RIGHT] = this->shared_from_this();
    }
    if (this->globalY() < neighbor->globalY()) {
        this->neighbors[BACK] = neighbor;
        neighbor->neighbors[FRONT] = this->shared_from_this();
    }
    if (this->globalY() > neighbor->globalY()) {
        this->neighbors[FRONT] = neighbor;
        neighbor->neighbors[BACK] = this->shared_from_this();
    }
    if (this->globalZ() < neighbor->globalZ()) {
        this->neighbors[TOP] = neighbor;
        neighbor->neighbors[BOTTOM] = this->shared_from_this();
    }
    if (this->globalZ() > neighbor->globalZ()) {
        this->neighbors[BOTTOM] = neighbor;
        neighbor->neighbors[TOP] = this->shared_from_this();
    }
    this->shareGroup(neighbor);
}
int Voxel::shareGroup(std::shared_ptr<Voxel> v)
{
    if (this->group == -1)
        this->group = v->group;
    this->group = std::min(this->group, v->group);
    this->isOnGround = this->isOnGround || v->isOnGround;
    return this->group;
}
void Voxel::removeNeighbor(std::shared_ptr<Voxel> neighbor)
{
    if (neighbor == nullptr)
        return;
    if (this->globalX() < neighbor->globalX()) {
        neighbor->neighbors[RIGHT] = nullptr;
        this->neighbors[LEFT] = nullptr;
    }
    if (this->globalX() > neighbor->globalX()) {
        neighbor->neighbors[LEFT] = nullptr;
        this->neighbors[RIGHT] = nullptr;
    }
    if (this->globalY() < neighbor->globalY()) {
        neighbor->neighbors[FRONT] = nullptr;
        this->neighbors[BACK] = nullptr;
    }
    if (this->globalY() > neighbor->globalY()) {
        neighbor->neighbors[BACK] = nullptr;
        this->neighbors[FRONT] = nullptr;
    }
    if (this->globalZ() < neighbor->globalZ()) {
        neighbor->neighbors[BOTTOM] = nullptr;
        this->neighbors[TOP] = nullptr;
    }
    if (this->globalZ() > neighbor->globalZ()) {
        neighbor->neighbors[TOP] = nullptr;
        this->neighbors[BOTTOM] = nullptr;
    }
}
void Voxel::resetNeighbors() {
    this->neighbors[TOP]    = this->parent->parent->getVoxel(this->globalPos() + Vector3( 0,  0,  1) + Vector3(.5, .5, .5));
    this->neighbors[BOTTOM] = this->parent->parent->getVoxel(this->globalPos() + Vector3( 0,  0, -1) + Vector3(.5, .5, .5));
    this->neighbors[RIGHT]  = this->parent->parent->getVoxel(this->globalPos() + Vector3( 1,  0,  0) + Vector3(.5, .5, .5));
    this->neighbors[LEFT]   = this->parent->parent->getVoxel(this->globalPos() + Vector3(-1,  0,  0) + Vector3(.5, .5, .5));
    this->neighbors[FRONT]  = this->parent->parent->getVoxel(this->globalPos() + Vector3( 0, -1,  0) + Vector3(.5, .5, .5));
    this->neighbors[BACK]   = this->parent->parent->getVoxel(this->globalPos() + Vector3( 0,  1,  0) + Vector3(.5, .5, .5));
//    for(std::map<VOXEL_NEIGHBOR, std::shared_ptr<Voxel>>::iterator it = this->neighbors.begin(); it != this->neighbors.end(); it++)
//        removeNeighbor(it->second);
}

float Voxel::getIsosurface() {
    return this->isosurface + this->manual_isosurface;
}
std::ostream& operator<<(std::ostream& io, const Voxel& v)
{
    io << "Voxel (" << v.x << ", " << v.y << ", " << v.z << ")";
    return io;
}
std::ostream& operator<<(std::ostream& io, std::shared_ptr<Voxel> v)
{
    io << "Voxel (" << v->x << ", " << v->y << ", " << v->z << ")";
    return io;
}

bool Voxel::contains(Vector3 v) {
    return this->contains(v.x, v.y, v.z);
}

bool Voxel::contains(float x, float y, float z) {
    return (this->globalX() <= x && x < this->globalX() + 1 && this->globalY() <= y && y < this->globalY() + 1 && this->globalZ() <= z && z < this->globalZ() + 1);
}

float Voxel::globalX()  {
    return this->x + this->parent->x;
}
float Voxel::globalY()  {
    return this->y + this->parent->y;
}
float Voxel::globalZ()  {
    return this->z;
}

std::vector<Vector3> Voxel::getMeshVertices(bool useGlobalCoords)
{
    std::vector<Vector3> vertex;
    if ((bool)*this) {
        // BOTTOM
        if (!this->neighbors[BOTTOM] || !(bool)*this->neighbors[BOTTOM]) {
            vertex.insert(vertex.end(), {Vector3(0, 1, 0), Vector3(1, 1, 0), Vector3(1, 0, 0),  Vector3(0, 0, 0)});
        }

        // RIGHT
        if (!this->neighbors[RIGHT] || !(bool)*this->neighbors[RIGHT]) {
            vertex.insert(vertex.end(), {Vector3(1, 0, 0), Vector3(1, 1, 0), Vector3(1, 1, 1),  Vector3(1, 0, 1)});
        }

        // TOP
        if (!this->neighbors[TOP] || !(bool)*this->neighbors[TOP]) {
            vertex.insert(vertex.end(), {Vector3(1, 0, 1), Vector3(1, 1, 1), Vector3(0, 1, 1),  Vector3(0, 0, 1)});
        }

        // LEFT
        if (!this->neighbors[LEFT] || !(bool)*this->neighbors[LEFT]) {
            vertex.insert(vertex.end(), {Vector3(0, 0, 1), Vector3(0, 1, 1), Vector3(0, 1, 0),  Vector3(0, 0, 0)});
        }

        // FRONT
        if (!this->neighbors[FRONT] || !(bool)*this->neighbors[FRONT]) {
            vertex.insert(vertex.end(), {Vector3(0, 0, 0), Vector3(1, 0, 0), Vector3(1, 0, 1),  Vector3(0, 0, 1)});
        }

        // BACK
        if (!this->neighbors[BACK] || !(bool)*this->neighbors[BACK]) {
            vertex.insert(vertex.end(), {Vector3(0, 1, 0), Vector3(0, 1, 1), Vector3(1, 1, 1),  Vector3(1, 1, 0)});
        }
    }
    Vector3 currentPos = (useGlobalCoords ? globalPos() : localPos());
    for(Vector3& coord : vertex) {
        coord = (currentPos + coord) * this->blockSize;
    }
//    return vertex;
    std::vector<Vector3> returnArray;
    for (size_t i = 0; i < vertex.size(); i+=4)
    {
        returnArray.insert(returnArray.end(), {vertex[i + 2], vertex[i + 1], vertex[i + 0],
                                               vertex[i + 0], vertex[i + 3], vertex[i + 2]});
    }
    return returnArray;
}
*/




/*
std::shared_ptr<Voxel> Voxel::getNeighbor(VOXEL_NEIGHBOR dir)
{
    if(dir == VOXEL_NEIGHBOR::RIGHT) { // X + 1
        if (this->x == this->parent->sizeX - 1) {
            if(this->parent->lastChunkOnX) return nullptr;
            else return this->parent->neighboring_chunks[RIGHT]->voxels[0][this->y][this->z];
        } else {
            return this->parent->voxels[this->x + 1][this->y][this->z];
        }
    }
    else if(dir == VOXEL_NEIGHBOR::LEFT) { // X - 1
        if (this->x == 0) {
            if(this->parent->x == 0) return nullptr;
            else return this->parent->neighboring_chunks[LEFT]->voxels[this->parent->neighboring_chunks[LEFT]->sizeX - 1][this->y][this->z];
        } else {
            return this->parent->voxels[this->x - 1][this->y][this->z];
        }
    }
    else if(dir == VOXEL_NEIGHBOR::BACK) { // Y + 1
        if (this->y == this->parent->sizeY - 1) {
            if(this->parent->lastChunkOnY) return nullptr;
            else return this->parent->neighboring_chunks[BACK]->voxels[this->x][0][this->z];
        } else {
            return this->parent->voxels[this->x][this->y + 1][this->z];
        }
    }
    else if(dir == VOXEL_NEIGHBOR::FRONT) { // Y - 1
        if (this->y == 0) {
            if(this->parent->y == 0) return nullptr;
            else return this->parent->neighboring_chunks[FRONT]->voxels[this->x][this->parent->neighboring_chunks[FRONT]->sizeY - 1][this->z];
        } else {
            return this->parent->voxels[this->x][this->y - 1][this->z];
        }
    }
    else if(dir == VOXEL_NEIGHBOR::TOP) { // Z + 1
        if (this->z == this->parent->height - 1) {
            return nullptr;
//            if(this->parent->lastChunkOnY) return nullptr;
//            else return this->parent->neighboring_chunks[FRONT]->voxels[this->x][0][this->z];
        } else {
            return this->parent->voxels[this->x][this->y][this->z + 1];
        }
    }
    else if(dir == VOXEL_NEIGHBOR::BOTTOM) { // Z - 1
        if (this->z == 0) {
            return nullptr;
//            if(this->parent->y == 0) return nullptr;
//            else return this->parent->neighboring_chunks[BACK]->voxels[this->x][this->parent->neighboring_chunks[BACK]->sizeY - 1][this->z];
        } else {
            return this->parent->voxels[this->x][this->y][this->z - 1];
        }
    }
    return nullptr;
}

void Voxel::InsertNeighborsIfNotOnGround(std::unordered_set<std::shared_ptr<Voxel>>& set) {
    for (int x = this->globalX()-1; x <= this->globalX()+1; x++) {
        for (int y = this->globalY()-1; y <= this->globalY()+1; y++) {
            for (int z = this->globalZ()-1; z <= this->globalZ()+1; z++) {
                std::shared_ptr<Voxel> v = this->parent->parent->getVoxel(x, y, z);
                if(v != nullptr && (bool)*v && !v->isOnGround) {
                    set.insert(v);
                }
            }
        }
    }
}
int Voxel::CountNeighbors() {
    int numberOfNeighbors = 0;
    for (int x = this->globalX()-1; x <= this->globalX()+1; x++) {
        for (int y = this->globalY()-1; y <= this->globalY()+1; y++) {
            for (int z = this->globalZ()-1; z <= this->globalZ()+1; z++) {
                std::shared_ptr<Voxel> v = this->parent->parent->getVoxel(x, y, z);
                if(v != nullptr && (bool)*v) {
                    numberOfNeighbors ++;
                }
            }
        }
    }
    return numberOfNeighbors;
}*/
