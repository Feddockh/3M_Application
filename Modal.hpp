/**
 * @file Modal.hpp
 * @author Hayden Feddock
 * @brief Header file for the Modal class
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef Modal_HPP
#define Modal_HPP

#include <vector>

/**
 * @brief A Modal class object is responsible for receiving an
 * double array (of vector<double> class) and then in the compute
 * function it calculates the moving average. The reason that the 
 * vector class had to be used was because we were not given the 
 * size of the passed double array. In C++, when an array is passed
 * through a function it is passed in the same way as a pointer.
 * Therefore, no information regarding the size of the array is 
 * maintained after this pass and we cannot use the sizeof() function
 * to determine the total number of bytes in the array as we usually
 * would. Although, we can utilitze the vector class size() function
 * and pass in the double array in the same way as before as long as
 * we use curly bracket {} notation directly in the function call.
 */

class Modal {

    private:
        
        /** @brief Variables are made to use throughout */
        int windowSize, length;
        std::vector<double> values;
        double *result;

    public:

        /** @brief Constructor for the Modal object */
        Modal();

        /** @brief Destructor for the Modal object */
        ~Modal();
        
        /** @brief Getter function for the window size */
        int getSize() const { return windowSize; }

        /** @brief Getter function for the array length */
        int getLength() const { return length; }

        /** No setter functions were needed for testing */

        /** 
         * @brief compute function used to find the moving average
         * @param windowSize is the integer specifying the window
         * @param values is the vector used for holding values
         * @return The pointer to the resulting array of doubles
         */
        double* compute(int, std::vector<double>);
};

#endif