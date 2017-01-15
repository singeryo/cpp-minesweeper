//
// Created by Oliver on 15/12/2016.
//

#ifndef MINESWEEPER_CELLULE_H
#define MINESWEEPER_CELLULE_H


#include "Rectangle.h"

class Cell: public Rectangle{
protected:
    int isMined;
    int mines_alentours;
    int isFlagged;
    int isHidden;

public:
    int getFlagged() const;

    void setFlagged(int flagged);

    Cell();
    Cell(int x, int y, int height, int length);

    void setMined(int minee);
    void setAlentours(int alentours);
    void IncrementNearby();

    void Unhide();

    int getMined();
    int getAlentours();

    void DisplayNaked();


};


#endif //MINESWEEPER_CELLULE_H
