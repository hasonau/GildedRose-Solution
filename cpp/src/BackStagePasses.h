// BackstagePasses.h
#pragma once
#include "UpdateStrategy.h"

class BackstagePasses : public UpdateStrategy
{
public:
    BackstagePasses(int& quality, int& sellIn) : quality(quality), sellIn(sellIn) {}

    void updateQuality() override
    {
        if (sellIn < 0)
        {
            quality = 0;
        }
        else if (sellIn <= 5)
        {
            quality += 3;
        }
        else if (sellIn <= 10)
        {
            quality += 2;
        }
        else
        {
            quality += kNormalDegradeValue;
        }

        quality = min(quality,50);
    }

private:
    int& quality;
    int& sellIn;
};