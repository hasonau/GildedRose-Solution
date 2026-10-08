#pragma once

#include "UpdateStrategy.h"
#include "AgedBrie.h"
#include "Sulfuras.h"
#include "Conjured.h"
#include "BackstagePasses.h"
#include "Normal.h"

class ContentsFactory
{
public:
    UpdateStrategy* createContents(const string& name, int& quality, int& sellIn)
    {
        if (name == "Aged Brie")
            return new AgedBrie(quality);

        if (name == "Sulfuras, Hand of Ragnaros")
            return new Sulfuras();

        if (name == "Backstage passes to a TAFKAL80ETC concert")
            return new BackstagePasses(quality, sellIn);

        if (name == "Conjured Mana Cake")
            return new Conjured(quality);

        return new Normal(quality);
    }
};