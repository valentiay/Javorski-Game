//
// Created by valentiay on 06.02.17.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

#include "World.h"
#include "Player.h"

class Game{
public:
    Game();

    void run();

private:
    void processEvents();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    void render();

    Player player;

    sf::RenderWindow window_;
    World world_;
    sf::Time dt_;
};

#endif //GAME_GAME_H
