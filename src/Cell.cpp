//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Cell.h"

Cell::Cell(): Cell(0, 0, 0, 0) {

}

Cell::Cell(int x, int y, int hauteur, int largeur) : Rectangle(x, y, hauteur, largeur) {
    setAlentours(0);
    setMined(0);
    isHidden = 1;
}

void Cell::setMined(int minee) {
    isMined = minee;
}

void Cell::setAlentours(int alentours) {
    mines_alentours = alentours;
}

int Cell::getMined() {
    return isMined;
}

int Cell::getAlentours() {
    return mines_alentours;

}

void Cell::displayNaked() {
    if(isMined)
        std::cout<<"M";
    else
        std::cout<<mines_alentours;
}

int Cell::getFlagged() const {
    return isFlagged;
}

void Cell::setFlagged(int flagged) {
    Cell::isFlagged = flagged;
}

void Cell::incrementNearby() {

    mines_alentours++;

}

void Cell::unhide() {

    isHidden = 0;

}
