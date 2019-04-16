//
// Created by Nassim EL HORMI on 16/09/2018.
//

#include "ZombieMonster.hh"
#include "TimeManager.hh"
#include "single_include/nlohmann/json.hpp"

// for convenience
using json = nlohmann::json;

ZombieMonster::~ZombieMonster() {

}

ZombieMonster::ZombieMonster() {
    this->SetX(0);
    this->SetY(0);
    this->SetLife(100);
}

void ZombieMonster::Update() {
    double x, y;

    x = this->GetX();
    y = this->GetY();
    x = x + ((TimeManager::GetInstance().GetElapsedTime() * 0.1) / 100);
    y = y + ((TimeManager::GetInstance().GetElapsedTime() * 0.1) / 100);

    this->SetX(x);
    this->SetY(y);
}


std::string &ZombieMonster::Serialize() {
    
    json j;
    
    j["x"] = this->GetX();
    j["y"] = this->GetY();
    j["life"] = this->GetLife();
    j["type"] = "ZombieMonster";
    
    
    static std::string s;
    s = j.dump();
    
    return s;
}
