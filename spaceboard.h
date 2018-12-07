#ifndef SPACEBOARD_H
#define SPACEBOARD_H

#include "positionnodes.h"
#include "starship.h"
#include "stellarbody.h"

#include <vector>

class SpaceBoard
{
public:
    SpaceBoard();

    int get_board_length();
    int get_board_width();
    int get_board_height();
    PositionNodes* get_node_pointer(int lengthLocation, int widthLocation, int heightLocation);

    void add_starship(int teamNumber, int size, int xPosition, int yPosition, int zPosition);
    void add_stellar_body(int size, int xPosition, int yPosition, int zPosition);

private:
    static const int mBoardLength{12};
    static const int mBoardWidth{12};
    static const int mBoardHeight{12};

    PositionNodes* mSpaceGrid[mBoardLength][mBoardWidth][mBoardHeight];

    std::vector<Starship*> mTeamOneShips;
    std::vector<Starship*> mTeamTwoShips;
    std::vector<StellarBody*> mStellarBodies;
};

#endif // SPACEBOARD_H
