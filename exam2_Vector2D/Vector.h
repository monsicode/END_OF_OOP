#pragma once

#include <iostream>

class Vector {
    int * arr;
    size_t size;

    void copy(const Vector &);
    void free();
    void resize(size_t newSize);

public:

    Vector();
    Vector(const Vector &other);
    Vector &operator=(const Vector &other);
    ~Vector();

    void add(int num);

    friend Vector operator*(double scalar, const Vector& vector);

    Vector& operator+=(const Vector &other);
    friend Vector operator+(const Vector &v1, const Vector &v2);

    friend Vector operator^(const Vector &v1, const Vector &v2);

    bool operator==(const Vector &v2);
    bool operator!=(const Vector &v2);

    void print() const{
        for(int i = 0; i < size; i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout << std::endl;
    }


};


