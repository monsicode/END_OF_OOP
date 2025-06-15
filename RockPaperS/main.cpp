#include <iostream>
#include "Player.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

int main() {

    Player *pl1 = new Paper();
    Player *pl2 = new Rock();
    Player *pl3 = new Scissors();
    Player *pl4 = new Paper();

    std::cout << pl3->playWith(pl1);


}
