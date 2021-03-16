//
// Created by antonin on 07/03/2021.
//

#ifndef INC_7WONDERS_SIM_CARD_H
#define INC_7WONDERS_SIM_CARD_H

#include <string>
#include <map>
#include <vector>
#include "Resource.h"

using std::vector, std::map, std::pair, std::string;


class Card {
public:
    Card(string name, map<Resource,int> cost,
         vector<string> chainFrom, vector<string> chainTo,
         int nbPlayerMin);
     string name;
     map<Resource, int> cost;
     vector<string> chainFrom;
     vector<string> chainTo;
     int nbPlayerMin;
     string color;
     virtual string getColor();
    static map<int, vector<Card>> generateCards(int nbPlayer);

friend std::ostream &operator<<(std::ostream&, const Card&);
};

#endif //INC_7WONDERS_SIM_CARD_H
