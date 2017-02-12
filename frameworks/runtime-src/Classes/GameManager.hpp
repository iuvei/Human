//
//  GameManager.hpp
//  Human
//
//  Created by 李鹏辉 on 17/2/10.
//
//

#ifndef GameManager_hpp
#define GameManager_hpp

#include "cocos2d.h"
#include "CreaturesManager.hpp"
#include "AssetsManager.hpp"
#include "SocketManager.hpp"
#include "MapsManager.hpp"
USING_NS_CC;
class GameManager
{
public:
    static GameManager* getInstance();
public:
    MapsManager* mapsManager;
    AssetsManager* assetsManager;
    SocketManager* socketManager;
    CreaturesManager* creaturesManager;
private:
    
};
#endif /* GameManager_hpp */
