// Conjured.h
#pragma once
#include "UpdateStrategy.h"

class Conjured : public UpdateStrategy
{
public:
    Conjured(int& quality) : quality(quality) {}

    void updateQuality() override
    {
        quality -= kNormalDegradeValue * 2;
        quality = max(quality,0);
    }

private:
    int& quality;
};