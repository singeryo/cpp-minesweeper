#include <iostream>
#include "../Headers/Grid.h"
#include <SFML/Graphics.hpp>

int main() {

    Grid* grille = new Grid(10, 12, 8);

    grille->displayNaked();

    delete(grille);

}