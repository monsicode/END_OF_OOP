#pragma once

#include <iostream>
#include <fstream>

class Statistics {

    double *arr;
    size_t sizeArr;

    void copy(const Statistics& other);
    void free();
    void resize(size_t size);

public:

    Statistics(){
        sizeArr = 4;
        arr = new double [sizeArr];
    }
    Statistics(const double *a, size_t n);
    Statistics(const Statistics &other);
    Statistics &operator=(const Statistics &other);
    ~Statistics();

   void load(const char *fileName);

    double min() const;

    void printAvg() const;

    void print() const;

    void combine(const Statistics &other);

};

