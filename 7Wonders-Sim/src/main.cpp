#include <iostream>
#include "Game.h"
#include "cards/Card.h"
#include "cards/BrownCard.h"
#include "cards/CardFactory.h"

int main() {
    auto d = CardFactory::generateDecks(3);
    for(auto it = d[1].begin(); it != d[1].end(); ++ it){
        std::cout << *it << std::endl;
    }

    auto v = vector<int>({1,2,3,4});
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(v), std::end(v), rng);
    for(auto i = v.begin(); i != v.end(); ++ i){
        std::cout<<*i<<std::endl;
    }
    return 0;
}
