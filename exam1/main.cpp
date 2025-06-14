#include <iostream>
#include "Statistics.h"

int main() {
    Statistics stat;
    stat.load("C:\\Users\\Monika\\Documents\\C++_2025\\exam1\\nums.txt");
   stat.print();
    // std::cout << stat.min();

    double arr[] = {9.9, 8.8, 7.7};
    Statistics other(arr, 3);
//    Statistics other;
//    other.load("C:\\Users\\Monika\\Documents\\C++_2025\\exam1\\nums.txt");

   // stat.combine(other);
   // stat.print();

//    std::ifstream file("C:\\Users\\Monika\\Documents\\C++_2025\\exam1\\nums.txt");
//    std::cout << stat.getCharCounts(file, ' ');
//    file.close();

}
