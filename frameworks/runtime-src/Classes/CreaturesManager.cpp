//
//  CreaturesManager.cpp
//  Human
//
//  Created by 李鹏辉 on 17/2/10.
//
//

#include "CreaturesManager.hpp"
static CreaturesManager* creaturesManagerInstance=nullptr;
CreaturesManager* CreaturesManager::getInstance()
{
    if (creaturesManagerInstance) {
        creaturesManagerInstance=new CreaturesManager();
    }
    return creaturesManagerInstance;
}
