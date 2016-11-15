//
// Created by Oliver on 21/09/2016.
//
#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(): Point(0, 0) {
}

Point::Point(const Point& point) : Point(point.x, point.y) {
}

Point::Point(int px, int py) {
    SetX(px);
    SetY(py);
}

int Point::GetX() {
    return x;
}

void Point::SetX(int px) {
    x = px;
}

int Point::GetY() {
    return y;
}

void Point::SetY(int py) {
    y = py;
}

Point *Point::operator=(const Point & point) {
    x = point.x;
    y = point.y;

    return this;
}

void Point::display() {

    cout<<"Point: "<<"y: "<<y<<" x: "<<x<<endl;

}

Point::~Point() {

}
