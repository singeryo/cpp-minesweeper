//
// Created by Oliver on 15/01/2017.
//

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

}

void GameManager::SelectCell(int x, int y) {

    int result = grid->SelectCell(x, y);

}

GameManager::~GameManager() {
    delete(grid);
}
