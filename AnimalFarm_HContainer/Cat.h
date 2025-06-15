#include "Animal.h"

class Cat: public Animal{

public:

    void makeSound() const {
        std::cout << "Mewo ";
    }

    Animal *clone() const {
        return new Cat(*this);
    }

};


