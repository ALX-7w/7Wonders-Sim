//
// Created by antonin on 07/03/2021.
//

#ifndef INC_7WONDERS_SIM_WONDER_H
#define INC_7WONDERS_SIM_WONDER_H

#include "../cards/Card.h"

enum class wonderNames {};
class Wonder {
public:
    bool isPlayable(Card c);
    void play(Card c);
};


#endif //INC_7WONDERS_SIM_WONDER_H
