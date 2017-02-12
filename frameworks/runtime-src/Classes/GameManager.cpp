//
//  GameManager.cpp
//  Human
//
//  Created by 李鹏辉 on 17/2/10.
//
//

#include "GameManager.hpp"
static GameManager* gameManagerInstance=nullptr;
GameManager* GameManager::getInstance()
{
    if (gameManagerInstance) {
        gameManagerInstance=new GameManager();
    }
    return gameManagerInstance;
}
