//
//  MapsManager.cpp
//  Human
//
//  Created by 李鹏辉 on 17/2/10.
//
//

#include "MapsManager.hpp"

static MapsManager* mapsManagerInstance=nullptr;
MapsManager* MapsManager::getInstance()
{
    if (mapsManagerInstance==nullptr) {
        mapsManagerInstance=new MapsManager();
    }
    return mapsManagerInstance;
}
