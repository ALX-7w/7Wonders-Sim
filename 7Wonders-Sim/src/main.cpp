#include <iostream>
#include "Game.h"
#include "cards/Card.h"
#include "cards/BrownCard.h"
#include "cards/CardFactory.h"

int main() {
    auto d = CardFactory::generateDecks(3);
    for(auto it = d[1].begin(); it != d[1].end(); ++ it){
        std::cout << *it << " - " << it->getColor() <<std::endl;
    }

    return 0;
}
