#include <iostream>
#include "Vector2D.h"

int main() {

    Vector2D vec;
    Vector2D vec2(2.5, 5.6);
    vec.print();
    vec += vec2;
    Vector2D vec3 = 2 * vec;
    vec3.print();
}
