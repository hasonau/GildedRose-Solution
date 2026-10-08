#pragma once

#include <string>
#include <vector>
#include "ContentsFactory.h"

using namespace std;

class Item
{
public:
    string name;
    int sellIn;
    int quality;

    Item(string name, int sellIn, int quality)
        : name(name), sellIn(sellIn), quality(quality)
    {}
};

class GildedRose
{
public:
    vector<Item>& items;
    ContentsFactory& factory;

    GildedRose(vector<Item>& items, ContentsFactory& factory);

    void updateQuality();
};