#pragma once
#include "Peak.h"

class TPeak : public Peak {

    char* peak;

    void copy(const TPeak&);
    void free();

public:

    TPeak(const char* peak, const char* mountain, size_t hight);
    TPeak(const TPeak&);
    TPeak& operator=(const TPeak&);
    ~TPeak();

    void getName() const override;

};

