//
//  NodeBase.h
//  emptyExample
//
//  Created by Johann Diedrick on 9/15/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef emptyExample_NodeBase_h
#define emptyExample_NodeBase_h

using namespace std;
#include <vector>

class NodeBase{
    
public:
    
    NodeBase();
    
    string mName;
    NodeBase* mParent;
    vector<NodeBase*> mChildren;
    
    bool mVisibility;    
    
    void setName(string iName);
    
    void addChild(NodeBase* iChild);
    
    void setParent(NodeBase* iParent);
    
    bool getVisibility();
    
    int getChildCount();
    
    void toggleVisibility();
    
    void print();
    
    virtual void draw();
    
    NodeBase* getChild(int iIndex);


};


#endif
