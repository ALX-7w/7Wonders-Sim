//
// Created by antonin on 07/03/2021.
//

#ifndef INC_7WONDERS_SIM_CARDFACTORY_H
#define INC_7WONDERS_SIM_CARDFACTORY_H

#include <string>
#include <map>
#include <vector>
#include "Resource.h"
#include "Card.h"
#include <algorithm>
#include <random>
#include "BrownCard.h"
#include "GreyCard.h"
#include "GreenCard.h"

using std::vector, std::map, std::pair, std::string;

class CardFactory {
public :
    static map<int,vector<Card>> generateDecks(int nbPlayers);
private:
    static vector<Card> generateAgeDeck(int nbPlayers, int age);
};


#endif //INC_7WONDERS_SIM_CARDFACTORY_H
