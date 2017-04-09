//
// Created by valentiay on 06.02.17.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H

#include "World.h"
#include "Player.h"

// Priority class updates the scene and links commands creation with processing
class Game{
public:
    Game();

    // Updates the scene every dt
    void run();

private:
    // TODO: Move into player
    void processEvents();
    void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

    // Draws the scene
    void render();

    sf::RenderWindow window_;
    sf::Time dt_;

    // Creates commands
    Player player;
    // Stores and updates the scene
    World world_;
};

#endif //GAME_GAME_H
