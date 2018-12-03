#ifndef STELLARBODY_H
#define STELLARBODY_H

#include "stellarobject.h"
#include <string>

class StellarBody: public StellarObject
{
public:
    StellarBody(PositionNodes* position, int size, std::string textureFileName);
    std::string get_texture_name();

private:
    std::string mTexture;

};

#endif // STELLARBODY_H
