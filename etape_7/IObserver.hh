//
// Created by Nassim EL HORMI on 17/09/2018.
//

#ifndef LA_BAIGNOIRE_IOBSERVER_HH
#define LA_BAIGNOIRE_IOBSERVER_HH

#include "IObservable.hh"

class IObservable;
class IObserver {
    
public:
    virtual ~IObserver() {}
    
    virtual void Notify(IObservable* observable) = 0;
};

#endif //LA_BAIGNOIRE_IOBSERVER_H
