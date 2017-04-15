//
// Created by valentiay on 06.02.17.
//

#include "../include/Game.h"

Game::Game():
    window_(sf::VideoMode(1366, 768), "Javorski"),
    world_(window_),
    dt_(sf::seconds(1.f / 60.f))
{}



void Game::run(){
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



void Game::processInput(){
    sf::Event event;
    while(window_.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            window_.close();
        }
        player_.handleEvent(event, world_.getCommandQueue());
    }
    player_.handleRealTimeInput(world_.getCommandQueue());
}



void Game::render(){
    window_.clear();
    world_.draw();
    window_.display();
}