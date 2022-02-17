#ifndef Modal_HPP
#define Modal_HPP

#include <iostream>
#include <vector>

class Modal {

    private:
        int windowSize, length;
        std::vector<double> values, result;
        double *arrayResult;

    public:
        Modal();
        ~Modal();
        
        int getSize() const { return windowSize; }
        int getLength() const { return length; }

        double* compute(int, std::vector<double>);
};

#endif