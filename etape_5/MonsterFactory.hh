//
// Created by Nassim EL HORMI on 16/09/2018.
//

#ifndef LA_BAIGNOIRE_MONSTERFACTORY_HH
#define LA_BAIGNOIRE_MONSTERFACTORY_HH

#include <iostream>
#include "Character.hh"

class MonsterFactory {
public:
    Character* Create(const std::string& str);
};


#endif //LA_BAIGNOIRE_MONSTERFACTORY_HH
