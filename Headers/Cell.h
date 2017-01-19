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

    const int DEFAULT_HEIGHT=10;
    const int DEFAULT_LENGTH=10;


public:
    int getFlagged() const;
    void setFlagged(int flagged);

    int getHidden() const;

    void setHidden(int isHidden);

    Cell();
    Cell(int x, int y);
    Cell(int x, int y, int height, int length);

    void setMined(int minee);
    void setAlentours(int alentours);
    void IncrementNearby();

    int getMined();
    int getAlentours();

    void DisplayNaked();


};


#endif //MINESWEEPER_CELLULE_H
