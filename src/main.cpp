#include <iostream>
#include "../Headers/Grille.h"
#include <SFML/Graphics.hpp>

int main() {

    Grille* grille = new Grille(10, 12, 6);

    grille->display();

    delete(grille);

}