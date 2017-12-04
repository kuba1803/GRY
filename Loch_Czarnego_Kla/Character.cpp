//
// Created by kuba on 2017-12-04.
//

#include "Character.h"

Character::Skills::Skills() {
     isAcrobatics= false;
     acrobatics=0;
     isBluff= false;
     bluff=0;
     isClimb= false;
     climb=0;
     isDisableDevice= false;
     disableDevice=-1;
     isHeal== false;
     heal=0;
     isKnowledgeArcana= false;
     knowledgeArcana=-1;
     isKnowledgeDungeoneering= false;
     knowledgeDungeoneering=-1;
     isKnowledgeGeography= false;
     knowledgeGeography=-1;
     isKnowledgeHistory= false;
     knowledgeHistory=-1;
     isKnowledgeLocal= false;
     knowledgeLocal=-1;
     isKnowledgeNature= false;
     knowledgeNature=-1;
     isKnowledgeReligion= false;
     knowledgeReligion=-1;
     isPerception= false;
     perception=0;
     isRide= false;
     ride=0;
     isSenseMotive= false;
     senseMotive=0;
     isSpellCraft= false;
     spellCraft=-1;
     isStealth= false;
     stealth=0;
     isSwim= false;
     swim=0;

}




Character::Character(const std::string &name, Race race, Alignment alignment, char gender, int strenght, int Dexterity,
                     int constitution, int intelligance, int wisdom, int charisma, int hitPoint) : name(name),
                                                                                                   race(race),
                                                                                                   alignment(alignment),
                                                                                                   gender(gender),
                                                                                                   strenght(strenght),
                                                                                                   Dexterity(Dexterity),
                                                                                                   constitution(
                                                                                                           constitution),
                                                                                                   intelligance(
                                                                                                           intelligance),
                                                                                                   wisdom(wisdom),
                                                                                                   charisma(charisma),
                                                                                                   hitPoint(hitPoint) {
    if(race==Race::Czlowiek){
        skillrank=1;
    } else {
        skillrank=0;
    }
}

int Character::getStrenght() const {
    return strenght;
}

int Character::getDexterity() const {
    return Dexterity;
}

int Character::getConstitution() const {
    return constitution;
}

int Character::getIntelligance() const {
    return intelligance;
}

int Character::getWisdom() const {
    return wisdom;
}

int Character::getCharisma() const {
    return charisma;
}
