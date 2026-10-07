// AgedBrie.h
#pragma once
#include "UpdateStrategy.h"

class AgedBrie : public UpdateStrategy
{
public:
    AgedBrie(int& quality) : quality(quality) {}

    void updateQuality() override
    {
        quality += kNormalDegradeValue;
        quality = min(quality,50);
    }

private:
    int& quality;
};