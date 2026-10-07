// Normal.h
#pragma once
#include "UpdateStrategy.h"
#include <algorithm>

class Normal : public UpdateStrategy
{
public:
    Normal(int& quality) : quality(quality) {}

    void updateQuality() override
    {
        quality -= kNormalDegradeValue;
        quality = max(quality, 0);
    }

private:
    int& quality;
};