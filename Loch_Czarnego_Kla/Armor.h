//
// Created by kuba on 2017-12-04.
//

#ifndef LOCH_CZARNEGO_KLA_ARMOR_H
#define LOCH_CZARNEGO_KLA_ARMOR_H

#include "Item.h"
#include "ItemType.h"

class Armor:  public Item{
    int defBonus;
    armorType Type;
public:
    Armor(const std::string &Name, int GP, int SP, int CP, int defBonus, armorType Type);
};


#endif //LOCH_CZARNEGO_KLA_ARMOR_H
