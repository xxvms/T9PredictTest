cmake_minimum_required(VERSION 3.8)
project(T9PredictTest)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Engine.cpp Engine.h WordsTree.cpp WordsTree.h)
add_executable(T9PredictTest ${SOURCE_FILES})