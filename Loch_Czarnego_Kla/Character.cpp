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
                                                                                                   hitPoint(hitPoint),
                                                                                                   improvedInitiative(
                                                                                                           false){
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


int Character::attackPirmWeapon(int rolled) {
    if(rolled>=primWeapon->getCritMin()){
        int tmp=0;
        for(int i=0;i<primWeapon->getCritMultiple();i++){
            tmp+=Tests::roll(primWeapon->getDemageMultiple(),primWeapon->getDemageD());
        }
        return tmp;
    }
    return Tests::roll(primWeapon->getDemageMultiple(),primWeapon->getDemageD());
}

int Character::attackSecondWeapon(int rolled) {
    if(rolled>=secondWeapon->getCritMin()){
        int tmp=0;
        for(int i=0;i<secondWeapon->getCritMultiple();i++){
            tmp+=Tests::roll(secondWeapon->getDemageMultiple(),secondWeapon->getDemageD());
        }
        return tmp;
    }
    return Tests::roll(secondWeapon->getDemageMultiple(),secondWeapon->getDemageD());
}

int Character::getInitiative() {
    return (improvedInitiative?4:0)+Character::mod(getDexterity());
}

int Character::getAttackBonus(Weapon *weapon=NULL) const {
    if(weapon==NULL || weapon->getRange()==0)return attackBonus + Character::mod(getStrenght());
    else return attackBonus+Character::mod(getDexterity());
}

void Character::setAttackBonus(int attackBonus) {
    Character::attackBonus = attackBonus;
}

int Character::mod(int i) {
    if(i==1)return -5;
    if(i<=3)return -4;
    if(i<=5)return -3;
    if(i<=7)return -2;
    if(i<=9)return -1;
    if(i<=11)return 0;
    if(i<=13)return 1;
    if(i<=15)return 2;
    if(i<=17)return 3;
    if(i<=19)return 4;
    return 5;
}
