//
// Created by valentiay on 09.04.17.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "SFML/Graphics.hpp"
#include "Commands.h"

class Player{
public:
    void handleEvent(const sf::Event & event, CommandQueue & commands);
    void handleRealtimeInput(CommandQueue & commands);
};

#endif //GAME_PLAYER_H
