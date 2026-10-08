#include "GildedRose.h"
#include "AgedBrie.h"
#include "Sulfuras.h"
#include "Conjured.h"
#include "BackstagePasses.h"
#include "Normal.h"
#include "ContentsFactory.h"

using namespace std;

GildedRose::GildedRose(vector<Item>& items, ContentsFactory& factory)
    : items(items), factory(factory)
{}
    void GildedRose::updateQuality()
    {
        for (int i = 0; i < items.size(); i++)
        {
            UpdateStrategy* strategy = factory.createContents(
                items[i].name,
                items[i].quality,
                items[i].sellIn
            );

            strategy->updateQuality();

            if (items[i].name != "Sulfuras, Hand of Ragnaros")
                items[i].sellIn -= 1;

            delete strategy;
        }
    }
