#include "stellarobject.h"

StellarObject::StellarObject(PositionNodes* position, int size)
{
    mPositionNode = position;
    mSize = size;
}

int StellarObject::get_size()
{
    return mSize;
}

PositionNodes* StellarObject::get_position_node()
{
    return mPositionNode;
}
