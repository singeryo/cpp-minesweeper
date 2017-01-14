//
// Created by Oliver on 15/12/2016.
//

#ifndef MINESWEEPER_GRILLE_H
#define MINESWEEPER_GRILLE_H

#include "Cell.h"

class Grid {
protected:
    Cell ***grid;
    int hauteur;
    int largeur;
    int numberOfMines;

public:
    Grid(int hauteur, int largeur, int nbMines);
    void placeMines(int remainingMines);

    virtual ~Grid();

    void displayNaked();

};


#endif //MINESWEEPER_GRILLE_H
