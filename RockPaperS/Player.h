#pragma once

#include <iostream>

class Rock;

class Paper;

class Scissors;

class Player {

public:

    virtual int playWith(const Player *player) const = 0;

    virtual int playWithPaper(const Paper *player) const = 0;

    virtual int playWithRock(const Rock *player) const = 0;

    virtual int playWithScissors(const Scissors *player) const = 0;

    //!!!!!!!!!!!!!!!!!!!!!!!
    virtual ~Player() = default;

};

//class Shape{
//    ;
// Shape* sh = new ...;
// Shape* point = new ...;
//     sh->visit(point)
// void visit(Point* point);

