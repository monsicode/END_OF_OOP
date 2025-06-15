#pragma once

#include "Animal.h"

class Cow : public Animal {

public:

    void makeSound() const {
        std::cout << "Moooo ";
    }

    Animal *clone() const {
        return new Cow(*this);
    }

};

