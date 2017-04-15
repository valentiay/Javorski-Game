//
// Created by valentiay on 06.02.17.
//

#ifndef GAME_SCENENODE_H
#define GAME_SCENENODE_H

#include "SFML/Graphics.hpp"
#include "Commands.h"

// Base class for node in scene graph
class SceneNode: public sf::Transformable,
                 public sf::Drawable,
                 private sf::NonCopyable{
public:
    typedef std::unique_ptr<SceneNode> NodePtr;

    SceneNode();

    void attachChild(NodePtr child);
    NodePtr detatchChild(const SceneNode & node);

    // Recursively updates the scene
    void update(const sf::IntRect & worldBounds, sf::Time dt);
    // Recursively processes commands
    void onCommand(const Command & command, sf::Time dt);

    // Set category of Node
    void setCategory(Category::Type category);

    // Returns absolute position of current node
    sf::Vector2f getAbsolutePosition();

private:
    // Recursively draws the scene
    virtual void draw(sf::RenderTarget & target,
                      sf::RenderStates states) const final;
    // Draws current node. (Empty in the base class)
    virtual void drawCurrent(sf::RenderTarget & target,
                             sf::RenderStates states) const;

    // Updates current node. (Empty in the base class)
    virtual void updateCurrent(const sf::IntRect & worldBounds, sf::Time dt);

    SceneNode * father_;
    std::vector<NodePtr> children_;

    Category::Type category_;
};

/******************************************************************************/

// Can be drawn and has some logic
class Entity: public SceneNode{
public:
    explicit Entity(const sf::Texture & texture);
    explicit Entity(const sf::Texture & texture, const sf::IntRect & rect);

    void setVelocity(sf::Vector2f velocity);
    void setVelocity(float vx, float vy);
    sf::Vector2f getVelocity() const;

    sf::IntRect getRectangle();

private:

    void drawCurrent(sf::RenderTarget & target,
                     sf::RenderStates states) const override final;

    virtual void updateCurrent(const sf::IntRect & worldBounds,
                               sf::Time dt) override;

    sf::Vector2f velocity_;

    sf::Sprite sprite_;
};

/******************************************************************************/

class Java: public Entity{
public:
    explicit Java(const sf::Texture & texture);
    explicit Java(const sf::Texture & texture, const sf::IntRect & rect);

private:
    virtual void updateCurrent(const sf::IntRect & worldBounds,
                               sf::Time dt) override final;
};

/******************************************************************************/

class Kitten: public Entity{
public:
    explicit Kitten(const sf::Texture & texture);
    explicit Kitten(const sf::Texture & texture, const sf::IntRect & rect);
};

/******************************************************************************/

// Just a texture with a rectangle
class SpriteNode: public SceneNode{
public:
    explicit SpriteNode(const sf::Texture & texture);
    explicit SpriteNode(const sf::Texture & texture,
                        const sf::IntRect & rect);

private:
    void drawCurrent(sf::RenderTarget & target,
                     sf::RenderStates states) const override final;

    sf::Sprite sprite_;
};

#endif //GAME_SCENENODE_H
