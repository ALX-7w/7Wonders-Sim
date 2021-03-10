//
// Created by antonin on 07/03/2021.
//

#include "CardFactory.h"



map<int, vector<Card>> CardFactory::generateDecks(int nbPlayers) {
    auto decks = map<int, vector<Card>>();
    decks.insert({1,generateAgeDeck(nbPlayers,1)});
    decks.insert({1,generateAgeDeck(nbPlayers,2)});
    decks.insert({1,generateAgeDeck(nbPlayers,3)});
    return decks;
}

/*
 * TODO Change to read cards from a file
 */
vector<Card> CardFactory::generateAgeDeck(int nbPlayers, int age) {
    auto deck = vector<Card>();
    if(age==1){
        deck.push_back(BrownCard("Lumber Yard", map<Resource,int>() ,vector<string>(), vector<string>(), 1, vector<Resource>({Resource::wood}), false));
        deck.push_back(BrownCard("Stone Pit", map<Resource,int>() ,vector<string>(), vector<string>(), 1, vector<Resource>({Resource::stone}), false));
        deck.push_back(BrownCard("Clay Pool", map<Resource,int>() ,vector<string>(), vector<string>(), 1, vector<Resource>({Resource::clay}), false));
    }
    else if(age==2){

    }
    else if(age==3){

    }
    else{
        std::cerr<<"Age should be 1, 2 or 3 and not "<<age;
    }
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(deck), std::end(deck), rng);
    return deck;
}
