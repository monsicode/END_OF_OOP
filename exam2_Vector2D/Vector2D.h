#pragma once

#include <iostream>

class Vector2D {
    double x;
    double y;
public:
    Vector2D();
    Vector2D(double x, double y);

    friend Vector2D operator*(double scalar, Vector2D &vec);

    friend Vector2D operator+(const Vector2D &vec1, const Vector2D &vec2);
    Vector2D &operator+=(const Vector2D &vec);//good

    friend Vector2D operator^(const Vector2D &vec1, const Vector2D &vec2);

    friend bool operator==(const Vector2D &vec1, const Vector2D &vec2);
    friend bool operator!=(const Vector2D &vec1, const Vector2D &vec2);

    double getX() const;
    double getY() const;

    void print() const {
        std::cout << x << " " << y << std::endl;
    }

};

