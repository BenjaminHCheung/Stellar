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
        mySpaceBoard->add_starship(teamNumber, battleship, 1, 0, 0);
    }
    virtual void TearDown()
    {
        delete mySpaceBoard;
    }

};

TEST_F(CalculationTest, WhenUsingCalculateDistanceFunctionUsingShipOneAndTwo_ReturnsCorrectDistance)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[0]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[1]};

    double calculatedDistance{calculate_distance(attacker, defender)};
    double expectedDistance{14.2126704};

    EXPECT_NEAR(expectedDistance, calculatedDistance, .0000001);
}

TEST_F(CalculationTest, WhenUsingCalculateDistanceFunctionUsingShipOneAndThree_ReturnsCorrectDistance)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[0]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[2]};

    double calculatedDistance{calculate_distance(attacker, defender)};
    double expectedDistance{14.03566885};

    EXPECT_NEAR(expectedDistance, calculatedDistance, .0000001);
}

TEST_F(CalculationTest, WhenUsingCalculateDistanceFunctionUsingShipOneAndFour_ReturnsCorrectDistance)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[0]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[3]};

    double calculatedDistance{calculate_distance(attacker, defender)};
    double expectedDistance{15.26433752};

    EXPECT_NEAR(expectedDistance, calculatedDistance, .0000001);
}

TEST_F(CalculationTest, WhenUsingCalculateDistanceFunctionUsingShipOneAndFive_ReturnsCorrectDistance)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[0]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[4]};

    double calculatedDistance{calculate_distance(attacker, defender)};
    double expectedDistance{1.00000000};

    EXPECT_NEAR(expectedDistance, calculatedDistance, .0000001);
}

TEST_F(CalculationTest, WhenUsingCalculateDistanceFunctionUsingShipTwoAndFour_ReturnsCorrectDistance)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[1]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[3]};

    double calculatedDistance{calculate_distance(attacker, defender)};
    double expectedDistance{13.89244399};

    EXPECT_NEAR(expectedDistance, calculatedDistance, .0000001);
}

TEST_F(CalculationTest, WhenCalculatingProbabilityToHitBetweenShipOneAndTwo_GivesTheCorrectHitRate)
{
    Starship* attacker{(*mySpaceBoard->get_team_one_ships())[0]};
    Starship* defender{(*mySpaceBoard->get_team_one_ships())[1]};
    double distance{calculate_distance(attacker, defender)};

    double calculatedChanceToHit{chance_to_hit(attacker, defender)};
    double expectedChanceToHit{.2386};

    EXPECT_NEAR(expectedChanceToHit, calculatedChanceToHit, .0001);
}

