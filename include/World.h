//
// Created by valentiay on 04.02.17.
//

#ifndef GAME_WORLD_H
#define GAME_WORLD_H

#include "ResourceHolder.h"
#include "SceneGraph.h"
#include "Commands.h"

// Stores and updates the scene
class World : private sf::NonCopyable{
public:
    explicit World(sf::RenderWindow & window);

    void update(sf::Time dt);
    void draw();

    CommandQueue & getCommandQueue();

    // TODO: Remove
    bool isMovingUp;
    bool isMovingLeft;
    bool isMovingDown;
    bool isMovingRight;

    float playerSpeed;

private:
    enum layer{
        Background,
        Characters,
        LayerCount
    };

    // Initializes the scene
    void loadTextures();
    void buildScene();

    // TODO: remove
    Entity * player_;
    Entity * java_;

    // Container for textures
    TextureHolder textures_;
    // Contains the scene
    SceneNode sceneGraph_;
    // References to layers
    std::array<SceneNode*, LayerCount> layers_;
    // Contains queue of commands
    CommandQueue commands;

    // VERY IMPORTANT STUFF
    // Never touch it with no need
    sf::View worldView_;
    sf::RenderWindow & window_;
    sf::FloatRect worldBounds_;
    sf::Vector2f spawnPos_;
};


#endif //GAME_WORLD_H