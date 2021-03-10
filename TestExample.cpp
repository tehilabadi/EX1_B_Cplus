/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
    input.erase(remove(input.begin(),input.end(),' '), input.end());
    input.erase(remove(input.begin(),input.end(),'\t'), input.end());
    input.erase(remove(input.begin(),input.end(),'\n'), input.end());
    input.erase(remove(input.begin(),input.end(),'\r'), input.end());
	return input;
}


TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));

    /* Add more checks here */
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    /* Add more checks here */
}


/* Add more test cases here */
