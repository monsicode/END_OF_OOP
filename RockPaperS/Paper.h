#pragma once
#include "Player.h"

class Paper : public Player {

public:

    int playWith(const Player *player) const {
        return -(player->playWithPaper(this));
    }
    int playWithPaper(const Paper* player) const {
        return 0;
    }
    int playWithRock(const Rock *player) const {
        return 1;
    }
    int playWithScissors(const Scissors *player) const {
        return -1;
    }
};
