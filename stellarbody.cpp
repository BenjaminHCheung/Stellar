#include "stellarbody.h"

StellarBody::StellarBody(PositionNodes* position, int size, std::string textureFileName): StellarObject( position, size)
{
    mTexture = textureFileName;
}
