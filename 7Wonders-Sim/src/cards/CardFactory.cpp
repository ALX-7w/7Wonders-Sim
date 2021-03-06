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
        //Green
        deck.push_back(GreenCard("Apothecary", map<Resource,int>({{Resource::loom,1}}) ,vector<string>(), vector<string>({"Stables", "Dispensary"}),
                                3, Resource::compass));
        deck.push_back(GreenCard("Workshop", map<Resource,int>({{Resource::glass,1}}) ,vector<string>(), vector<string>({"Laboratory", "Archery Range"}),
                                3, Resource::gear));
        deck.push_back(GreenCard("Scriptorium", map<Resource,int>({{Resource::papyrus,1}}) ,vector<string>(), vector<string>({"Courthouse", "Library"}),
                                3, Resource::tablet));
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
        //Green
        deck.push_back(GreenCard("Library", map<Resource,int>({{Resource::loom,1},{Resource::stone, 2}}) ,vector<string>({"Scriptorium"}), vector<string>({"Senate", "University"}),
                                 3, Resource::tablet));
        deck.push_back(GreenCard("Dispensary", map<Resource,int>({{Resource::glass,1},{Resource::ore, 2}}) ,vector<string>({"Apothecary"}), vector<string>({"Lodge", "Arena"}),
                                 3, Resource::compass));
        deck.push_back(GreenCard("School", map<Resource,int>({{Resource::wood,1},{Resource::papyrus, 1}}) ,vector<string>(), vector<string>({"Academy", "Study"}),
                                 3, Resource::tablet));
        deck.push_back(GreenCard("Laboratory", map<Resource,int>({{Resource::papyrus,1},{Resource::clay, 2}}) ,vector<string>({"Workshop"}), vector<string>({"Observatory", "Siege Workshop"}),
                                 3, Resource::gear));

    }
    else if(age==3){
        //Green
        deck.push_back(GreenCard("Academy", map<Resource,int>({{Resource::glass,1},{Resource::stone, 3}}) ,vector<string>({"School"}), vector<string>(),
                                 3, Resource::compass));
        deck.push_back(GreenCard("Lodge", map<Resource,int>({{Resource::loom,1},{Resource::clay, 2},{Resource::papyrus, 1}}) ,vector<string>({"Dispensary"}), vector<string>(),
                                 3, Resource::compass));
        deck.push_back(GreenCard("University", map<Resource,int>({{Resource::glass,1},{Resource::wood, 2},{Resource::papyrus, 1}}) ,vector<string>({"Library"}), vector<string>(),
                                 3, Resource::tablet));
        deck.push_back(GreenCard("Study", map<Resource,int>({{Resource::loom,1},{Resource::wood, 1},{Resource::papyrus, 1}}) ,vector<string>({"School"}), vector<string>(),
                                 3, Resource::gear));
        deck.push_back(GreenCard("Observatory", map<Resource,int>({{Resource::glass,1},{Resource::ore, 2},{Resource::loom, 1}}) ,vector<string>({"Laboratory"}), vector<string>(),
                                 3, Resource::gear));
    }
    else{
        std::cerr<<"Age should be 1, 2 or 3 and not "<<age;
    }
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(deck), std::end(deck), rng);
    return deck;
}
