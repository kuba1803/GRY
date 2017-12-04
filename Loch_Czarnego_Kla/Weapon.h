//
// Created by kuba on 2017-12-04.
//

#ifndef LOCH_CZARNEGO_KLA_WEAPON_H
#define LOCH_CZARNEGO_KLA_WEAPON_H

#include "Item.h"
#include "ItemType.h"
#include <vector>
class Weapon: public Item {
public:
    Weapon(const std::string &Name, int GP, int SP, int CP);

    Weapon(const std::string &Name, int GP, int SP, int CP, int rangeIncement, int hands, attackType first,
           attackType second, int demageMultiple, int demageD, int critMin, int critMultiple);

private:
    int rangeIncement;
    int hands;
    attackType first;
    attackType second;
    int demageMultiple;
    int demageD;
    int critMin;
    int critMultiple;


public:
    static std::vector<Weapon> weaponList;

};




#endif //LOCH_CZARNEGO_KLA_WEAPON_H
