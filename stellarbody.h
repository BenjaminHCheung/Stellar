#ifndef STELLARBODY_H
#define STELLARBODY_H

#include "stellarobject.h"
#include <string>

class StellarBody: public StellarObject
{
public:
    StellarBody(PositionNodes* position, int size, std::string textureFileName, double radius);
    std::string get_texture_name();
    double get_radius();

private:
    std::string mTexture;
    double mRadius;
};

#endif // STELLARBODY_H
