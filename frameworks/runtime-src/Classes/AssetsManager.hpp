//
//  AssetsManager.hpp
//  Human
//  资源管理类
//  所有的图集素材、png、jpg等素材统一从这个地方进行加载及获取
//  Created by 李鹏辉 on 17/2/10.
//
//

#ifndef AssetsManager_hpp
#define AssetsManager_hpp

#include "cocos2d.h"
USING_NS_CC;
class AssetsManager
{
public:
    /**
     资源管理的单例模式
     */
    static AssetsManager* getInstance();
    /**
     同步资源加载方法
     
     @param path     资源路径
     @param type     资源类型 1:PNG 2:JPG 3:其他
     @param callBack 加载成功后的回调方法
     */
    void addResource(std::string path,int type,int callBack);
    /**
     异步资源加载方法

     @param path     资源路径
     @param type     资源类型 1:PNG 2:JPG 3:其他
     @param callBack 加载成功后的回调方法
     */
    void addResourceByAsync(std::string path,int type,int callBack);
    
    /**
     根据资源路径删除该资源

     @param path 资源路径
     */
    void delResource(std::string path);
    /**
     删除所有弱引用资源
     */
    void delResourceByWeek();
    /**
     删除所有强引用资源
     */
    void delResourceByStrong();
    /**
     删除所有资源
     */
    void delResourceByAll(){delResourceByWeek();delResourceByStrong();}
    
    /**
     更改资源状态

     @param path 资源路径
     */
    void updResource(std::string path);
    
    /**
     获取资源素材，如果当前资源列表中不存在则尝试加载该资源

     @param path 资源路径
     */
    void getResource(std::string path);
};
#endif /* AssetsManager_hpp */
