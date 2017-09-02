#include "noise.h"

AnlNoise::AnlNoise(): vm(kernel), eb(kernel) {}

void AnlNoise::_bind_methods() {

    using namespace anl;
    BIND_ENUM_CONSTANT(INTERP_NONE);
    BIND_ENUM_CONSTANT(INTERP_LINEAR);
    BIND_ENUM_CONSTANT(INTERP_HERMITE);
    BIND_ENUM_CONSTANT(INTERP_QUINTIC);

    BIND_ENUM_CONSTANT(DISTANCE_EUCLID);
    BIND_ENUM_CONSTANT(DISTANCE_MANHATTAN);
    BIND_ENUM_CONSTANT(DISTANCE_LEASTAXIS);
    BIND_ENUM_CONSTANT(DISTANCE_GREATESTAXIS);

    BIND_ENUM_CONSTANT(BASIS_VALUE);
    BIND_ENUM_CONSTANT(BASIS_GRADIENT);
    BIND_ENUM_CONSTANT(BASIS_SIMPLEX);
}