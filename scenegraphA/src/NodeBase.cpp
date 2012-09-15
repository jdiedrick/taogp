//
//  NodeBase.cpp
//  scenegraphA
//
//  Created by Johann Diedrick on 9/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "NodeBase.h"


NodeBase::NodeBase(){

    mName = "untitled";
    mVisibility = true;
    mParent = NULL;
    
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


void NodeBase::print(){
    if( getVisibility()){
        //std::string indent = " ";
        //int len = indent.length() * iIndent;
        
        cout<< mName << endl;
        
        int tChildCount = getChildCount();
        
        for (int i=0; i < tChildCount; i++){
            mChildren[i]->print();
        }
        
        
    }
}