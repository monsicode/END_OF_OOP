#pragma once

#include "Player.h"

class Scissors : public Player {

public:

    int playWith(const Player *player) const {
        return -(player->playWithScissors(this));
    }

    int playWithPaper(const Paper* player) const {
        return 1;
    }

    int playWithRock(const Rock *player) const {
        return -1;
    }

    int playWithScissors(const Scissors *player) const {
        return 0;
    }
};

