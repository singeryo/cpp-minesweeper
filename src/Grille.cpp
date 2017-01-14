//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Grille.h"


/**
 *
 * @param hauteur
 * @param largeur
 * @param nbMines
 *
 * Grid constructor
 */
Grille::Grille(int hauteur, int largeur, int nbMines) {

    this->hauteur = hauteur;
    this->largeur = largeur;

    this->numberOfMines = nbMines;

    //Allocate array memory
    grille = (Cell***) malloc (hauteur * sizeof(Cell**));

    for(int row=0; row<largeur; row++)
        grille[row] = (Cell**) malloc (largeur * sizeof(Cell*));

    //Allocate Cell memory
    for(int i=0; i<hauteur; i++)
        for(int j=0; j<largeur; j++)
            grille[i][j] = new Cell();

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

    int remaining_mines = numberOfMines;

    while(remaining_mines){

        //Random X and Y values
        int randx = rand() % this->hauteur-1;
        int randy = rand() % this->largeur-1;

        if(!grille[randx][randy]->getMinee())
        {
            grille[randx][randy]->setMinee(1);

            //Increment surrounding cells nearby mines by 1
            for(int i=randx-1; i<=randx+1; i++)
                for(int j=randy-1; j<=randy+1; j++)
                    if((!(i==randx && j==randy)) && (i>=0) && (j>=0))
                        grille[i][j]->incrementAlentours();

            remaining_mines--;
        }

    }

}

