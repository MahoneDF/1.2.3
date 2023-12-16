//
// Created by DavoudAbadi on 12/1/2023.
//

#ifndef COUNTER_HEAVY_GUN_H
#define COUNTER_HEAVY_GUN_H


#include "Gun.h"

class Heavy_gun : public Gun{
public:
    Heavy_gun(const std::string &name1);
    int get_price() override;
    int get_damage() override;
    int get_cost() override;
    bool is_for_terrorist() override;
};


#endif //COUNTER_HEAVY_GUN_H
