/**
 * @file Modal_test.cpp
 * @author Hayden Feddock
 * @brief Test cases for the Modal class
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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

TEST_CASE("Test Edge Cases", "[Modal]") {

    // Create an object of the Modal class
    Modal m;

    // Make window size greater than the number of elements (>10)
    double *result = m.compute(11, {0, 1, -2, 3, -4, 5, -6, 7, -8, 9});

    // Get the result when the window size is maxed out (10)
    double *ans = m.compute(10, {0, 1, -2, 3, -4, 5, -6, 7, -8, 9});

    // Test equality
    for (int i=0;i<10;i++) {
        REQUIRE(result[i] == ans[i]);
    }
}

TEST_CASE("Test More Cases", "[Modal]") {

    // Create object m from the Modal class
    Modal m;

    // Specify the number of elements in the array
    int maxSize = 100;

    // Specify the starting value (min)
    int min = -50;

    // Specify the window size
    int windowSize = 10;

    // Empty vector for adding rows of max size
    std::vector<double> row(maxSize);

    // Create a vector of vectors of doubles
    std::vector<std::vector<double>> vecArray(windowSize);

    // Fill the vector of vectors with empty double vectors
    for (int i=0;i<windowSize;i++) {
        vecArray[i] = row;
    }

    // Begin to fill each row vector at a different point
    int offSet = windowSize;
    for (int i=0;i<windowSize;i++) {

        // Use the offset to keep track of how to adjust
        offSet--;

        for (int j=0;j<maxSize;j++) {

            // Use the min to shift values around from pivot (0)
            vecArray[i][j] = j<offSet?0:j-offSet+min;

        }
    }

    // Create a new vector to hold the sums of each column
    // Take the moving average at each element
    std::vector<double> ans(maxSize);
    for (int i=0;i<maxSize;i++) {

        ans[i] = 0;

        for (int j=0;j<windowSize;j++) {
            ans[i] += vecArray[j][i];
        }

        ans[i] /= (i+1.0<windowSize?i+1.0:windowSize);
    }

    // Return a pointer to the array of doubles
    double *result = m.compute(windowSize, vecArray[windowSize-1]);

    // Test that the size and length are corrent
    REQUIRE(m.getSize()==windowSize);
    REQUIRE(m.getLength()==maxSize);

    // Test against the element in each cell
    for (int i=0;i<maxSize;i++) {
        REQUIRE(result[i] == ans[i]);
    }
}