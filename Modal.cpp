#include "Modal.hpp"


Modal::Modal() {
    windowSize = 0;
    length = 0;
}

Modal::~Modal() {
    if (windowSize != 0) {
        delete [] arrayResult;
        arrayResult = nullptr;
    }
    windowSize = 0;
    length = 0;
}

double* Modal::compute(int x, std::vector<double> y) {

    // Store the passed values to the class variables
    windowSize = x;

    // Store the passed vector of the class
    values = y;

    // Find the length of the array passed
    length = values.size();

    // Allocate space for the array
    arrayResult = new double[length];

    // Outer loop iterates through each position in the result array
    for (int i=0;i<length;i++) {

        // Set the value in the space to zero before adding to it
        arrayResult[i] = 0;
        
        // Inner loop totals the values specified by the size (or i)
        for (int j=0;j<(i+1<windowSize?i+1:windowSize);j++) {

            // Total the sum of the values
            arrayResult[i] += values[i-j];
        }

        // Take the average of our sum using the proper size
        arrayResult[i] /= (i<windowSize?i+1:windowSize);
    }

    return arrayResult;
}