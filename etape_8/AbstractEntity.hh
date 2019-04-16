//
// Created by Nassim EL HORMI on 10/09/2018.
//

#ifndef LA_BAIGNOIRE_ABSTRACTENTITY_HH
#define LA_BAIGNOIRE_ABSTRACTENTITY_HH


#include "ISerializable.hh"

class AbstractEntity : public ISerializable {
public:
    virtual void Update() = 0;
    virtual void Draw() = 0;

    virtual std::string& Serialize() = 0;

    AbstractEntity();
    virtual ~AbstractEntity();
};


#endif //LA_BAIGNOIRE_ABSTRACTENTITY_HH
