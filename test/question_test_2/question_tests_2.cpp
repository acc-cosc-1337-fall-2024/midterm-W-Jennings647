#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify that verify function works")
{
		REQUIRE(verify(0) == false);
		REQUIRE(verify(513) == false);
		REQUIRE(verify(100) == true);
}

TEST_CASE("Verify that hex_converter function works")
{
	REQUIRE(decimal_to_hex(10) == "A");
	REQUIRE(decimal_to_hex(170) == "AA");
	REQUIRE(decimal_to_hex(255) == "FF");

	//these are just mine for testing
	REQUIRE(decimal_to_hex(138) == "8A");
	REQUIRE(decimal_to_hex(32) == "20");
	REQUIRE(decimal_to_hex(512) == "200");
}