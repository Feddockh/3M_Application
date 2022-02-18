# 3M_Application
This is my coding assignment project for 3M

Submissions should contain:
1. Code that solves the problem - check
2. Instructions on how to compile and run your code
        I built this code on a virtual machine running Ubuntu. I used VScode as my development environment
    and the compiler I use is g++. To build and compile this code I used cmake since I was working with
    a few files. I believe you should just be able to run the executable if you'd like and it will prompt
    you with inputs. Although if you would like to also run the tests that I made then I think you may need
    to copy the following files from the directory:
        CMakeLists.txt
        Modal_main.cpp
        Modal_test.cpp
        Modal.cpp
        Modal.hpp
        catch.hpp
    With these files in a directory if you type "cmake ." into the terminal then it should build everything
    and also generate the executables. To run the executables from the terminal you can just enter
    "./Modal-main.exe" or "./Modal-tests" when you are within the directory. 
    P.S. I did not write the catch file, I just used it for testing and wanted to include it
3. A description of your solution and any assumptions that it makes
        I actually had the hardest time trying to figure out the length of the array being passed into the function
    because C/C++ converts arrays to pointers when passing though function calls, so no data about the length 
    of the array is kept. To work around this I used the vector class of C++ which does not directly take an 
    array of type double, but you can pass in values with the same bracket method as if it were a double array 
    so this was what I came to work with. Additionally, I did make sure that the output was still a double array.
        I built the function (found in Modal.cpp) with an outer loop that iterated through each position of the 
    result array and an inner loop which totaled the values to the left of the index. Finally, I divided the
    result of the array by the window size (or the index depending on the iteration).
        I am assuming that the number of values entered into the function are greater than the size of the window, 
    although in this case my function will change the size of the window to the number of elements in the array. I
    am also assuming that the size of the window is greater than or equal to 1, if this is not the case then I just
    set the window to 1. Another assumption I made is that the number of elements being entered into the function 
    is a finite number.
        I should mention that I actually decided to make a class to implement this function so that I could create
    a test file that could pull from the class, as well as a main that could also implement this neatly.
4. Analysis of the time complexity of your solution, preferably in terms of big-O notation
    So in my coding class we actually just recently began discussing big-O notation. Since my outer loop is iterating
    through the entire loop of n elements, we can say that is n time. Since the inner loop is iterating through the
    size of the window, we can call that w time. I believe that since these loops are nested, the big-O would look
    something like O(n*w). The worst case would be when w = n and then the time is O(n^2) and the best case time would
    be when w = 1 so that the time is then just O(n).
5. Analysis of the space complexity of your solution, preferably in terms of big-O notation
    My class did not get to this point yet, but I looked around online and I might have gotten the idea of it.
    So In my function, I need two arrays of n elements, one for the result and one for the values from the call.
    Since the sizes of both arrays are not dependent on each other, they would be added, not multiplied (2n). 
    I believe that in big-O notation, the coefficient should drop off and it should be 0(n).

Reasources I used:
https://www.cplusplus.com/reference/vector/vector/ - Used to recall functions from the vector class
https://stackoverflow.com/questions/19894686/getting-size-of-array-from-pointer-c - Used to discover that arrays turn 
    into pointers in C++ function calls
https://www.youtube.com/watch?v=bNjMFtHLioA - I watched this video to understand big-O notation for space
I also used the catch file I had been using in my class as well as the framework for the CMakeList.

