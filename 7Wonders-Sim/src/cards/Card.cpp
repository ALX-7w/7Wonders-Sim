//
// Created by antonin on 07/03/2021.
//

#include "Card.h"


Card::Card(string name, map<Resource, int> cost, vector<string> chainFrom,
           vector<string> chainTo, int nbPlayerMin) :
           name(name), cost(cost), chainFrom(chainFrom), chainTo(chainTo), nbPlayerMin(nbPlayerMin) {

}

map<int, vector<Card>> Card::generateCards(int nbPlayer) {
    auto ret =  map<int, vector<Card>>();
    ret.insert(pair<int, vector<Card>>(1, vector<Card>()));
    //ret[1].push_back();
}

std::ostream &operator<<(std::ostream& os, const Card &c){
    os << c.name;
}
