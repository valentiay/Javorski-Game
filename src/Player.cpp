//
// Created by valentiay on 4/16/17.
//

#include "../include/Player.h"

void Player::handleEvent(const sf::Event &event, CommandQueue &commands)
{
    // TODO
}



void Player::handleRealTimeInput(CommandQueue &commands)
{
    // TODO: Refactor
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        commands.push(Command(Category::Type::Kitten, derivedAction<Entity, Mover>(Mover(0, -1))));
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        commands.push(Command(Category::Type::Kitten, derivedAction<Entity, Mover>(Mover(-1, 0))));
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        commands.push(Command(Category::Type::Kitten, derivedAction<Entity, Mover>(Mover(0, 1))));
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        commands.push(Command(Category::Type::Kitten, derivedAction<Entity, Mover>(Mover(1, 0))));
    }
}