//
// Created by antonin on 07/03/2021.
//

#include "Resource.h"

std::ostream &operator<<(std::ostream& os, const Resource &r){
    switch (r) {
        case Resource::wood : os << "wood"; break;
        case Resource::stone : os << "stone"; break;
        case Resource::clay : os << "clay"; break;
        case Resource::ore : os << "ore"; break;
        case Resource::loom : os << "loom"; break;
        case Resource::glass : os << "glass"; break;
        case Resource::papyrus : os << "papyrus"; break;
        case Resource::victory : os << "victory"; break;
        case Resource::shield : os << "shield"; break;
        case Resource::compass : os << "compass"; break;
        case Resource::gear : os << "gear"; break;
        case Resource::tablet : os << "tablet"; break;
        case Resource::gold : os << "gold"; break;
    }
}