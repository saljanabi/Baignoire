//
// Created by Nassim EL HORMI on 16/09/2018.
//

#include "SprinterMonster.hh"
#include "TimeManager.hh"
#include <unistd.h>

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
