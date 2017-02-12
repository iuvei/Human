#include "AssetsManager.hpp"

static AssetsManager* assetsManagerInstance=nullptr;
AssetsManager* AssetsManager::getInstance()
{
    if (assetsManagerInstance==nullptr) {
        assetsManagerInstance=new AssetsManager();
    }
    return assetsManagerInstance;
}
