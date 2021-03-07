//
// Created by antonin on 07/03/2021.
//

#include "BrownCard.h"

BrownCard::BrownCard(string name, map<Resource, int> cost, vector<string> chainFrom,
                     vector<string> chainTo, int nbPlayerMin, vector<Resource> res, bool xorCard) :
                     Card(name, cost, chainFrom, chainTo, nbPlayerMin), res(res), xorCard(xorCard) {

}
