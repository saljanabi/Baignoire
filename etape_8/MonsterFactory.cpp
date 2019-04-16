//
// Created by Nassim EL HORMI on 16/09/2018.
//

#include "MonsterFactory.hh"
#include "ZombieMonster.hh"
#include "SprinterMonster.hh"
#include <iostream>
#include "single_include/nlohmann/json.hpp"

using nlohmann::json;

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

Character *MonsterFactory::Unserialize(const std::string & string) {
    
    Character *character_instance;
    json j = json::parse(string);
    
    std::string type = j.at("type").get<std::string>();
    
    character_instance = this->Create(type);
    if (character_instance == nullptr)
    {
        return nullptr;
    }
    character_instance->SetX(j.at("x").get<double>());
    character_instance->SetY(j.at("y").get<double>());
    character_instance->SetLife(j.at("life").get<int>());
    
    return character_instance;
}
