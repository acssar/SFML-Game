//
// Created by roman on 5/2/22.
//

#include "GameState.h"

GameState::GameState(sf::RenderWindow* window)
    : State(window){

}

GameState::~GameState(){

}

void GameState::endState() {
    std::cout << "Ending GameState!" << "\n";
}

void GameState::updateKeybinds(const float &dt) {
    this->checkForQuit();
}

void GameState::update(const float& dt){
    this->updateKeybinds(dt);

    this->player.update(dt);
}

void GameState::render(sf::RenderTarget* target){
    //TODO: better check for nullptr target
    if(target)
    {

    }
    else {
        this->player.render(this->window);
    }
}