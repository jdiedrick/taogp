//
//  NodeBase.cpp
//  emptyExample
//
//  Created by Johann Diedrick on 9/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "NodeBase.h"
#include <vector>
//#include "NodeGeom.h"



NodeBase::NodeBase(){
    
    mName = "untitled";
    mVisibility = TRUE;
    mParent = NULL;
    //mChildren = list<NodeBase>;
    
}

void NodeBase::setName(string iName){
    //sets the name of a node
    mName = iName;
}

void NodeBase::addChild(NodeBase* iChild){
    iChild->setParent(this);
    mChildren.push_back(iChild);
}

void NodeBase::setParent(NodeBase* iParent){
    mParent = iParent;
}

bool NodeBase::getVisibility(){
    return mVisibility;
}

int NodeBase::getChildCount(){
    return mChildren.size();
}

void NodeBase::toggleVisibility(){
    mVisibility = !mVisibility;
}

void NodeBase::print(){
    if( getVisibility()){
        //std::string indent = " ";
        //int len = indent.length() * iIndent;
        
      // cout << "Name: " << mName << " | Children: " << mChildren.size() << endl;

        int tChildCount = getChildCount();
        
        for (int i=0; i < tChildCount; i++){
            mChildren[i]->print();
        }
        
        
    }
}

NodeBase* NodeBase::getChild(int iIndex){
    if(iIndex>= 0 && iIndex < mChildren.size()){
        return mChildren[iIndex];
    }
    return NULL;
}


void NodeBase::draw(){
    //
}

void NodeBase::audioOut(){
    //
}