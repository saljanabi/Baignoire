//
// Created by Nassim EL HORMI on 16/09/2018.
//

#include "MonsterFactory.hh"
#include "ZombieMonster.hh"
#include "SprinterMonster.hh"

Character *MonsterFactory::Create(const std::string &str) {
    
    Character *character = nullptr;
    
    if (str == "ZombieMonster")
    {
        character = new ZombieMonster();
    }
    else if (str == "SprinterMonster")
    {
        character = new SprinterMonster();
    }
    return character;
}
