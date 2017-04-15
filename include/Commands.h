//
// Created by valentiay on 09.04.17.
//

#ifndef GAME_COMMANDS_H
#define GAME_COMMANDS_H

#include <functional>
#include <queue>
#include "SFML/Graphics.hpp"

namespace Category{
    unsigned enum Type{
        None    = 0,
        Java    = 1,
        Kitten  = 1 << 1
    };
}

class SceneNode;

typedef std::function<void(SceneNode &, sf::Time dt)> Action;

struct Command{
    Command(Category::Type target, Action acrion);

    Category::Type target;
    Action action;
};

typedef std::queue<Command> CommandQueue;

#endif //GAME_COMMANDS_H
