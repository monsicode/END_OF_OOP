#include "Peak.h"

void Peak::copy(const Peak &other) {
    lenght = other.lenght;

    mountain = new char[lenght + 1];
    strcpy(mountain, other.mountain);
}

void Peak::free() {
    delete[] mountain;
    mountain = nullptr;
    lenght = 0;
}

Peak::Peak(const char *mountain, size_t hight) {
    lenght = strlen(mountain + 1);

    this->mountain = new char[lenght];
    strcpy(this->mountain, mountain);

    this->hight = hight;
}

Peak::Peak(const Peak &other) {
    copy(other);
}

Peak& Peak::operator=(const Peak& other){
    if(this != &other){
        free();
        copy(other);
    }
    return *this;
}

Peak::~Peak(){
    free();
}
