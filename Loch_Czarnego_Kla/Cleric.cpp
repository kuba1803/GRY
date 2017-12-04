//
// Created by kuba on 2017-12-04.
//

#include "Cleric.h"

Cleric::Cleric():
    Character("Kyra",Race::Czlowiek,Alignment::NG,'K',13,8,14,12,17,12,10){
    god = Gods::Sarenrae;
    for(int i=0;i<Weapon::weaponList.size();i++){
        if(Weapon::weaponList[i].getName()=="Scimitar");
        {
            primWeapon = &Weapon::weaponList[i];
            break;
        }
    }
    skills.isDisableDevice = true;
    skills.disableDevice =1;
    skills.isHeal = true;
    skills.heal = 1;
    skills.isKnowledgeArcana=true;
    skills.isKnowledgeHistory=true;
    skills.isKnowledgeReligion=true;
    skills.knowledgeReligion = 1;
    skills.isSenseMotive =true;
    skills.isSpellCraft=true;
    shields= true;
    lightArmor=true;
    mediumArmor=true;
    simpleWeapons=true;
    preferweapon.push_back(primWeapon);
    fortitudeSave=2;
    reflexSave=0;
    willSave=2;
    skillrank+=2;
    attackBonus=0;



}

int Cleric::getFortitudeSave() {
    return fortitudeSave+Character::mod(getConstitution());
}

int Cleric::getReflexSave() {
    return reflexSave+Character::mod(getDexterity());
}

int Cleric::getWillSave() {
    return willSave+Character::mod(getWisdom());
}
