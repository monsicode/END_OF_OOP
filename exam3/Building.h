#pragma once

#include "Person.h"
#include "Teacher.h"
#include "Student.h"
#include <cstring>

class Building {
protected:
    char *name;

    size_t *ids;
    size_t numOfIds;
    size_t capacity;

     size_t studentsVisits;
     size_t teacherVisits;

    void copy(const Building &other);
    void free();
    void resize();

public:

    Building(const char* name);
    Building(const Building &other);
    Building &operator=(const Building &other);
    virtual ~Building();

    virtual Building *clone() const = 0;

    virtual void acceptingTeacher(Teacher *teacher)  = 0;
    virtual void acceptingStudent(Student *student)  = 0;

    void addStudentId(size_t studentId){
        if (numOfIds == capacity){
            resize();
        }

        ids[numOfIds++] = studentId;
        studentsVisits++;
    }

    void addTeacherId(size_t teacherId){
        if (numOfIds == capacity){
            resize();
        }

        ids[numOfIds++] = teacherId;
        teacherVisits++;
    }

    size_t getCountStudents() const;
    size_t getCountTeachers() const;

     void printInfo() const ;

};
