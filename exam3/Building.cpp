#include "Building.h"

void Building::copy(const Building &other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);

    numOfIds = other.numOfIds;
    capacity = other.capacity;
    ids = new size_t[numOfIds];

    for (int i = 0; i < numOfIds; ++i) {
        ids[i] = other.ids[i];
    }
}

void Building::free() {
    delete[] name;
    delete[] ids;
    capacity = 4;
    numOfIds = 0;
}

void Building::resize() {
    capacity *= 2;

    size_t *newIds = new size_t[capacity];

    for (int i = 0; i < numOfIds; ++i) {
        newIds[i] = ids[i];
    }

    delete[] ids;
    ids = newIds;
}

Building::Building(const char *name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    capacity = 4;
    numOfIds = 0;
    ids = new size_t[capacity]{0};

    studentsVisits = 0;
    teacherVisits = 0;
}

Building::Building(const Building &other) {
    copy(other);
}

Building &Building::operator=(const Building &other) {
    if (this != &other) {
        free();
        copy(other);
    }
    return *this;
}

Building::~Building() {
    free();
}

size_t Building::getCountStudents() const {
    return studentsVisits;
}

size_t Building::getCountTeachers() const {
    return teacherVisits;
}

void Building::printInfo() const {
    std::cout << "Name is: " << name << " Count students: " << studentsVisits << " Count teachers: " << teacherVisits
              << "Ids:";
}