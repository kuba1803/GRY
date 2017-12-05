//
// Created by kuba on 2017-12-04.
//

#ifndef LOCH_CZARNEGO_KLA_CHARACTER_H
#define LOCH_CZARNEGO_KLA_CHARACTER_H

#include <iostream>
#include <string>
#include "Race.h"
#include "Alignment.h"
#include "Weapon.h"
#include "Tests.h"
class Character {
public:
    Character(const std::string &name, Race race, Alignment alignment, char gender, int strenght, int Dexterity,
              int constitution, int intelligance, int wisdom, int charisma, int hitPoint);


private:

    std::string name;
    Race race;
    Alignment alignment;
    char gender;
    int strenght;
    int Dexterity;
    int constitution;
    int intelligance;
    int wisdom;
    int charisma;
public:
    int getStrenght() const;

    int getDexterity() const;

    int getConstitution() const;

    int getIntelligance() const;

    int getWisdom() const;

    int getCharisma() const;

    int hitPoint;
protected:
    class Skills{
    public:
        bool isAcrobatics;
        int acrobatics;
        bool isBluff;
        int bluff;
        bool isClimb;
        int climb;
        bool isDisableDevice;
        int disableDevice;
        bool isHeal;
        int heal;
        bool isKnowledgeArcana;
        int knowledgeArcana;
        bool isKnowledgeDungeoneering;
        int knowledgeDungeoneering;
        bool isKnowledgeGeography;
        int knowledgeGeography;
        bool isKnowledgeHistory;
        int knowledgeHistory;
        bool isKnowledgeLocal;
        int knowledgeLocal;
        bool isKnowledgeNature;
        int knowledgeNature;
        bool isKnowledgeReligion;
        int knowledgeReligion;
        bool isPerception;
        int perception;
        bool isRide;
        int ride;
        bool isSenseMotive;
        int senseMotive;
        bool isSpellCraft;
        int spellCraft;
        bool isStealth;
        int stealth;
        bool isSwim;
        int swim;
        Skills();
    };
    Skills skills;
    bool shields;
    bool lightArmor;
    bool mediumArmor;
    bool heavyArmor;
    bool simpleWeapons;
    bool martialWeapons;
    std::vector<Weapon*> preferweapon;
    Weapon * primWeapon;
    Weapon * secondWeapon;
    int fortitudeSave;
    int reflexSave;
    int willSave;
    int skillrank;
    int attackBonus;
public:
    int getAttackBonus(Weapon * weapon) const;

    void setAttackBonus(int attackBonus);

protected:
    bool improvedInitiative;

public:
    virtual int getFortitudeSave()=0;
    virtual int getReflexSave()=0;
    virtual int getWillSave()=0;
    static int mod(int i);
    int attackPirmWeapon(int rolled);
    int attackSecondWeapon(int rolled);
    int getInitiative();

};



#endif //LOCH_CZARNEGO_KLA_CHARACTER_H
