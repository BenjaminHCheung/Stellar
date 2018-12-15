#include "gtest/gtest.h"
#include "probabilitymath.h"
#include "spaceboard.h"

class SpaceboardTest : public ::testing::Test
{
protected:
    SpaceBoard* mySpaceBoard;
    virtual void Setup()
    {
        mySpaceBoard = new SpaceBoard;

        mySpaceBoard
    }

};

TEST(GivenTwoStarshipsOfKnownPositions, WhenUsingCalculateDistanceFunction_ReturnsCorrectDistance)
{
    Starship* attacker = new Starship()
}
