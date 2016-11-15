//
// Created by Oliver on 22/09/2016.
//
#include <iostream>
#include "../Headers/Rectangle.h"
#include <SFML/Graphics.hpp>

using namespace std;

Rectangle::Rectangle(int px, int py, int height, int length): Point(px, py), height(height), length(length) {
    
}



Rectangle::~Rectangle() {

}

void Rectangle::display(){

    cout<<"Rectangle : hauteur = " << height << " largeur = " << length << endl;

}

Rectangle::Rectangle(): Point(), height(0), length(0) {


}

