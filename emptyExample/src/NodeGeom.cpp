//
//  NodeGeom.cpp
//  scenegraphB
//
//  Created by Johann Diedrick on 9/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "NodeGeom.h"
#include "ofGraphics.h"


NodeGeom::NodeGeom(){
    
    mPosition = ofVec3f( 0.0, 0.0, 0.0 );
    mRotation = ofVec3f( 0.0, 0.0, 0.0 );
    mScale = ofVec3f( 1.0, 1.0, 1.0 );

    mColor = ofColor(255, 255, 255);
    
    mSideLength = 1.0;
}


NodeGeom::NodeGeom(ofVec3f iPosition, ofVec3f iRotation, ofVec3f iScale){
    mPosition = iPosition;
    mRotation = iRotation;
    mScale = iScale;
    
    mColor = ofColor(255, 255, 255);
    
    mSideLength = 1.0;
}

void NodeGeom::draw(){
    if(getVisibility()){
        ofPushMatrix();
        ofTranslate(mPosition.x, mPosition.y, mPosition.z);
        ofScale(mScale.x, mScale.y, mScale.z);
        ofRotateX(mRotation.x);
        ofRotateY(mRotation.y);
        ofRotateZ(mRotation.z);
        
        //draw node's contents
        
        ofSetColor(mColor);
        
        ofRect(-mSideLength/2.0, -mSideLength/2.0, mSideLength, mSideLength);
        
        //draw children
        
      //  cout << "Drawing: " << mName << endl;
        
        int tChildCount = getChildCount();
        
        for (int i=0; i < tChildCount; i++){
            cout<<"i'm now gonna draw this child:" << mName << "w children #" << mChildren.size() << endl;
            mChildren[0]->draw();
        }
       ofPopMatrix();

    }
}



ofVec3f NodeGeom::getPosition(){
    return mPosition;
}

ofVec3f NodeGeom::getRotation(){
    return mRotation;
}

ofVec3f NodeGeom::getScale(){
    return mScale;
}

void NodeGeom::setPosition(ofVec3f iValue){
    mPosition = iValue;
}

void NodeGeom::setRotation(ofVec3f iValue){
    mRotation = iValue;
}

void NodeGeom::setScale(ofVec3f iValue){
    mScale = iValue;
}

ofColor NodeGeom::getColor(){
    return mColor;
}

void NodeGeom::setColor(ofColor iColor){
    mColor = iColor;
}

float NodeGeom::getSideLength(){
    return mSideLength;
}

void NodeGeom::setSideLength(float iLength){
    mSideLength = iLength;
}