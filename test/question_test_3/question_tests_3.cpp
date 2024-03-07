#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Makes sure verify function works")
{
	REQUIRE(verify(-1) == false);
	REQUIRE(verify(201) == false);
	REQUIRE(verify(100) == true);
}

TEST_CASE("Makes sure find_gcd function works")
{
	REQUIRE(find_gcd(15, 25) == 5);
	REQUIRE(find_gcd(16, 32) == 16);
	REQUIRE(find_gcd(159, 309) == 3);
}