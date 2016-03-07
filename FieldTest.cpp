/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"

class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;

	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}
TEST (FieldTest, minePresent)
{
  Field minefield;
  minefield.placeMine(5,5);
  ASSERT_TRUE(minefield.isSafe(5,5));
}

TEST (FieldTest, mineAbsent)
{
  Field minefield;
  minefield.placeMine(5,5);
  ASSERT_FALSE(minefield.isSafe(4,5));
}
