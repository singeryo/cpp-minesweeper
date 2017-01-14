//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Cell.h"

Cell::Cell(): Cell(0, 0, 0, 0) {

}

Cell::Cell(int x, int y, int hauteur, int largeur) : Rectangle(x, y, hauteur, largeur) {
    setAlentours(0);
    setMinee(0);
    isHidden = 1;
}

void Cell::setMinee(int minee) {
    isMined = minee;
}

void Cell::setAlentours(int alentours) {
    mines_alentours = alentours;
}

int Cell::getMinee() {
    return isMined;
}

int Cell::getAlentours() {
    return mines_alentours;

}

void Cell::display() {
    if(isMined)
        std::cout<<"M";
    else
        std::cout<<mines_alentours;
}

int Cell::getEstFlaggee() const {
    return isFlagged;
}

void Cell::setEstFlaggee(int estFlaggee) {
    Cell::isFlagged = estFlaggee;
}

void Cell::incrementAlentours() {

    mines_alentours++;

}

void Cell::unhide() {

    isHidden = 0;

}
