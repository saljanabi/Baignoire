//
// Created by Nassim EL HORMI on 16/09/2018.
//

#ifndef LA_BAIGNOIRE_SPRINTERMONSTER_HH
#define LA_BAIGNOIRE_SPRINTERMONSTER_HH


#include "Character.hh"

class SprinterMonster : public Character{

public:
    virtual void Update() override;
    SprinterMonster();
    ~SprinterMonster();
};


#endif //LA_BAIGNOIRE_SPRINTERMONSTER_H
