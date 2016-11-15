cmake_minimum_required(VERSION 3.6)
project(Minesweeper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES main.cpp Point.cpp Point.h Rectangle.cpp Rectangle.h Button.cpp Button.h Clickable.cpp Clickable.h)
add_executable(Minesweeper ${SOURCE_FILES})