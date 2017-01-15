#include <iostream>
#include "../Headers/GameManager.h"
#include <SFML/Graphics.hpp>

int main() {

    GameManager* manager = new GameManager();

    manager->Initialize();
    manager->DisplayDev();



    delete(manager);
}