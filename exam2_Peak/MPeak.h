#pragma once

#include "Peak.h"

class MPeak : public Peak {
    size_t serNum;

public:
    MPeak(size_t serNum, const char *mountain, size_t hight);
    void getName() const override;
};

