#ifndef STELLAROBJECT_H
#define STELLAROBJECT_H

#include "positionnodes.h"

class StellarObject
{
public:
    StellarObject(PositionNodes* position, int size);

    int get_size();
    PositionNodes* get_position_node();

private:
    int mSize;
    PositionNodes* mPositionNode;
};

#endif // STELLAROBJECT_H
