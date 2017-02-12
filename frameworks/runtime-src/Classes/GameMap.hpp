//
//  GameMap.hpp
//  Human
//  游戏内场景，角色，怪物等显示在此进行组织
//  Created by 李鹏辉 on 17/2/12.
//
//

#ifndef GameMap_hpp
#define GameMap_hpp

#include "cocos2d.h"
USING_NS_CC;

class GameMap{
public:
    /**
     地图单例
     @return GameMap
     */
    static GameMap* getInstance();
public:
    ///地表层
    Layer* mapLayer;
    
    ///生物所在层
    Layer* aliveLayer;
    
    ///技能等特效层,在玩家层之上
    Layer* effectLayer;
    
    ///技能特效层，在玩家层之下
    Layer* bottomEffectLayer;
};
#endif /* GameMap_hpp */
