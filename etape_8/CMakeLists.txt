cmake_minimum_required(VERSION 3.12)
project(la_baignoire)

set(CMAKE_CXX_STANDARD 17)

add_executable(la_baignoire main.cpp AbstractEntity.cpp AbstractEntity.h Character.cpp Character.h TimeManager.cpp TimeManager.h ZombieMonster.cpp ZombieMonster.h SprinterMonster.cpp SprinterMonster.h MonsterFactory.cpp MonsterFactory.h Scene.cpp Scene.h IObservable.h IObserver.h ISerializable.h)