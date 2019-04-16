//
// Created by Nassim EL HORMI on 17/09/2018.
//

#include "Scene.hh"
#include "TimeManager.hh"
#include "AbstractEntity.hh"


std::list<AbstractEntity *> Scene::GetEntities() const {

    return _entities;
}

void Scene::AddEntity(AbstractEntity* newEntity) {
    this->_entities.insert(this->_entities.end(), newEntity);
}

void Scene::RemoveEntity(AbstractEntity* entity) {
    this->_entities.remove(entity);
}


void Scene::Update() {
    TimeManager::GetInstance().Update();
    for (AbstractEntity *n : this->_entities)
    {
        n->Update();
        n->Draw();
    }
}

Scene::Scene() {

}

Scene::~Scene() {}



