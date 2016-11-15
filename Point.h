//
// Created by Oliver on 21/09/2016.
//

#ifndef MINESWEEPER_POINT_H
#define MINESWEEPER_POINT_H


class Point
{
protected:
    int x;
    int y;

public:
    Point();
    Point(int, int);
    Point(const Point&);
    virtual ~Point();

    int GetX();
    int GetY();

    void SetX(int);
    void SetY(int);

    virtual void display();

    Point* operator=(const Point&);

};

#endif //MINESWEEPER_POINT_H
