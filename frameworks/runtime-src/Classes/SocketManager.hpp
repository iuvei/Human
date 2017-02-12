//
//  SocketManager.hpp
//  Human
//
//  Created by 李鹏辉 on 17/2/10.
//
//

#ifndef SocketManager_hpp
#define SocketManager_hpp

#include "cocos2d.h"
class SocketManager
{
public:
    static SocketManager* getInstance();
    
    void connect(std::string ip,std::string port);
    void close();
};
#endif /* SocketManager_hpp */
