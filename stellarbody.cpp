#include "stellarbody.h"

StellarBody::StellarBody(PositionNodes* position, int size, std::string textureFileName, double radius): StellarObject( position, size)
{
    mTexture = textureFileName;
    mRadius = radius;
}

std::string StellarBody::get_texture_name()
{
    return mTexture;
}

double StellarBody::get_radius()
{
    return mRadius;
}
