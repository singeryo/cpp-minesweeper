//
// Created by Oliver on 24/09/2016.
//

#ifndef MINESWEEPER_BUTTON_H
#define MINESWEEPER_BUTTON_H


#include "Rectangle.h"
#include "Clickable.h"

class Button: public Rectangle, Clickable {
public:
    Button(int px, int py, int height, int length);


};


#endif //MINESWEEPER_BUTTON_H
