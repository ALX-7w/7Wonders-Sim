//
// Created by antonin on 07/03/2021.
//

#ifndef INC_7WONDERS_SIM_BROWNCARD_H
#define INC_7WONDERS_SIM_BROWNCARD_H

#include "Card.h"
#include <string>

class BrownCard : public Card{
public:
    BrownCard(string name, map<enum Resource,int> cost,
            vector<string> chainFrom, vector<string> chainTo,
            int nbPlayerMin, vector<Resource> res, bool xorCard);

    std::vector<Resource> res;
    const bool xorCard;

};


#endif //INC_7WONDERS_SIM_BROWNCARD_H
