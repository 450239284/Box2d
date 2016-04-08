//
//  BoxTest.hpp
//  Box2D
//
//  Created by student on 16/3/21.
//
//

#ifndef BoxTest_hpp
#define BoxTest_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "Box2d/Box2d.h"//包含Box2d物理引擎头文件
#include <iostream>
USING_NS_CC;
using namespace std;
//物理世界中的单位采用 MKS 公制系统 即米 千克 秒
#define PTM_PATIO 32//定义32像素为1米
class BoxTest:public Layer
{
    b2World * world;//用来创建世界的管理类
public:
    ~ BoxTest();
    static Scene * scene();
    virtual bool init();
    CREATE_FUNC(BoxTest);
    
    bool onTouchBegan(Touch * touch,Event * event);
    void initWorld();//初始化世界
    
    void addNewBoxAtPosition(Vec2 p);//添加一个矩形
    void addNewCircleAtPosition(Vec2 p);//添加一个圆
    void addNewJoinAtPosition(Vec2 p);//添加一个关节
    
    void update(float dt);
    /******************************************************/
    
};
#endif /* BoxTest_hpp */
