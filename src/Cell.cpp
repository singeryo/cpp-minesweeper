//
// Created by Oliver on 15/12/2016.
//

#include <iostream>
#include "../Headers/Cell.h"

Cell::Cell(): Cell(0, 0, 0, 0) {

}

Cell::Cell(int x, int y) : Cell(x, y, DEFAULT_HEIGHT, DEFAULT_LENGTH) {

}

Cell::Cell(int x, int y, int height, int length) : Rectangle(x, y, height, length) {
    setAlentours(0);
    setMined(0);
    setHidden(1);
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

void Cell::DisplayNaked() {
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

void Cell::IncrementNearby() {
    mines_alentours++;
}


int Cell::getHidden() const {
    return isHidden;
}

void Cell::setHidden(int isHidden) {
    Cell::isHidden = isHidden;
}
