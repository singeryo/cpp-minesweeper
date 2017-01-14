//
// Created by Oliver on 15/12/2016.
//

#ifndef MINESWEEPER_GRILLE_H
#define MINESWEEPER_GRILLE_H

#include "Cell.h"

class Grille {
protected:
    Cell ***grille;
    int hauteur;
    int largeur;
    int numberOfMines;

public:
    Grille(int hauteur, int largeur, int nbMines);
    void placeMines();

    virtual ~Grille();

    void display();

};


#endif //MINESWEEPER_GRILLE_H
