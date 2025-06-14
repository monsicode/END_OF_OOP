#include "Vector2D.h"

Vector2D::Vector2D() {
    x = 0.0;
    y = 0.0;
}

Vector2D::Vector2D(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector2D::getX() const{
    return x;
}
double Vector2D::getY() const{
    return y;
}

Vector2D operator*(double scalar, Vector2D& vec) {
    vec.x *= scalar;
    vec.y *= scalar;
    return vec;
}

Vector2D operator+(const Vector2D &vec1, const Vector2D &vec2) {
    Vector2D result(vec1);
    result+=vec2;

    return result;
}

Vector2D &Vector2D::operator+=(const Vector2D &vec) {
    x += vec.x;
    y += vec.y;

    return *this;
}

Vector2D operator^(const Vector2D &vec1, const Vector2D &vec2) {
    Vector2D result(vec1);
    result.x *= vec2.x;
    result.y *= vec2.y;

    return result;
}

bool operator==(const Vector2D &vec1, const Vector2D &vec2) {
    return vec1.x == vec2.x && vec1.y == vec2.y;
}

bool operator!=(const Vector2D &vec1, const Vector2D &vec2) {
    return vec1.x != vec2.x || vec1.y != vec2.y;
}