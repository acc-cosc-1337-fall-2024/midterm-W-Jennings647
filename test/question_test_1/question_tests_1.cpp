#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Make sure verify function works")
{
	REQUIRE(verify(-1) == false);
	REQUIRE(verify(5) == false);
	REQUIRE(verify(1) == true);
}

TEST_CASE("Make sure letter_grade function works")
{
	REQUIRE(letter_grade(3.5) == 'A');
	REQUIRE(letter_grade(3.49) == 'B');
	REQUIRE(letter_grade(2) == 'C');
	REQUIRE(letter_grade(1.99) == 'D');
	REQUIRE(letter_grade(.99) == 'F');
}