#include "spaceboard.h"

SpaceBoard::SpaceBoard()
{
    int accountingForOriginNode{-1};
    int halfLength{(mBoardLength + accountingForOriginNode)/2};
    int halfWidth{(mBoardWidth + accountingForOriginNode)/2};
    int halfHeight{(mBoardHeight + accountingForOriginNode)/2};

    for(int xLocation{0}; xLocation < mBoardLength; xLocation++)
    {
        for(int yLocation{0}; yLocation < mBoardWidth; yLocation++)
        {
            for(int zLocation{0}; zLocation < mBoardHeight; zLocation++)
            {
                double red{.4};
                double green{.4};
                double blue{.4};
                if((xLocation + yLocation + zLocation) % 2 == 1)
                {
                    red = .6;
                    green = .6;
                    blue = .6;
                }
                mSpaceGrid[xLocation][yLocation][zLocation] =
                        new PositionNodes(static_cast<double>(xLocation - halfLength),
                                          static_cast<double>(yLocation - halfWidth),
                                          static_cast<double>(zLocation - halfHeight),
                                          red,
                                          green,
                                          blue);
            }
        }
    }
}

int SpaceBoard::get_board_length()
{
    return mBoardLength;
}
int SpaceBoard::get_board_width()
{
    return mBoardWidth;
}
int SpaceBoard::get_board_height()
{
    return mBoardHeight;
}

PositionNodes* SpaceBoard::get_node_pointer(int lengthLocation, int widthLocation, int heightLocation)
{
    return mSpaceGrid[lengthLocation][widthLocation][heightLocation];
}

void SpaceBoard::add_starship(int teamNumber, int size, int xPosition, int yPosition, int zPosition)
{
    int speed{5 - size};
    int defense{size * 3};
    int attack{size};
    PositionNodes* spawnPosition{get_node_pointer(xPosition,yPosition,zPosition)};

    Starship* myNewShip = new Starship(spawnPosition, size, attack, defense, speed);

    if(teamNumber == 1)
    {
        mTeamOneShips.push_back(myNewShip);
    }
    else if(teamNumber == 2)
    {
        mTeamTwoShips.push_back(myNewShip);
    }
}
void SpaceBoard::add_stellar_body(int size, int xPosition, int yPosition, int zPosition)
{
    double radius{size / 10.0};
    PositionNodes* spawnPosition{get_node_pointer(xPosition,yPosition,zPosition)};

    StellarBody* newObject = new StellarBody(spawnPosition, size, "", radius);
    mStellarBodies.push_back(newObject);
}

void SpaceBoard::generate_default_lists()
{
    int teamOne{1};
    int teamTwo{2};

    int battleship{4};
    int crusier{3};
    int destroyer{2};
    int corvette{1};

    const int standardListLength{12};
    int standardShipList[standardListLength]
                            {battleship,
                            battleship,
                            crusier,
                            crusier,
                            crusier,
                            destroyer,
                            destroyer,
                            destroyer,
                            corvette,
                            corvette,
                            corvette,
                            corvette};

    int teamOneXPosition{3};
    int teamTwoXPosition{mBoardLength-teamOneXPosition};

    int zPosition{7};
    int startingYPosition{2};

    for(int iterator{0}; iterator < standardListLength; iterator++)
    {
        add_starship(teamOne, standardShipList[iterator], teamOneXPosition, (startingYPosition + iterator), zPosition);
        add_starship(teamTwo, standardShipList[iterator], teamTwoXPosition, (startingYPosition + iterator), zPosition);
    }

    int
}

void SpaceBoard::generate_ships_lists()
{

}

void SpaceBoard::generate_planet_lists()
{

}

void SpaceBoard::clear_lists()
{

}

std::vector<Starship*>* SpaceBoard::get_team_one_ships()
{
    return &mTeamOneShips;
}

std::vector<Starship*>* SpaceBoard::get_team_two_ships()
{
    return &mTeamTwoShips;
}

std::vector<StellarBody*>* SpaceBoard::get_stellar_body_lists()
{
    return &mStellarBodies;
}
