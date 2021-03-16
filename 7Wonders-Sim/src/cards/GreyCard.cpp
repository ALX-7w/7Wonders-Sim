//
// Created by antonin on 16/03/2021.
//

#include "GreyCard.h"

GreyCard::GreyCard(string name, map<Resource, int> cost, vector<string> chainFrom,
                     vector<string> chainTo, int nbPlayerMin, Resource res) :
        Card(name, cost, chainFrom, chainTo, nbPlayerMin), res(res) {
    color="Grey";
}
