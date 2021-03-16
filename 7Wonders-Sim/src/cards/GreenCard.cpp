//
// Created by antonin on 16/03/2021.
//

#include "GreenCard.h"

GreenCard::GreenCard(string name, map<Resource, int> cost, vector<string> chainFrom,
                   vector<string> chainTo, int nbPlayerMin, Resource res) :
        Card(name, cost, chainFrom, chainTo, nbPlayerMin), res(res) {
    color = "Green";
}