cmake_minimum_required(VERSION 3.3)
project(LinkedList)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ListInterface.cpp ListInterface.h Iterator.h LinkedList.cpp LinkedList.h)
add_executable(LinkedList ${SOURCE_FILES})