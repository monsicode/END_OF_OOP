#pragma once

#include <iostream>
#include <cstring>

class Peak {
protected:
    size_t hight;
    char *mountain;

    //length not really needed
    size_t lenght;

    void copy(const Peak &);
    void free();

public:

    Peak(const char *mountain, size_t hight);
    Peak(const Peak &);
    Peak &operator=(const Peak &);
    virtual ~Peak();

    //good to put get/set

    virtual void getName() const = 0;

};


