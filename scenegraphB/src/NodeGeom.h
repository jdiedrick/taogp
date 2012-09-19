//
//  NodeGeom.h
//  scenegraphB
//
//  Created by Johann Diedrick on 9/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef scenegraphB_NodeGeom_h
#define scenegraphB_NodeGeom_h

#include "NodeBase.h"
#include "ofMath.h"
#include "ofColor.h"

class NodeGeom : public NodeBase{

public:
    
    NodeGeom();
    
    NodeGeom(ofVec3f iPosition, ofVec3f iRotation, ofVec3f iScale);
    
    ofVec3f mPosition;
    ofVec3f mRotation;
    ofVec3f mScale;
    
    ofColor mColor;
    
    float mSideLength;
    
    ofVec3f getPosition();
    
    ofVec3f getRotation();
    
    ofVec3f getScale();
    
    void setPosition(ofVec3f iValue);
    
    void setRotation(ofVec3f iValue);
    
    void setScale(ofVec3f iValue);
    
    ofColor getColor();
    
    void setColor(ofColor iColor);
    
    float getSideLength();
    
    void setSideLength(float iLength);    
    
    void draw();
    
    
};

#endif
