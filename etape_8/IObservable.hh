//
// Created by Nassim EL HORMI on 17/09/2018.
//

#ifndef LA_BAIGNOIRE_IOBSERVABLE_HH
#define LA_BAIGNOIRE_IOBSERVABLE_HH

#include <list>

class IObserver;
class IObservable {

public:
    virtual ~IObservable() {}

    virtual void AddObserver(IObserver* observer) = 0;
    virtual void RemoveObserver(IObserver* observer) = 0;
};

#endif //LA_BAIGNOIRE_IOBSERVABLE_HH
