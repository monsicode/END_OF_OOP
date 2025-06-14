#include "Vector.h"

void Vector::copy(const Vector &other) {
    size = other.size;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = other.arr[i];
    }
}

void Vector::free() {
    delete[] arr;
    size = 0;
    arr = nullptr;

}

void Vector::resize(size_t newSize) {
    int *newArr = new int[newSize];

    size = newSize;
    for (int i = 0; i < size; size++) {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
    newArr = nullptr;
}

Vector::Vector() {
    size = 1;
    arr = new int[size]{0};
}

Vector::Vector(const Vector &other) {
    copy(other);
}

Vector &Vector::operator=(const Vector &other) {
    if (this != &other) {
        free();
        copy(other);
    }
    return *this;
}

Vector::~Vector() {
    free();
}

void Vector::add(int num) {
    arr[size] = num;
    size++;
}

Vector operator*(double scalar, const Vector &vector) {

    Vector newVec(vector);

    for (int i = 0; i < vector.size; i++) {
        newVec.arr[i] *= scalar;
    }

    return newVec;
}


Vector &Vector::operator+=(const Vector &other) {
    for (int i = 0; i < size; i++) {
        arr[i] += other.arr[i];
    }
    return *this;
}

Vector operator+(const Vector &v1, const Vector &v2) {
    Vector result(v1);
    result += v2;
    return result;
}

Vector operator^(const Vector &v1, const Vector &v2){

}

//    bool Vector2D::operator==(const Vector2D &v2);
//    bool Vector2D::operator!=(const Vector2D &v2);