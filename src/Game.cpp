//
// Created by valentiay on 06.02.17.
//

#include "../include/Game.h"

Game::Game():
    window_(sf::VideoMode(1366, 768), "Javorski"),
    world_(window_),
    dt_(sf::seconds(1.f / 60.f))
{}



void Game::run()
{
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;
    while(window_.isOpen()){
        timeSinceLastUpdate += clock.restart();
        processInput();
        while (timeSinceLastUpdate > dt_){
            timeSinceLastUpdate -= dt_;
            processInput();
            world_.update(dt_);
        }
        render();
    }
}



void Game::processInput()
{
    CommandQueue& commands = world_.getCommandQueue();
    sf::Event event;
    while (window_.pollEvent(event)) {
        player.handleEvent(event, commands);

        if (event.type == sf::Event::Closed)
            window_.close();

        player.handleRealtimeInput(commands);

//        switch (event.type) {
//            case sf::Event::KeyPressed:
//                handlePlayerInput(event.key.code, true);
//                break;
//            case sf::Event::KeyReleased:
//                handlePlayerInput(event.key.code, false);
//                break;
//            case sf::Event::Closed:
//                window_.close();
//                break;
//        }
    }
}



void Game::render()
{
    window_.clear();
    world_.draw();
    window_.display();
}



void Game::handlePlayerInput(sf::Keyboard::Key key, bool isPressed)
{
    if (key == sf::Keyboard::W)
        world_.isMovingUp = isPressed;
    else if (key == sf::Keyboard::S)
        world_.isMovingDown = isPressed;
    else if (key == sf::Keyboard::A)
        world_.isMovingLeft = isPressed;
    else if (key == sf::Keyboard::D)
        world_.isMovingRight = isPressed;
}

