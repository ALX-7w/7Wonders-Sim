//
// Created by antonin on 07/03/2021.
//

#ifndef INC_7WONDERS_SIM_GAME_H
#define INC_7WONDERS_SIM_GAME_H
#include <iostream>

class Game {
public:
    Game(int nbPlayers);
    int getNbPlayers();
    bool start();
    bool done();
    bool pickWonder();

private:
    int nbPlayers;
    void playAge(int age);
    void shuffleAndDraft(int age);
    void nextDraft(int age);
    void resolveWar(int age);


friend std::ostream &operator<<(std::ostream&, const Game &g);
};

#endif //INC_7WONDERS_SIM_GAME_H
