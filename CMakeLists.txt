cmake_minimum_required(VERSION 3.6)
project(Minesweeper)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES src/main.cpp src/Point.cpp Headers/Point.h src/Rectangle.cpp Headers/Rectangle.h src/Button.cpp Headers/Button.h src/Clickable.cpp Headers/Clickable.h src/config.cpp src/Cellule.cpp Headers/Cellule.h src/Grille.cpp Headers/Grille.h)
add_executable(Minesweeper ${SOURCE_FILES})