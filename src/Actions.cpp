//
// Created by valentiay on 4/15/17.
//

#include "../include/Actions.h"

Mover::Mover(float x, float y):
        delta_(x, y){}

Mover::Mover(sf::Vector2f delta):
        delta_(delta){}



void Mover::operator()(Entity & entity, sf::Time dt) const
{
    entity.move(delta_);
}