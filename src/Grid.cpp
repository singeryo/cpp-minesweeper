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

    this->height = hauteur;
    this->length = largeur;

    this->numberOfMines = nbMines;

    //Allocate array memory
    grid = new Cell**[hauteur];

    for(int row=0; row<hauteur; row++)
    {
        grid[row] = new Cell*[largeur];
        for(int column=0; column<largeur; column++)
            //Allocate cell memory
            grid[row][column] = new Cell(row, column);
    }

    //Generate our random base value with the time it is
    time_t* time = new time_t();
    srand((unsigned int)time);

    PlaceMines(numberOfMines);
}

void Grid::DisplayNaked() {

    for(int i=0; i<height; i++)
        for(int j=0; j<length; j++)
        {
            grid[i][j]->DisplayNaked();
            if(j == length-1)
                std::cout<<"\n";
        }
}

Grid::~Grid() {

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<length; j++) {
            delete (grid[i][j]);
        }
        delete(grid[i]);
    }
    delete(grid);
}


void Grid::PlaceMines(int remainingMines) {

    //Recursive ending condition
    if(!remainingMines)
        return;

    //Random X and Y values
    int randx = rand() % this->height;
    int randy = rand() % this->length;

    if(!grid[randx][randy]->getMined())
    {
        grid[randx][randy]->setMined(1);

        //Increment surrounding cells nearby mines by 1
        for(int i=randx-1; i<=randx+1; i++)
            for(int j=randy-1; j<=randy+1; j++)
                if((!(i==randx && j==randy)) && (i>=0) && (j>=0) && (i<height) && (j<length))
                    grid[i][j]->IncrementNearby();

        //Decrement remaining mines only if one was actually placed
        remainingMines--;
    }

    //Recursive call
    PlaceMines(remainingMines);

}

int Grid::SelectCell(int x, int y) {

    Cell* selected = grid[x][y];

    if(selected->getMined())
    {
        //Init game loss functions ?
        return 0;
    }
    else
    {
        //init selection functions
        return 1;
    }

}

