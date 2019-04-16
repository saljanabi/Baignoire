//
// Created by Nassim EL HORMI on 16/09/2018.
//

#include "SprinterMonster.hh"
#include "TimeManager.hh"
#include "single_include/nlohmann/json.hpp"

// for convenience
using json = nlohmann::json;

SprinterMonster::SprinterMonster() {
    this->SetX(0);
    this->SetY(0);
    this->SetLife(25);
}

SprinterMonster::~SprinterMonster() {

}

void SprinterMonster::Update() {
    double x, y;

    x = this->GetX();
    y = this->GetY();
    x = x + ((TimeManager::GetInstance().GetElapsedTime() * 0.5) / 100);
    y = y + ((TimeManager::GetInstance().GetElapsedTime() * 0.5) / 100);
    this->SetX(x);
    this->SetY(y);
}

std::string &SprinterMonster::Serialize() {
    
    json j;
    
    j["x"] = this->GetX();
    j["y"] = this->GetY();
    j["life"] = this->GetLife();
    j["type"] = "SprinterMonster";
    
    
    static std::string s;
    s = j.dump();
    
    return s;
}
