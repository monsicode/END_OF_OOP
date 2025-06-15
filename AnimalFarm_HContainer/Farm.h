#pragma once

#include "Animal.h"

class Farm {
    Animal **animals;
    size_t size;
    size_t capacity;

    void copy(const Farm &other);

    void free();

    void resize();

public:

    Farm();

    Farm(const Farm &other);

    Farm &operator=(const Farm &other);

    ~Farm();

    void makeSounds() const {
        for (int i = 0; i < size; i++) {
            animals[i]->makeSound();
        }
    }

    void addAnimal(Animal *animal) {
        if (!animal) {
            return;
        }

        if (size == capacity) {
            resize();
        }

        animals[size++] = animal;
    }

};


