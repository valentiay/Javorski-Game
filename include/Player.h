//
// Created by valentiay on 09.04.17.
//

#ifndef GAME_PLAYER_H
#define GAME_PLAYER_H

#include "SFML/Graphics.hpp"
#include "Commands.h"
#include "Actions.h"

// TODO: Implement better
class Player{
public:
    // Handles one-time events
    void handleEvent(const sf::Event & event, CommandQueue & commands);
    // Handles real-time input
    void handleRealTimeInput(CommandQueue &commands);
};

#endif //GAME_PLAYER_H
