//
// Created by valentiay on 4/16/17.
//

#include <iostream>
#include "../include/Player.h"

void Player::handleEvent(const sf::Event &event, CommandQueue &commands)
{
    std::cout << "1\n";
}



void Player::handleRealTimeInput(CommandQueue &commands)
{
    std::cout << "2\n";
}