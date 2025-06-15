#pragma once
#include "Building.h"

class Home : public Building {
public:
    Home(const char* name): Building(name){

    }

    Building *clone() const override {
        return new Home(*this);
    }

    void acceptingTeacher(Teacher *teacher)  override {
        teacher->visit(this);
    }

    virtual void acceptingStudent(Student *student)  override {
        student->visit(this);
    }

};


