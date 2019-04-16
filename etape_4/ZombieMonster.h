//
// Created by Nassim EL HORMI on 16/09/2018.
//

#ifndef LA_BAIGNOIRE_ZOMBIEMONSTER_HH
#define LA_BAIGNOIRE_ZOMBIEMONSTER_HH


#include "Character.hh"

class ZombieMonster : public Character{
public:
    virtual void Update() override;
    ZombieMonster();
    ~ZombieMonster();
};


#endif //LA_BAIGNOIRE_ZOMBIEMONSTER_H
