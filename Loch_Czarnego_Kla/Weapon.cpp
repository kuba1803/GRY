//
// Created by kuba on 2017-12-04.
//

#include "Weapon.h"

std::vector<Weapon> init(){
    std::vector<Weapon> tmp;
    tmp.emplace_back("Scimitar",15,0,0,0,1,attackType::Slashing,attackType::None,1,6,18,2);
}

std::vector<Weapon> Weapon::weaponList(init());



Weapon::Weapon(const std::string &Name, int GP, int SP, int CP, int rangeIncement, int hands, attackType first,
               attackType second, int demageMultiple, int demageD, int critMin, int critMultiple) : Item(Name, GP, SP,
                                                                                                         CP),
                                                                                                    rangeIncement(
                                                                                                            rangeIncement),
                                                                                                    hands(hands),
                                                                                                    first(first),
                                                                                                    second(second),
                                                                                                    demageMultiple(
                                                                                                            demageMultiple),
                                                                                                    demageD(demageD),
                                                                                                    critMin(critMin),
                                                                                                    critMultiple(
                                                                                                            critMultiple)
                                                                                                    ,amunition(0) {}

int Weapon::getRange() const {
    return rangeIncement;
}

int Weapon::getCritMin() const {
    return critMin;
}

int Weapon::getCritMultiple() const {
    return critMultiple;
}

int Weapon::getDemageMultiple() const {
    return demageMultiple;
}

int Weapon::getDemageD() const {
    return demageD;
}


