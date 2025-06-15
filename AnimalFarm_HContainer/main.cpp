#include <iostream>
#include "Farm.h"
#include "Animal.h"
#include "Cat.h"
#include "Cow.h"

int main() {

    Animal* cat = new Cat();
    Animal* cow = new Cow();
    Animal* cow1 = new Cow();
    Animal* cow2 = new Cow();

    Farm farm;

    farm.addAnimal(cat);
    farm.addAnimal(cow);
    farm.addAnimal(cow1);
    farm.addAnimal(cow2);

    farm.makeSounds();

}
