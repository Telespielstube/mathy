cmake_minimum_required(VERSION 4.0)
project(mathy)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(Google_tests)

add_executable(mathy main.cpp
        include/arithmetic.h
        include/fraction.h
)
