cmake_minimum_required(VERSION 3.6)
project(Minesweeper)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Headers/Button.h
        Headers/Cell.h
        Headers/Clickable.h
        Headers/Grid.h
        Headers/Point.h
        Headers/Rectangle.h
        src/Button.cpp
        src/Cell.cpp
        src/Clickable.cpp
        src/config.cpp
        src/Grid.cpp
        src/main.cpp
        src/Point.cpp
        src/Rectangle.cpp)

add_executable(Minesweeper ${SOURCE_FILES})