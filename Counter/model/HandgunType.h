//
// Created by DavoudAbadi on 12/8/2023.
//

#ifndef COUNTER_HANDGUNTYPE_H
#define COUNTER_HANDGUNTYPE_H


#include <string>

enum class Type{
    REVOLVER,
    GLOCK_18,
    DESERT_EAGLE,
    UPS_S
};

struct HandgunType{
    std::string name;
    int cost;
    int damage;
    int price;
    bool isForTerrorist;
    Type type;
};

const HandgunType properties[4] = {
        {"Revolver", }
};

#endif //COUNTER_HANDGUNTYPE_H
