cmake_minimum_required(VERSION 3.16.3)
project(P1 CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE Modal.hpp Modal.cpp Modal_test.cpp)
set(SOURCE_MAIN Modal.hpp Modal.cpp)

# create unittests
add_executable(Modal-tests catch.hpp ${SOURCE})
# add_executable(FindPalindrome-main FindPalindrome_main.cpp ${SOURCE_MAIN})

enable_testing()

# unit tests
add_test(unittest Modal-tests)