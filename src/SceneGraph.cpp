//
// Created by valentiay on 07.02.17.
//

#include <assert.h>
#include "../include/SceneGraph.h"

/****************************SCENENODE*****************************************/

void SceneNode::attachChild(NodePtr child)
{
    child->father_ = this;
    children_.push_back(std::move(child));
}



SceneNode::NodePtr SceneNode::detatchChild(const SceneNode & node)
{
    auto found = std::find_if(children_.begin(), children_.end(),
    [&] (NodePtr & p) -> bool { return p.get() == &node;});
    assert(found != children_.end());
    NodePtr result = std::move(*found);
    result->father_ = nullptr;
    children_.erase(found);
    return result;
}



void SceneNode::update(sf::Time dt)
{
    updateCurrent(dt);
    for(const NodePtr & child : children_)
        child->update(dt);
};



void SceneNode::updateCurrent(sf::Time dt){}



void SceneNode::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    drawCurrent(target, states);
    for(const NodePtr & child : children_)
        child->draw(target, states);
}



void SceneNode::drawCurrent(sf::RenderTarget & target,
                            sf::RenderStates states) const {}



sf::Vector2f SceneNode::getAbsolutePosition()
{
    sf::Transform transform = sf::Transform::Identity;
    for(SceneNode * node = this; node != nullptr; node = node->father_)
        transform = node->getTransform() * transform;
    return transform * sf::Vector2f();
}

/****************************ENTITY********************************************/

Entity::Entity(const sf::IntRect & worldBounds, const sf::Texture & texture):
        worldBounds_(worldBounds)
{
    sprite_.setTexture(texture);
}



Entity::Entity(const sf::IntRect & worldBounds,
               const sf::Texture & texture,
               const sf::IntRect & rect):
        worldBounds_(worldBounds)
{
    sprite_.setTexture(texture);
    sprite_.setTextureRect(rect);
}



void Entity::setVelocity(float vx, float vy)
{
    sf::Vector2f velocity(vx, vy);
    velocity_ = velocity;
}



void Entity::setVelocity(sf::Vector2f velocity)
{
    velocity_ = velocity;
}



sf::Vector2f Entity::getVelocity() const
{
    return velocity_;
}



void Entity::drawCurrent(sf::RenderTarget & target,
                         sf::RenderStates states) const
{
    target.draw(sprite_, states);
}



void Entity::updateCurrent(sf::Time dt)
{
    move(velocity_ * dt.asSeconds());
}



sf::IntRect Entity::getRectangle(){
    return sprite_.getTextureRect();
}

/****************************JAVA**********************************************/

Java::Java(const sf::IntRect & worldBounds, const sf::Texture & texture):
        Entity(worldBounds, texture)
{
    setOrigin(217.0 / 2, 281.0 / 2);
}

Java::Java(const sf::IntRect & worldBounds,
           const sf::Texture & texture,
           const sf::IntRect & rect):
        Entity(worldBounds, texture, rect)
{
    setOrigin(217.0 / 2, 281.0 / 2);
}



void Java::updateCurrent(sf::Time dt)
{
    move(getVelocity() * dt.asSeconds());
    rotate(1);

    sf::Vector2f position = getPosition();
    sf::Vector2f velocity = getVelocity();
    if(position.x > worldBounds_.width - 217./2 || position.x < 0){
        velocity.x = -velocity.x;
        setVelocity(velocity);
    }
    if(position.y > worldBounds_.height - 281./2 || position.y < 0){
        velocity.y = -velocity.y;
        setVelocity(velocity);
    }
}

/****************************SPRITENODE****************************************/

SpriteNode::SpriteNode(const sf::Texture & texture)
{
    sprite_.setTexture(texture);
}



SpriteNode::SpriteNode(const sf::Texture & texture,
                       const sf::IntRect & rect)
{
    sprite_.setTexture(texture);
    sprite_.setTextureRect(rect);
}



void SpriteNode::drawCurrent(sf::RenderTarget & target,
                             sf::RenderStates states) const
{
    target.draw(sprite_, states);
}