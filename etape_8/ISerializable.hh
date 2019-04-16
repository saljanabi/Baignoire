//
// Created by Nassim EL HORMI on 20/09/2018.
//

#ifndef LA_BAIGNOIRE_ISERIALIZABLE_HH
#define LA_BAIGNOIRE_ISERIALIZABLE_HH

#include <iostream>

class ISerializable {

public:
    virtual ~ISerializable() {}

    virtual std::string& Serialize() = 0;
};

#endif //LA_BAIGNOIRE_ISERIALIZABLE_HH
