//
// Created by Nassim EL HORMI on 10/09/2018.
//

#include "Character.hh"

Character::~Character() {
    
}

void Character::SetLife(int life) {
    this->_life = life;
}

int Character::GetLife() const {
    return this->_life;
}

void Character::SetY(double y) {
    this->_y = y;
}

double Character::GetY() const {
    return this->_y;
}

void Character::SetX(double x) {
    this->_x = x;
}

double Character::GetX() const {
    return this->_x;
}

void Character::Update() {
    
}

void Character::Draw() {
    
}




