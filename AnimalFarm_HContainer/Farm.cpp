#include "Farm.h"

void Farm::copy(const Farm &other) {
    size = other.size;
    capacity = other.capacity;
    animals = new Animal *[capacity];

    for (int i = 0; i < size; i++) {
        animals[i] = other.animals[i]->clone();
    }
}

void Farm::free() {
    for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    delete[] animals;
}

void Farm::resize() {
    capacity *= 2;
    Animal **newAnimals = new Animal *[capacity];

    for (int i = 0; i < size; i++) {
        newAnimals[i] = animals[i];
    }

    delete[] animals;
    animals = newAnimals;
}


Farm::Farm() {
    animals = nullptr;
    capacity = 2;
    size = 0;
    animals = new Animal *[capacity];
}

Farm::Farm(const Farm &other) {
    copy(other);
}

Farm &Farm::operator=(const Farm &other) {
    if (this != &other) {
        free();
        copy(other);
    }
    return *this;
}

Farm::~Farm() {
    free();
}