#ifndef SPACEBOARD_H
#define SPACEBOARD_H

#include "positionnodes.h"

class SpaceBoard
{
public:
    SpaceBoard();

public:
    static const int mBoardLength{15};
    static const int mBoardWidth{15};
    static const int mBoardHeight{15};

    PositionNodes* mSpaceGrid[mBoardLength][mBoardWidth][mBoardHeight];
};

#endif // SPACEBOARD_H
