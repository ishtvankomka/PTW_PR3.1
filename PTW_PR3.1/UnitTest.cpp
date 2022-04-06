#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Student.cpp"
#include "Student.hpp"

TEST_CASE( "Arguments initialized") {
    int student = 5;
    Student *s1 = new Student[student];
    s1[0].physics = 5;
    s1[1].physics = 4;
    s1[2].physics = 3;
    s1[3].physics = 2;
    s1[4].physics = 1;
    
    Student *s2 = new Student[student];
    s2[0].physics = 5;
    s2[1].physics = 4;
    s2[2].physics = 5;
    s2[3].physics = 4;
    s2[4].physics = 5;

    REQUIRE( fiveOrfourPysics(s1, student) == 2);
    REQUIRE( fiveOrfourPysics(s2, student) == 5);
}
