//
// Created by kuba on 2017-12-04.
//

#include "Item.h"

Item::Item(const std::string &Name, int GP, int SP, int CP) : Name(Name), GP(GP), SP(SP), CP(CP) {}

std::string &Item::getName() {
    return Name;
}
