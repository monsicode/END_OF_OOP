#include <iostream>

#include "Building.h"
#include "Home.h"
#include "University.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main() {

   // std::cout << "Hello";

   Building* building = new University("Penka");

    Student* person = new Student(3,3,3);
    Person* person2 = new Teacher(3,3,3);

    building->acceptingStudent(person);
    building->printInfo();

}
