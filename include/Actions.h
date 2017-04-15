//
// Created by valentiay on 4/15/17.
//

#ifndef GAME_ACTIONS_H
#define GAME_ACTIONS_H

#include <functional>
#include <cassert>
#include "SFML/Graphics.hpp"
#include "Commands.h"
#include "SceneGraph.h"

// Function for downcast in commandQueue
template <typename Object, typename Function>
Action derivedAction(Function fn){
        return [=] (SceneNode & node, sf::Time dt){
            // Check if cast is safe
            assert(dynamic_cast<Object*>(&node) != nullptr);
            // Downcast and call function
            fn(static_cast<Object&>(node), dt);
        };
};



// Changes Entity coordinates on Vector2f(x, y)
class Mover{
public:
    Mover(float x, float y);
    Mover(sf::Vector2f delta);

    void operator()(Entity & entity, sf::Time dt) const;

private:
    sf::Vector2f delta_;
};

#endif //GAME_ACTIONS_H
