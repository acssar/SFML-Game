//
// Created by roman on 6/19/22.
//

#include "Player.h"

//Initializer functions
void Player::initVariables() {

}

void Player::initComponents() {
}

//Constructors / Destructors
Player::Player(float x, float y, sf::Texture* texture) {
    this->initVariables();
    this->initComponents();

    this->createSprite(texture);
    this->setPosition(x, y);

}

Player::~Player() {

}

