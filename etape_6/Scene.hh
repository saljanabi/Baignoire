//
// Created by Nassim EL HORMI on 17/09/2018.
//

#ifndef LA_BAIGNOIRE_SCENE_HH
#define LA_BAIGNOIRE_SCENE_HH

#include <iostream>
#include <list>
#include "AbstractEntity.hh"

class Scene {
    
private:
    std::list<AbstractEntity*> _entities;
    
public:
    std::list<AbstractEntity*> GetEntities() const;
    void AddEntity(AbstractEntity* newEntity);
    void RemoveEntity(AbstractEntity* entity);
    void Update();
    Scene();
    ~Scene();
};



#endif //LA_BAIGNOIRE_SCENE_H
