#pragma once

#include "Building.h"

class University : public Building {

public:

    University(const char* name): Building(name){}

    Building *clone() const override {
        return new University(*this);
    }

    void acceptingTeacher(Teacher *teacher) override {
          teacher->visit(this);
    }

    void acceptingStudent(Student *student) override {
        student->visit(this);
        addStudentId(student->getId());
    }

    int operator[](int index) const;
    int& operator[](int index);

};


