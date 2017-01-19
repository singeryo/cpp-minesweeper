//
// Created by Oliver on 15/01/2017.
//

#include <iostream>
#include "../Headers/GameManager.h"

GameManager::GameManager() {

}

void GameManager::Initialize() {

    grid = new Grid(10, 20, 9);

}

void GameManager::DisplayDev() {

    grid->DisplayNaked();

}

void GameManager::LoseGame() {

    std::cout<<"just lost the game dude !"<<std::endl;
    exit(0);

}

void GameManager::SelectCell(int x, int y) {

    int result = grid->SelectCell(x, y);

    switch (result){
        case 0 : LoseGame();
            break;
        case 1: std::cout<<"Selected, time to refrech grid !"<<std::endl;
            break;
        default: std::cout<<"What is this ? "<<result<<std::endl;
    }


}

GameManager::~GameManager() {
    delete(grid);
}
