#include "positionnodes.h"

PositionNodes::PositionNodes(double xPosition, double yPosition, double zPosition, double red, double green, double blue):
    mPosition{Vector3d(xPosition,yPosition,zPosition)}
{
    Vector3d mPosition{Vector3d(xPosition,yPosition,zPosition)};
    mColor[0] = red;
    mColor[1] = green;
    mColor[2] = blue;
}

Vector3d PositionNodes::get_position()
{
    return mPosition;
}

double* PositionNodes::get_color()
{
    return mColor;
}
