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
    void generate_default_lists();
    void generate_ships_lists();
    void generate_planet_list();
    void clear_lists();

    std::vector<Starship*>* get_team_one_ships();
    std::vector<Starship*>* get_team_two_ships();
    std::vector<StellarBody*>* get_stellar_body_lists();

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
