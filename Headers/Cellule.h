//
// Created by Oliver on 15/12/2016.
//

#ifndef MINESWEEPER_CELLULE_H
#define MINESWEEPER_CELLULE_H


#include "Rectangle.h"

class Cellule: public Rectangle{
protected:
    int estMinee;
    int mines_alentours;

public:

    Cellule();
    Cellule(int x, int y, int hauteur, int largeur);

    void setMinee(int minee);
    void setAlentours(int alentours);

    int getMinee();
    int getAlentours();

    void display();


};


#endif //MINESWEEPER_CELLULE_H
