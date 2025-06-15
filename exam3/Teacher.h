#pragma once
#include "Person.h"

class Teacher : public Person {
    int lectures;
    int researchNotes;
public:
    Teacher(int lectures, int researchNotes, int fatigue) : Person(fatigue) {
        this->lectures = lectures;
        this->researchNotes = researchNotes;
    }

    int getLectures() const {
        return lectures;
    }

    int getResearchNotes() const {
        return researchNotes;
    }

    void visit(const Home *building) const override {
        // some logic
    }

    void visit(const University* building) const override {
        std::cout << "Teacher in uni!";
    }

    void visit(const Library *building) const override {
        //
    }

};


