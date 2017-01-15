//
// Created by Oliver on 15/12/2016.
//

#ifndef MINESWEEPER_GRILLE_H
#define MINESWEEPER_GRILLE_H

#include "Cell.h"

class Grid {
protected:
    Cell*** grid;
    int hauteur;
    int largeur;
    int numberOfMines;

public:
    Grid(int hauteur, int largeur, int nbMines);
    void PlaceMines(int remainingMines);
    int SelectCell(int x, int y);

    virtual ~Grid();

    void DisplayNaked();

};


#endif //MINESWEEPER_GRILLE_H
