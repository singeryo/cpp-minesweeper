#include <iostream>
#include "../Headers/GameManager.h"
#include <SFML/Graphics.hpp>

int main() {

    GameManager* manager = new GameManager();

    manager->Initialize();
    manager->DisplayDev();

    manager->SelectCell(2, 6);
    manager->SelectCell(6, 3);
    manager->SelectCell(4, 8);

    delete(manager);
}