#include "Statistics.h"

Statistics::Statistics(const double *a, size_t n) {
    arr = new double[n];
    sizeArr = n;

    for (int i = 0; i < sizeArr; i++) {
        arr[i] = a[i];
    }
}

void Statistics::copy(const Statistics &other) {
    sizeArr = other.sizeArr;
    arr = new double[sizeArr];

    for (int i = 0; i < sizeArr; i++) {
        arr[i] = other.arr[i];
    }
}

void Statistics::free() {
    sizeArr = 0;
    delete[] arr;
    arr = nullptr;
}

void Statistics::resize(size_t size) {
    double *newArr = new double[size];

    for (int i = 0; i < sizeArr; i++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    sizeArr = size;
    arr = newArr;

}


Statistics::Statistics(const Statistics &other) {
    copy(other);
}

Statistics &Statistics::operator=(const Statistics &other) {
    if (this != &other) {
        free();
        copy(other);
    }
    return *this;
}

Statistics::~Statistics() {
    free();
}

void Statistics::load(const char *fileName) {

    std::ifstream file(fileName);

    if (!file.is_open()) {
        std::cout << "Error reading file\n";
    }

    delete[] arr;
    file >> sizeArr;
    arr = new double[sizeArr];
    for (int i = 0; i < sizeArr; i++) {
        file >> arr[i];
    }

    file.close();
}

//is this a valid syntaxis const double*& a
double Statistics::min() const {
    double minNumber = INT64_MAX;
    for (int i = 0; i < sizeArr; i++) {
        if (arr[i] < minNumber) {
            minNumber = arr[i];
        }
    }
    return minNumber;
}

void Statistics::printAvg() const {
    double sum = 0;
    for (int i = 0; i < sizeArr; i++) {
        sum += arr[i];
    }

    std::cout << sum / sizeArr;
}

void Statistics::print() const {
    std::cout << "Size is: " << sizeArr << " \n";
    for (int i = 0; i < sizeArr; i++) {
        std::cout << arr[i] << " ";
    }
}

void Statistics::combine(const Statistics &other) {
    size_t newSize = sizeArr + other.sizeArr;
    size_t oldSize = sizeArr;

    resize(newSize);

    for (int i = 0; i < other.sizeArr; i++) {
        arr[i + oldSize] = other.arr[i];
    }

}
