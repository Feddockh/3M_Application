#define CATCH_CONFIG_MAIN
#define CATCH_CONFIG_COLOUR_NONE
#include "catch.hpp"
#include "Modal.hpp"


TEST_CASE("Test Constructor", "[Modal]") {
    Modal m;
    REQUIRE(m.getSize()==0);
    REQUIRE(m.getLength()==0);
}

TEST_CASE("Test Destructor", "[Modal]") {
    Modal m;
    m.~Modal();
    REQUIRE(m.getSize()==0);
    REQUIRE(m.getLength()==0);
}


TEST_CASE("Test Compute Example 1", "[Modal]") {
    
    // Create object m from the Modal class
    Modal m;
    
    // Return a pointer to the array of doubles
    double *result = m.compute(3, {0, 1, 2, 3});

    // Test that the size and length are corrent
    REQUIRE(m.getSize()==3);
    REQUIRE(m.getLength()==4);

    // Test against the element in each cell
    double ans[] = {0, 0.5, 1, 2};
    for (int i=0;i<4;i++) {
        REQUIRE(result[i] == ans[i]);
    }
}

TEST_CASE("Test Compute Example 2", "[Modal]") {
    
    // Create object m from the Modal class
    Modal m;
    
    // Return a pointer to the array of doubles
    double *result = m.compute(5, {0, 1, -2, 3, -4, 5, -6, 7, -8, 9});

    // Test that the size and length are corrent
    REQUIRE(m.getSize()==5);
    REQUIRE(m.getLength()==10);

    // Test against the element in each cell
    double ans[] = {0, 0.5, -(1.0/3.0), 0.5, -0.4, 0.6, -0.8, 1, -1.2, 1.4};
    for (int i=0;i<10;i++) {
        REQUIRE(result[i] == ans[i]);
    }
}