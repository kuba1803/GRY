//
// Created by kuba on 2017-12-04.
//

#include "Armor.h"

Armor::Armor(const std::string &Name, int GP, int SP, int CP, int defBonus, armorType Type) : Item(Name, GP, SP, CP),
                                                                                              defBonus(defBonus),
                                                                                              Type(Type) {}
