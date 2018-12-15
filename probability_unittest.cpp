#include "gtest/gtest.h"
#include "probabilitymath.h"
#include "spaceboard.h"

class CalculationTest : public ::testing::Test
{
protected:
    SpaceBoard* mySpaceBoard;
    virtual void SetUp()
    {
        mySpaceBoard = new SpaceBoard;

        int teamNumber = 1;
        int battleship = 4;
        int crusier = 3;
        int destroyer = 2;
        int corvette = 1;

        mySpaceBoard->add_starship(teamNumber, battleship, 0, 0, 0);
        mySpaceBoard->add_starship(teamNumber, crusier, 12, 7, 3);
        mySpaceBoard->add_starship(teamNumber, destroyer, 4, 9, 10);
        mySpaceBoard->add_starship(teamNumber, corvette, 6, 1, 14);
    }
    virtual void TearDown()
    {
        delete mySpaceBoard;
    }

};

TEST_F(CalculationTest, WhenUsingCalculateDistanceFunction_ReturnsCorrectDistance)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[1]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[2]};

    double calculatedDistance{calculate_distance(attacker, defender)};
    double expectedDistance{14.2127};

    EXPECT_DOUBLE_EQ(calculatedDistance, expectedDistance);
}
