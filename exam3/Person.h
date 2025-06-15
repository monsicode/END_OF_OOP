#pragma once
#include <iostream>

class University;
class Home;
class Library;

static int id = 1;

class Person {
protected:
    int curId;
    size_t fatigue;
public:

    Person(size_t fatigue) {
        curId = id++;
        this->fatigue = fatigue;
    }

    int getId() const {
        return curId;
    }

    virtual void visit(const Home* building) const = 0;
    virtual void visit(const University* building) const = 0;
    virtual void visit(const Library* building) const = 0;
};


