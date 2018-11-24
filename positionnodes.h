#ifndef POSITIONNODES_H
#define POSITIONNODES_H

#include "vector3d.h"

class PositionNodes
{
public:
    PositionNodes(double xPosition, double yPosition, double zPosition, double red, double green, double blue);

    Vector3d get_position();
    double* get_color();

private:
    Vector3d mPosition;
    double mColor[3];

    PositionNodes* xPositiveAdjacentNode{nullptr};
    PositionNodes* xNegativeAdjacentNode{nullptr};
    PositionNodes* yPositiveAdjacentNode{nullptr};
    PositionNodes* yNegativeAdjacentNode{nullptr};
    PositionNodes* zPositiveAdjacentNode{nullptr};
    PositionNodes* zNegativeAdjacentNode{nullptr};

};

#endif // POSITIONNODES_H
