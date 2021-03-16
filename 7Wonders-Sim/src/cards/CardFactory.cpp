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
        //Brown
        deck.push_back(BrownCard("Lumber Yard", map<Resource,int>() ,vector<string>(), vector<string>(),
                3, vector<Resource>({Resource::wood}), false));
        deck.push_back(BrownCard("Stone Pit", map<Resource,int>() ,vector<string>(), vector<string>(),
                3, vector<Resource>({Resource::stone}), false));
        deck.push_back(BrownCard("Clay Pool", map<Resource,int>() ,vector<string>(), vector<string>(),
                3, vector<Resource>({Resource::clay}), false));
        deck.push_back(BrownCard("Ore Vein", map<Resource,int>() ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::ore}), false));
        deck.push_back(BrownCard("Timber Yard", map<Resource,int>({{Resource::gold, 1}}) ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::stone, Resource::wood}), true));
        deck.push_back(BrownCard("Clay Pit", map<Resource,int>({{Resource::gold, 1}}) ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::clay, Resource::ore}), true));
        //Grey
        deck.push_back(GreyCard("Loom", map<Resource,int>() ,vector<string>(), vector<string>(),
                                 3, Resource::loom));
        deck.push_back(GreyCard("Glassworks", map<Resource,int>() ,vector<string>(), vector<string>(),
                                3, Resource::glass));
        deck.push_back(GreyCard("Press", map<Resource,int>() ,vector<string>(), vector<string>(),
                                3, Resource::papyrus));
    }
    else if(age==2){
        //Brown
        deck.push_back(BrownCard("Saw Mill", map<Resource,int>({{Resource::gold, 1}}) ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::wood, Resource::wood}), false));
        deck.push_back(BrownCard("Quarry", map<Resource,int>({{Resource::gold, 1}}) ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::stone, Resource::stone}), false));
        deck.push_back(BrownCard("Brickyard", map<Resource,int>({{Resource::gold, 1}}) ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::clay, Resource::clay}), false));
        deck.push_back(BrownCard("Foundry", map<Resource,int>({{Resource::gold, 1}}) ,vector<string>(), vector<string>(),
                                 3, vector<Resource>({Resource::ore, Resource::ore}), false));
        //Grey
        deck.push_back(GreyCard("Loom", map<Resource,int>() ,vector<string>(), vector<string>(),
                                3, Resource::loom));
        deck.push_back(GreyCard("Glassworks", map<Resource,int>() ,vector<string>(), vector<string>(),
                                3, Resource::glass));
        deck.push_back(GreyCard("Press", map<Resource,int>() ,vector<string>(), vector<string>(),
                                3, Resource::papyrus));
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
