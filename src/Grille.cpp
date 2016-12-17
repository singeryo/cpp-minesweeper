//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Grille.h"



Grille::Grille(int hauteur, int largeur) {

    this->hauteur = hauteur;
    this->largeur = largeur;

    grille = (Cellule***) malloc (hauteur * sizeof(Cellule**));

    for(int row=0; row<largeur; row++)
        grille[row] = (Cellule**) malloc (largeur * sizeof(Cellule*));

    for(int i=0; i<hauteur; i++)
        for(int j=0; j<largeur; j++)
            grille[i][j] = new Cellule();
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

