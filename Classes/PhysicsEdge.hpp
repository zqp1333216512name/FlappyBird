//
//  PhysicsEdge.hpp
//  FlappyBird
//
//  Created by 维尼的小熊 on 2017/2/10.
//
//  topPhysicsEdge

#ifndef PhysicsEdge_hpp
#define PhysicsEdge_hpp

#include "Const.hpp"

class PhysicsEdge:public Node {
    
public:
    virtual bool init();
    CREATE_FUNC(PhysicsEdge);
};

#endif /* PhysicsEdge_hpp */
