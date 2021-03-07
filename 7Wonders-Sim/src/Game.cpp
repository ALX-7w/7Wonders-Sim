//
// Created by antonin on 07/03/2021.
//

#include "Game.h"

Game::Game(int nbPlayers) : nbPlayers(nbPlayers) {}

int Game::getNbPlayers() {
    return nbPlayers;
}

std::ostream &operator<<(std::ostream& os, const Game &g){
    os << "Game with " << g.nbPlayers <<" players";
}
