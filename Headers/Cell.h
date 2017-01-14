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
    int getEstFlaggee() const;

    void setEstFlaggee(int estFlaggee);

    Cell();
    Cell(int x, int y, int hauteur, int largeur);

    void setMinee(int minee);
    void setAlentours(int alentours);
    void incrementAlentours();

    void unhide();

    int getMinee();
    int getAlentours();

    void display();


};


#endif //MINESWEEPER_CELLULE_H
