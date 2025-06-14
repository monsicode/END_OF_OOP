#include "MPeak.h"

MPeak::MPeak(size_t serNum, const char *mountain, size_t hight) : Peak(mountain, hight) {
    this->serNum = serNum;
}

void MPeak::getName() const{
    std::cout << "Name mountain: " << mountain << " Num peak: " << serNum;
}
