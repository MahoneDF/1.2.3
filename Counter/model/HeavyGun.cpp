//
// Created by DavoudAbadi on 12/1/2023.
//

#include "Heavy_gun.h"

Heavy_gun::Heavy_gun(const std::string &name1) : Gun(name1) {
    name = name1;
    if(name1 == "AK"){
        cost = 2700;
        damage = 31;
        price = 100;
        for_terrorist = true;
    } else if (name1 == "AWP"){
        cost = 4300;
        damage = 110;
        price = 50;
        for_terrorist = true;
    }else if (name1 == "M4A1"){
        cost = 2700;
        damage = 29;
        price = 100;
        for_terrorist = false;
    } else if (name1 == "AWP"){
        cost = 4300;
        damage = 110;
        price = 50;
        for_terrorist = false;
    }
}

int Heavy_gun::get_price() {
    return price;
}

int Heavy_gun::get_damage() {
    return damage;
}

int Heavy_gun::get_cost() {
    return cost;
}

bool Heavy_gun::is_for_terrorist() {
    return for_terrorist;
}
