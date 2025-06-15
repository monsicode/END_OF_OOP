#pragma once
#include <iostream>

class Animal {

public:
    virtual void makeSound() const = 0;
    virtual Animal *clone() const = 0;
    virtual ~Animal() = default;

};

