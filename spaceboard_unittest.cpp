#include "gtest/gtest.h"
#include "spaceboard.h"

class SpaceBoardTest: public ::testing::Test
{
protected:
    SpaceBoard* mSpaceBoard;

    virtual void SetUp()
    {
        mSpaceBoard = new SpaceBoard();
    }
    virtual void TearDown()
    {
        delete mSpaceBoard;
    }
};

TEST(GivenAShipOfAppropriateSizeAndLocationGoingIntoTeamOneList, WhenUsingAddShipFunction_AddsShipToTheCorrectTeamVectorList)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    unsigned long long int emptyList{0};
    EXPECT_EQ(emptyList, mySpaceBoard.get_team_one_ships()->size());
    mySpaceBoard.add_starship(1,3,0,0,0);
    unsigned long long int expectedSize{1};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_one_ships()->size());
}

TEST(GivenAShipOfAppropriateSizeAndLocationGoingIntoTeamTwoList, WhenUsingAddShipFunction_AddsShipToTheCorrectTeamVectorList)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    unsigned long long int emptyList{0};
    EXPECT_EQ(emptyList, mySpaceBoard.get_team_two_ships()->size());
    mySpaceBoard.add_starship(2,4,5,11,8);
    unsigned long long int expectedSize{1};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_two_ships()->size());
}

TEST(GivenAPlanetOfApproriateSizeAndLocation, WhenUsingTheAddStellarBodyFunction_AddsPlanetToCorrectList)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    unsigned long long int emptyList{0};
    EXPECT_EQ(emptyList, mySpaceBoard.get_stellar_body_lists()->size());
    mySpaceBoard.add_stellar_body(3,0,0,0);
    unsigned long long int expectedSize{1};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_stellar_body_lists()->size());
}

TEST(GivenACommandToGenerateAllShips, WhenCallingTheGenerateShipsListsFunction_BothTeamListsAreFilledWithTheDefaultListOfShipsPositionedInALine)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    mySpaceBoard.generate_ships_lists();
    unsigned long long int expectedSize{12};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_one_ships()->size());
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_two_ships()->size());
}

TEST(GivenACommandToGenerateAllStellarBodies, WhenCallingTheGeneratePlanetLitsFunction_TheStellarBodyListFillsWithAPlanetInTheCorrectLocationAndASecondPlanetPositionedOnTheOppositeSideOfTheOrigin)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    mySpaceBoard.generate_planet_list();
    unsigned long long int expectedSize{12};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_stellar_body_lists()->size());
}

TEST(GivenACommandToGenerateDefaultLists, WhenUsingTheGenerateDefaultListsFunction_AllThreeListsAreFilledCorrectly)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    mySpaceBoard.generate_default_lists();
    unsigned long long int expectedSize{12};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_one_ships()->size());
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_two_ships()->size());
    EXPECT_EQ(expectedSize, mySpaceBoard.get_stellar_body_lists()->size());
}

TEST(GivenACommandToClearTeamOneList, WhenUsingTheClearTeamOneFunction_AllShipsAreClearedFromTeamOneList)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    mySpaceBoard.generate_ships_lists();
    mySpaceBoard.clear_team_one();
    unsigned long long int expectedSize{0};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_one_ships()->size());
}

TEST(GivenACommandToClearTeamTwoList, WhenUsingTheClearTeamTwoFunction_AllShipsAreClearedFromTeamOneList)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    mySpaceBoard.generate_ships_lists();
    mySpaceBoard.clear_team_two();
    unsigned long long int expectedSize{0};
    EXPECT_EQ(expectedSize, mySpaceBoard.get_team_two_ships()->size());
}

//TEST(GivenACommandToClearTheShipLists, WhenUsingTheClearShipsFunction_AllShipsAreClearedFromBothLists)
//{
//    SpaceBoard mySpaceBoard{SpaceBoard()};
//    mySpaceBoard
//}

//TEST(GivenACommandToClearTheStellarBodyList, WhenUsingTheClearPlanetsFunction_AllPlanetEntriesAreRemovedFromTheList)
//{

//}

//TEST(GivenACommandToClearLists, WhenUsingTheClearListsFunction_AllListsAreClearedOfAllEntries)
//{

//}
