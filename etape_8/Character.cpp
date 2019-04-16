//
// Created by Nassim EL HORMI on 10/09/2018.
//

#include "Character.hh"
#include <iostream>

Character::~Character() {

}

std::list<IObserver*> Character::GetObserver() const {
    return this->_observer;
}

void Character::SetLife(int life) {
    this->_life = life;
    for (IObserver *n : this->_observer)
    {
        n->Notify(this);
    }
}

int Character::GetLife() const {
    return this->_life;
}

void Character::SetY(double y) {
    this->_y = y;
    for (IObserver *n : this->_observer)
    {
        n->Notify(this);
    }
}

double Character::GetY() const {
    return this->_y;
}

void Character::SetX(double x) {
    this->_x = x;
    for (IObserver *n : this->_observer)
    {
        n->Notify(this);
    }
}

double Character::GetX() const {
    return this->_x;
}

void Character::Update() {

}

void Character::Draw() {

}

void Character::AddObserver(IObserver *observer) {
    this->_observer.insert(this->_observer.end(), observer);
}

void Character::RemoveObserver(IObserver *observer) {
    this->_observer.remove(observer);
}

Character::Character() {

}


