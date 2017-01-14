//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include <ctime>
#include "../Headers/Grid.h"


/**
 *
 * @param hauteur
 * @param largeur
 * @param nbMines
 *
 * Grid constructor
 */
Grid::Grid(int hauteur, int largeur, int nbMines) {

    this->hauteur = hauteur;
    this->largeur = largeur;

    this->numberOfMines = nbMines;

    //Allocate array memory
    grid = (Cell***) malloc (hauteur * sizeof(Cell**));

    for(int row=0; row<largeur; row++)
        grid[row] = (Cell**) malloc (largeur * sizeof(Cell*));

    //Allocate Cell memory
    for(int i=0; i<hauteur; i++)
        for(int j=0; j<largeur; j++)
            grid[i][j] = new Cell();

    //Generate our random base value with the time it is
    time_t* time = new time_t();
    srand((unsigned int)time);
    rPlaceMines(numberOfMines);
}

void Grid::displayNaked() {

    for(int i=0; i<hauteur; i++)
        for(int j=0; j<largeur; j++)
        {
            grid[i][j]->displayNaked();
            if(j == largeur-1)
                std::cout<<"\n";
        }
}

Grid::~Grid() {

    for(int i=0; i<hauteur; i++)
    {
        for(int j=0; j<largeur; j++) {
            delete (grid[i][j]);
        }
    }
}


void Grid::placeMines(int remainingMines) {

    //Recursive ending condition
    if(!remainingMines)
        return;

    //Random X and Y values
    int randx = rand() % this->hauteur-1;
    int randy = rand() % this->largeur-1;

    if(!grid[randx][randy]->getMined())
    {
        grid[randx][randy]->setMined(1);

        //Increment surrounding cells nearby mines by 1
        for(int i=randx-1; i<=randx+1; i++)
            for(int j=randy-1; j<=randy+1; j++)
                if((!(i==randx && j==randy)) && (i>=0) && (j>=0))
                    grid[i][j]->incrementNearby();

        //Decrement remaining mines only if onr was actually placed
        remainingMines--;
    }

    placeMines(remainingMines);

}

