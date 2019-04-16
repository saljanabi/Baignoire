//
// Created by Nassim EL HORMI on 10/09/2018.
//

#include "Character.hh"
#include "AbstractEntity.hh"



void AbstractEntity::Update() {

}

void AbstractEntity::Draw() {

}

AbstractEntity::AbstractEntity() {

}

AbstractEntity::~AbstractEntity() {

}

namespace ns {
    // a simple struct to model a character
    struct character {
        int life;
        double x;
        double y;
        std::list<IObserver*> observers;
    };
}



