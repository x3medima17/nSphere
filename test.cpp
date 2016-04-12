//
// Created by dumitru on 11.04.16.
//
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "sphere.cpp"
#include <cmath>

bool equals(double a, double b)
{
    double r = std::min(a,b)/std::max(a,b);
    r = 1-r;
    return r < 0.05;
}

TEST_CASE("Two dimensions", "[two]") {
    double ok = 3.14;
    double vol = compute_volume(2,1,1000000);
    REQUIRE(equals(ok,vol));

}


TEST_CASE("Three dimensions", "[three]") {
    double ok = 33.51;
    double vol = compute_volume(3,2,1000000);
    REQUIRE(equals(ok,vol));

}


TEST_CASE("Five dimensions", "[five]") {
    double ok = 1279.1;
    double vol = compute_volume(5,3,1000000);
    REQUIRE(equals(ok,vol));
}


TEST_CASE("Ten dimensions", "[five]") {
    double ok = 2611.3;
    double vol = compute_volume(10,2,1000000);
    REQUIRE(equals(ok,vol));
}