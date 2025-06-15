#pragma once
#include "Person.h"

class Student : public Person {
    int credits;
    int pagesRead;
public:
    Student(int credits, int pagesRead, int fatigue) : Person(fatigue) {
        this->credits = credits;
        this->pagesRead = pagesRead;
    }

    int getCredits() const {
        return credits;
    }

    int getReadPages() const {
        return pagesRead;
    }

    void visit(const Home *building) const override {
        // some logic
    }

    void visit(const University *building) const override {
        std::cout<<"Student in uni!";
    }

    void visit(const Library *building) const override {
        //
    }

};

