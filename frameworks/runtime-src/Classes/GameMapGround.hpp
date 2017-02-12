//
//  GameMapGround.hpp
//  Human
//  游戏地图中的地表部分在此进行组织显示
//  Created by 李鹏辉 on 17/2/12.
//
//

#ifndef GameMapGround_hpp
#define GameMapGround_hpp

#include <stdio.h>
#include "cocos2d.h"
class GameMapGround{
public:
    
    /**
     根据坐标x，y显示当前可视范围内的地表素材

     @param x 焦点像素坐标x
     @param y 焦点像素坐标y
     */
    void render(int x,int y);
};
#endif /* GameMapGround_hpp */
