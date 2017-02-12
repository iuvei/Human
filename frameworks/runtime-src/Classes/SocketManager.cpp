//
//  SocketManager.cpp
//  Human
//
//  Created by 李鹏辉 on 17/2/10.
//
//

#include "SocketManager.hpp"
static SocketManager* socketManagerInstance=nullptr;
SocketManager* SocketManager::getInstance()
{
    if (socketManagerInstance==nullptr) {
        socketManagerInstance=new SocketManager();
    }
    return socketManagerInstance;
}
