//
// Created by valentiay on 06.02.17.
//

#include "../include/World.h"

World::World(sf::RenderWindow & window):
    window_(window),
    worldView_(window.getDefaultView()),
    worldBounds_(0.f, 0.f, worldView_.getSize().x, worldView_.getSize().y),
    spawnPos_(worldView_.getSize().x / 2, worldView_.getSize().y - 100),
    isMovingDown(false),
    isMovingLeft(false),
    isMovingRight(false),
    isMovingUp(false),
    player_(nullptr),
    java_(nullptr),
    playerSpeed(200.f)
{
    loadTextures();
    buildScene();
}



void World::loadTextures(){
    textures_.load(Textures::ID::Wall, "media/img/Beklemishev.jpg");
    textures_.load(Textures::ID::Player, "media/img/Javorski.jpg");
    textures_.load(Textures::ID::Floor, "media/img/kitten.png");
}



void World::buildScene(){
    for(std::size_t i = 0; i < LayerCount; i++){
        SceneNode::NodePtr layer(new SceneNode());
        layers_[i] = layer.get();
        sceneGraph_.attachChild(std::move(layer));
    }

    sf::Texture & texture = textures_.get(Textures::ID::Wall);
    sf::IntRect textureRect(worldBounds_);
    texture.setRepeated(true);

    std::unique_ptr<SpriteNode> backgroundSprite(new SpriteNode(texture,
                                                       textureRect));
    backgroundSprite->setPosition(0.f, 0.f);
    layers_[Background]->attachChild(std::move(backgroundSprite));

    std::unique_ptr<Entity> kitten(
            new Entity(textures_.get(Textures::ID::Floor)));
    kitten->setPosition(100.f, 100.f);
    player_ = kitten.get();
    layers_[Characters]->attachChild(std::move(kitten));

    std::unique_ptr<Entity> java(
            new Entity(textures_.get(Textures::ID::Player)));
    java->setPosition(300.f, 300.f);
    java->setVelocity(250.f, 250.f);
    java_ = java.get();
    layers_[Characters]->attachChild(std::move(java));
}



void World::update(sf::Time dt){
    sf::Vector2f velocity(0.f, 0.f);
    if(isMovingUp)
        velocity.y -= playerSpeed;
    if(isMovingDown)
        velocity.y += playerSpeed;
    if(isMovingRight)
        velocity.x += playerSpeed;
    if(isMovingLeft)
        velocity.x -= playerSpeed;
    player_->setVelocity(velocity);

    sf::Vector2f position = java_->getPosition();
    velocity = java_->getVelocity();
    if(position.x > worldBounds_.width - 217 || position.x < 0){
        velocity.x = -velocity.x;
        java_->setVelocity(velocity);
    }
    if(position.y > worldBounds_.height - 281 || position.y < 0){
        velocity.y = -velocity.y;
        java_->setVelocity(velocity);
    }

    while (!commandQueue.empty()) {
        sceneGraph_.onCommand(commandQueue.front(), dt);
        commandQueue.pop();
    }
    sceneGraph_.update(dt);
}



void World::draw(){
    window_.setView(worldView_);
    window_.draw(sceneGraph_);
}



CommandQueue &World::getCommandQueue() {
    return commandQueue;
}
