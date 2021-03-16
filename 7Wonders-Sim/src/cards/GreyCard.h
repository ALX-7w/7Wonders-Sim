//
// Created by antonin on 16/03/2021.
//

#ifndef INC_7WONDERS_SIM_GREYCARD_H
#define INC_7WONDERS_SIM_GREYCARD_H

#include "Card.h"

class GreyCard : public Card {
public:
    GreyCard(string name, map<enum Resource,int> cost,
            vector<string> chainFrom, vector<string> chainTo,
            int nbPlayerMin, Resource res);
    Resource res;
};


#endif //INC_7WONDERS_SIM_GREYCARD_H
