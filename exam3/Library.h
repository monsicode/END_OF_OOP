#pragma once

#include "Building.h"

class Library : public Building {
public:
    Library(const char* name): Building(name){

    }

    Building *clone() const override {
        return new Library(*this);
    }

    void acceptingTeacher(Teacher *teacher)  override {
        teacher->visit(this);
    }

    virtual void acceptingStudent(Student *student)  override {
        student->visit(this);
    }


};

