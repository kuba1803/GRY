//
// Created by kuba on 2017-12-04.
//

#ifndef LOCH_CZARNEGO_KLA_CLERIC_H
#define LOCH_CZARNEGO_KLA_CLERIC_H

#include "Character.h"
#include "Gods.h"

class Cleric: public Character {
    Gods god;
public:
    Cleric();

    int getFortitudeSave() override;

    int getReflexSave() override;

    int getWillSave() override;

};


#endif //LOCH_CZARNEGO_KLA_CLERIC_H
