//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Cellule.h"

Cellule::Cellule(): Rectangle() {
    setAlentours(0);
    setMinee(0);
}

Cellule::Cellule(int x, int y, int hauteur, int largeur) : Rectangle(x, y, hauteur, largeur) {

}

void Cellule::setMinee(int minee) {
    estMinee = minee;
}

void Cellule::setAlentours(int alentours) {
    mines_alentours = alentours;
}

int Cellule::getMinee() {
    return estMinee;
}

int Cellule::getAlentours() {
    return mines_alentours;

}

void Cellule::display() {
    std::cout<<mines_alentours;
}

int Cellule::getEstFlaggee() const {
    return estFlaggee;
}

void Cellule::setEstFlaggee(int estFlaggee) {
    Cellule::estFlaggee = estFlaggee;
}

void Cellule::incrementAlentours() {

    mines_alentours++;

}
