#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    root = NodeGeom();
    root.setName( "root" );
    root.setColor(ofColor(255,255,255));
    root.setPosition(ofVec3f(0.0, 0.0, 0.0));
    root.setSideLength(50.0);
    
    //child A, parent is root
    childA = NodeGeom();
    childA.setName( "childA" );
    root.setColor(ofColor(255,0,0));
    root.setPosition(ofVec3f(-100.0, 0.0, 0.0));
    root.setSideLength(25.0);

    root.addChild(&childA);
 
    /*
    //child B, parent is root
    childB = NodeBase();
    childB.setName( "childB" );
    root.addChild(&childB);
    
    //child C, parent is root
    childC = NodeBase();
    childC.setName( "childC" );
    root.addChild(&childC);
    
    //child A1, parent is A
    childA1 = NodeBase();
    childA1.setName( "childA1" );
    childA.addChild(&childA1);
    
    //child A2, parent is A
    childA2 = NodeBase();
    childA2.setName( "childA2" );
    childA.addChild(&childA2);
    
    //child B1, parent is B
    childB1 = NodeBase();
    childB1.setName( "childB1" );
    childB.addChild(&childB1);
    
    //child C1, parent is C
    childC1 = NodeBase();
    childC1.setName( "childC1" );
    childC.addChild(&childC1);
    
    //child A1A, parent is A1
    childA1A = NodeBase();
    childA1A.setName( "childA1A" );
    childA1.addChild(&childA1A);
    */
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(0,0,0);
    
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    root.draw();
    
    root.getRotation() = root.getRotation() + (0.0, 0.0, 0.01);
    
    root.print();
    
    childA.toggleVisibility();


}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}