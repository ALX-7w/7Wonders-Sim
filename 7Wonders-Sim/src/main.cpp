#include <iostream>
#include "Game.h"
#include "cards/Card.h"
#include "cards/BrownCard.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Game g = Game(3);
    std::cout << g << std::endl;
    Card c = BrownCard("LumberYard", map<Resource,int>() ,vector<string>(), vector<string>(), 1, vector<Resource>({Resource::wood}), false);
    std::cout << c << std::endl;
    return 0;
}
