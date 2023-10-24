#ifndef FLUIDSYSTEM_H
#define FLUIDSYSTEM_H

#include <functional>

#include "vectorfield.h"

// Adapted from Jos Stam's Stable Fluids method
// https://d2f99xq7vri1nk.cloudfront.net/legacy_app_files/pdf/GDC03.pdf

typedef VectorField<0, 3> DyeField;
typedef VectorField<3, 3> VelocityField;

class FluidSystem
{
public:
    FluidSystem(FlowGrid::Index width = 40, FlowGrid::Index height = 40, FlowGrid::Index depth = 5,
                Scalar diffusionConstant = 0, Scalar viscosity = 0);

    // Grid dimensions
    const Indices dim, staggeredDim;
    const TensorIndices fullDim, fullStaggeredDim;

    Scalar diffusionConstant;
    Scalar viscosity;

    DyeField density;
    VelocityField velocity;

    bool horizontalNeumann = true;
    bool verticalNeumann = true;

    void step(const DyeField &addedDensity, const VelocityField &addedVelocity,
              Scalar dt);

    void clear();

private:
    DyeField densityPrev;
    VelocityField velocityPrev;

    void stepDensity(Scalar dt, const DyeField &addedDensity);
    void stepVelocity(Scalar dt, const VelocityField &addedVelocity);

    template<FlowGrid::Index numStaggers, std::size_t numCoords>
    void diffuse(VectorField<numStaggers, numCoords> &out,
                 const VectorField<numStaggers, numCoords> &in,
                 Scalar diffusionConstant, Scalar dt, const Indices &dim,
                 std::array<BoundarySetter, numCoords> setBoundaries) const;
    template<FlowGrid::Index numStaggers, std::size_t numCoords>
    void advect(VectorField<numStaggers, numCoords> &out,
                const VectorField<numStaggers, numCoords> &in,
                const VelocityField &velocity, Scalar dt, const Indices &dim,
                std::array<BoundarySetter, numCoords> setBoundaries) const;
    template<FlowGrid::Index numStaggers, std::size_t numCoords>
    void backtrace(VectorField<numStaggers, numCoords> &out,
                   const VectorField<numStaggers, numCoords> &in,
                   const VelocityField &velocity, Scalar dt, const Indices &dim) const;
    void project(VelocityField &u) const;
};

void grad(VelocityField &out, const FlowGrid &in, const Indices &dim);
void div(FlowGrid &out, const VelocityField &in, const Indices &dim);

#include "fluidsystem.tpp"

#endif // FLUIDSYSTEM_H
