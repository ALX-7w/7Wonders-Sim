cmake_minimum_required(VERSION 3.17)
project(7Wonders_Sim)

set(CMAKE_CXX_STANDARD 14)

add_executable(7Wonders_Sim src/main.cpp src/Game.cpp src/Game.h src/wonders/Wonder.cpp src/wonders/Wonder.h src/cards/Card.cpp src/cards/Card.h src/cards/BrownCard.cpp src/cards/BrownCard.h src/cards/Ressources.cpp src/cards/Ressources.h src/cards/CardFactory.cpp src/cards/CardFactory.h)