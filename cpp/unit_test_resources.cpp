//Simple unit test for header file.

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "resources.h"

TEST_CASE("add one") {
    REQUIRE(add_one(4) == 5);
}
