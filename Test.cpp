#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman code") {
    CHECK(nospaces(snowman(11114411)) == nospaces("===\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces(" _ \n.....\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(31114411)) == nospaces("\n/\\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41114411)) == nospaces("_\n(*)\n(.,.)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41114411)) == nospaces("_\n(*)\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(42114411)) == nospaces("_\n(*)\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(43114411)) == nospaces("_\n(*)\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(44114411)) == nospaces("_\n(*)\n(. .)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41114411)) == nospaces("_\n(*)\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(42214411)) == nospaces("_\n(*)\n(o..)\n( : )\n( : )"));
    CHECK(nospaces(snowman(43314411)) == nospaces("_\n(*)\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41414411)) == nospaces("_\n(*)\n(- .)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41114411)) == nospaces("_\n(*)\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(42224411)) == nospaces("_\n(*)\n(o.o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(43334411)) == nospaces("_\n(*)\n(O_O)\n( : )\n( : )"));
    CHECK(nospaces(snowman(41444411)) == nospaces("_\n(*)\n(- -)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41111411)) == nospaces("_\n(*)\n(.,.)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(42222411)) == nospaces("_\n(*)\n\\(o.o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(43333411)) == nospaces("_\n(*)\n(O_O)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(41444411)) == nospaces("_\n(*)\n(- -)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41111111)) == nospaces("_\n(*)\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(42222211)) == nospaces("_\n(*)\n\\(o.o)/\n( : )\n( : )"));
    CHECK(nospaces(snowman(43333311)) == nospaces("_\n(*)\n(O_O)\n/( : )\\n( : )"));
    CHECK(nospaces(snowman(41444411)) == nospaces("_\n(*)\n(- -)\n( : )\n( : )"));

    CHECK(nospaces(snowman(41111111)) == nospaces("_\n(*)\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(42222221)) == nospaces("_\n(*)\n\\(o.o)/\n(] [)\n( : )"));
    CHECK(nospaces(snowman(43333331)) == nospaces("_\n(*)\n(O_O)\n/(> <)\\n( : )"));
    CHECK(nospaces(snowman(41444441)) == nospaces("_\n(*)\n(- -)\n(   )\n( : )"));

    CHECK(nospaces(snowman(41111111)) == nospaces("_\n(*)\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(42222222)) == nospaces("_\n(*)\n\\(o.o)/\n(] [)\n(" ")"));
    CHECK(nospaces(snowman(43333333)) == nospaces("_\n(*)\n(O_O)\n/(> <)\\n(_)"));
    CHECK(nospaces(snowman(41444444)) == nospaces("_\n(*)\n(- -)\n(   )\n(   )"));
}

TEST_CASE("random snowman"){

}

TEST_CASE("Without nospaces fanction") {
    CHECK((snowman(41111111)) == ("  _ \n (*)\n (.,.)\n<( : )>\n  ( : )"));
    CHECK((snowman(42222211)) == ("  _ \n (*)\n\\(o.o)/\n (] [)\n (" ")"));
    CHECK((snowman(43333311)) == ("  _\n (*)\n (O_O)\n/(> <)\\n (_)"));
    CHECK((snowman(41444411)) == (" _ \n(*)\n(- -)\n(   )\n(   )"));
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(55555555));
    CHECK_THROWS(snowman(00000000));

    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(1111111));;
    CHECK_THROWS(snowman(111111111));

    CHECK_THROWS(snowman(51111111));
    CHECK_THROWS(snowman(15111111));
    CHECK_THROWS(snowman(11511111));
    CHECK_THROWS(snowman(11151111));
    CHECK_THROWS(snowman(11115111));
    CHECK_THROWS(snowman(11111511));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111115));

    CHECK_THROWS(snowman(01111111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111110));
}