/**
 * @file Modal.cpp
 * @author Hayden Feddock
 * @brief Methods for the Modal header file
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Modal.hpp"

// Constructor initializes values to zero
Modal::Modal() {
    windowSize = 0;
    length = 0;
}

// Destructor deletes the pointer and it's data if it was created
// Destructor also sets the sizes and length to zero (although unnecessary)
Modal::~Modal() {
    if (windowSize != 0) {
        delete [] result;
        result = nullptr;
    }
    windowSize = 0;
    length = 0;
}

// Algorithm for computing the moving average as specified
double* Modal::compute(int x, std::vector<double> y) {

    // Store the passed values to the class variables
    windowSize = x;

    // Store the passed vector of the class
    values = y;

    // Find the length of the array passed
    length = values.size();

    // Edge case handling
    if (windowSize>length) windowSize = length;
    if (windowSize<1) windowSize = 1;

    // Allocate space for the array
    result = new double[length];

    // Outer loop iterates through each position in the result array
    for (int i=0;i<length;i++) {

        // Set the value in the space to zero before adding to it
        result[i] = 0;
        
        // Inner loop totals the values specified by the size (or i)
        for (int j=0;j<(i+1<windowSize?i+1:windowSize);j++) {

            // Total the sum of the values
            result[i] += values[i-j];
        }

        // Take the average of our sum using the proper size
        result[i] /= (i<windowSize?i+1:windowSize);
    }

    // Return pointer to the array
    return result;
}