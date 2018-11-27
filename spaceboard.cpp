#include "spaceboard.h"

SpaceBoard::SpaceBoard()
{
    int accountingForOriginNode{-1};
    int halfLength{(mBoardLength + accountingForOriginNode)};
    int halfWidth{(mBoardWidth + accountingForOriginNode)};
    int halfHeight{(mBoardHeight + accountingForOriginNode)};

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
