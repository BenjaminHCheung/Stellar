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

TEST(GivenAShipOfAppropriateSizeAndLocationGoingIntoTeamOneList, WhenUsingAddShipFunction_AddsShipToTheCorrectTeamVectorListWithCorrectValues)
{
    SpaceBoard mySpaceBoard{SpaceBoard()};
    mySpaceBoard.add_starship(1,3,0,0,0);
    unsigned long long int expectedSize{1};
    unsigned long long int returnedSize{mySpaceBoard.get_team_one_ships()->size()};
    EXPECT_EQ(expectedSize, returnedSize);
}

//TEST(GivenAShipOfAppropriateSizeAndLocationGoingIntoTeamTwoList, WhenUsingAddShipFunction_AddsShipToTheCorrectTeamVectorListWithCorrectValues)
//{

//}

//TEST(GivenAPlanetOfApproriateSizeAndLocation, WhenUsingTheAddStellarBodyFunction_AddsPlanetToCorrectListWithCorrectValues)
//{

//}

//TEST(GivenACommandToGenerateAllShips, WhenCallingTheGenerateShipsListsFunction_BothTeamListsAreFilledWithTheDefaultListOfShipsPositionedInALine)
//{

//}

//TEST(GivenACommandToGenerateAllStellarBodies, WhenCallingTheGeneratePlanetLitsFunction_TheStellarBodyListFillsWithAPlanetInTheCorrectLocationAndASecondPlanetPositionedOnTheOppositeSideOfTheOrigin)
//{

//}

//TEST(GivenACommandToGenerateDefaultLists, WhenUsingTheGenerateDefaultListsFunction_AllThreeListsAreFilledCorrectly)
//{

//}

//TEST(GivenACommandToClearTheShipLists, WhenUsingTheClearShipsFunction_AllShipsAreClearedFromBothLists)
//{

//}

//TEST(GivenACommandToClearTheStellarBodyList, WhenUsingTheClearPlanetsFunction_AllPlanetEntriesAreRemovedFromTheList)
//{

//}

//TEST(GivenACommandToClearLists, WhenUsingTheClearListsFunction_AllListsAreClearedOfAllEntries)
//{

//}
