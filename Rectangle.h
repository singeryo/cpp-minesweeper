//
// Created by Oliver on 21/09/2016.
//

#ifndef MINESWEEPER_RECTANGLE_H
#define MINESWEEPER_RECTANGLE_H

#include "Point.h"

class Rectangle: public Point {
public:
    int height;
    int length;
    int color;

public:
    Rectangle();
    Rectangle(int px, int py, int height, int length);
    ~Rectangle();

    void display();

};


#endif //MINESWEEPER_RECTANGLE_H
