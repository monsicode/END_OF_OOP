#include "TPeak.h"

void TPeak::copy(const TPeak &other) {
    peak = new char[strlen(peak) + 1];
    strcpy(peak, other.peak);
}

void TPeak::free() {
    delete[] peak;
    peak = nullptr;
}

TPeak::TPeak(const char *peak, const char *mountain, size_t hight) : Peak(mountain, hight) {
    this->peak = new char[strlen(peak) + 1];
    strcpy(this->peak, peak);
}

TPeak::TPeak(const TPeak &other) : Peak(other) {
    copy(other);
}

TPeak &TPeak::operator=(const TPeak &other) {
    if (this != &other) {
        Peak::operator=(other);
        free();
        copy(other);
    }
    return *this;
}

TPeak::~TPeak() {
    free();
}

void TPeak::getName() const {
    std::cout << "Name mountain: " << mountain << " Name peak: " << peak;
}