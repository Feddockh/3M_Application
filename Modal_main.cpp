/**
 * @file Modal_main.cpp
 * @author Hayden Feddock
 * @brief This is the main where we will use the Modal class
 * in order to get the moving average. I did build a little
 * bit of a user interface. So if you'd like, you should be
 * able to enter numbers into the executable that this source
 * code generates
 * @version 0.1
 * @date 2022-02-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "Modal.hpp"

using namespace std;

int main() {
    
    // Prompt the user to enter the window size of the array
    cout << "Please enter the window size of the array: ";
    int window;
    cin >> window;

    // Create variable to store user inputs
    vector<double> inputArr;
    double input;
    char reply = 'Y';
    int n = 0;

    // Prompt the user to enter the elements of the array
    cout << "Please enter the elements of the array:\n";
    do {

        if (reply == 'Y') {
            cout << "[" << n << "] = ";
            cin >> input;
            inputArr.push_back(input);
            n++;
        }

        cout << "Would you like to enter another value? Enter 'Y' or 'N': ";
        cin >> reply;

    } while (reply != 'N');

    // Create an instance of the object and compute the moving average with
    // the provided values 
    Modal m;
    double *avg = m.compute(window, inputArr);

    // Print out the computed values
    cout << "\nYou're 3M*Modal moving average is: [";
    for (int i=0;i<n;i++) {
        cout << " " << avg[i] << " ";
    }
    cout << "]\n";


}