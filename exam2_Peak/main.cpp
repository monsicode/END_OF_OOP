#include <iostream>
#include "Peak.h"
#include "TPeak.h"
#include "MPeak.h"

int main() {

    Peak *p1 = new TPeak("Vihren", "Pirin", 2900);
    Peak *p2 = new MPeak(1234, "Musala", 2925);

    p1->getName();
    std::cout << std::endl;
    p2->getName();

}
