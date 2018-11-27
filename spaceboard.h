#ifndef SPACEBOARD_H
#define SPACEBOARD_H

#include "positionnodes.h"

class SpaceBoard
{
public:
    SpaceBoard();

    int get_board_length();
    int get_board_width();
    int get_board_height();
    PositionNodes* get_node_pointer(int lengthLocation, int widthLocation, int heightLocation);

private:
    static const int mBoardLength{15};
    static const int mBoardWidth{15};
    static const int mBoardHeight{15};

    PositionNodes* mSpaceGrid[mBoardLength][mBoardWidth][mBoardHeight];
};

#endif // SPACEBOARD_H
