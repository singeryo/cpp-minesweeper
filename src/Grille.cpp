//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Grille.h"



Grille::Grille(int hauteur, int largeur, int nbMines) {

    this->hauteur = hauteur;
    this->largeur = largeur;

    this->numberOfMines = nbMines;

    grille = (Cellule***) malloc (hauteur * sizeof(Cellule**));

    for(int row=0; row<largeur; row++)
        grille[row] = (Cellule**) malloc (largeur * sizeof(Cellule*));

    for(int i=0; i<hauteur; i++)
        for(int j=0; j<largeur; j++)
            grille[i][j] = new Cellule();

    placeMines();
}

void Grille::display() {

    for(int i=0; i<hauteur; i++)
        for(int j=0; j<largeur; j++)
        {
            grille[i][j]->display();
            if(j == largeur-1)
                std::cout<<"\n";
        }
}

Grille::~Grille() {

    for(int i=0; i<hauteur; i++)
    {
        for(int j=0; j<largeur; j++) {
            delete (grille[i][j]);
        }
    }
}

void Grille::placeMines() {

    int mines_restantes = numberOfMines;

    while(mines_restantes){

        int randx = rand() % this->hauteur-1;
        int randy = rand() % this->largeur-1;

        if(!grille[randx][randy]->getMinee())
        {
            grille[randx][randy]->setMinee(1);

            for(int i=randx-1; i<=randx+1; i++)
                for(int j=randy-1; j<=randy+1; j++)
                    if((!(i==randx && j==randy)) && (i>=0) && (j>=0))
                        grille[i][j]->incrementAlentours();

            mines_restantes--;
        }

    }

}

