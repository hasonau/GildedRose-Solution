#include "GildedRose.h"
#include "AgedBrie.h"
#include "Sulfuras.h"
#include "Conjured.h"
#include "BackstagePasses.h"
#include "Normal.h"

using namespace std;

GildedRose::GildedRose(vector<Item> & items) : items(items)
{}

void GildedRose::updateQuality()
{
    for (int i = 0; i < items.size(); i++)
    {

        if (items[i].name == "Aged Brie")
        {
            AgedBrie strategy(items[i].quality);
            strategy.updateQuality();
        }
        else if (items[i].name == "Sulfuras, Hand of Ragnaros")
        {
            Sulfuras strategy;
            strategy.updateQuality();
        }
        else if (items[i].name == "Backstage passes to a TAFKAL80ETC concert")
        {
            BackstagePasses strategy(items[i].quality, items[i].sellIn);
            strategy.updateQuality();
        }
        else if (items[i].name == "Conjured Mana Cake")
        {
            Conjured strategy(items[i].quality);
            strategy.updateQuality();
        }
        else
        {
            Normal strategy(items[i].quality);
            strategy.updateQuality();
        }

        if (items[i].name != "Sulfuras, Hand of Ragnaros") items[i].sellIn -= 1;

    }
}