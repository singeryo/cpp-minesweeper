//
// Created by Oliver on 15/01/2017.
//

#ifndef MINESWEEPER_GAMEMANAGER_H
#define MINESWEEPER_GAMEMANAGER_H

#include "Grid.h"

class GameManager {

public:
    GameManager();
    void Initialize();

    void DisplayDev();

    void LoseGame();

    void SelectCell(int x, int y);


    ~GameManager();


private:
    Grid* grid;

};


#endif //MINESWEEPER_GAMEMANAGER_H
