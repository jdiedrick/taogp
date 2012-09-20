#include "testApp.h"
#include "ofMath.h"

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
    childA.setColor(ofColor(255, 0, 0));
    childA.setPosition(ofVec3f(-100.0, 0.0, 0.0));
    childA.setSideLength(25.0);
    
    root.addChild(&childA);    
    
    //child B, parent is root
    childB = NodeGeom();
    childB.setName( "childB" );
    childB.setColor( ofColor(0, 255, 0));
    childB.setPosition(ofVec3f (0.0, 100.0, 0.0));
    childB.setSideLength(25.0);
    
    root.addChild(&childB);
    
    //child C, parent is root
    childC = NodeGeom();
    childC.setName( "childC" );
    childC.setColor( ofColor(0, 0, 255));
    childC.setPosition(ofVec3f (100.0, 0.0, 0.0));
    childC.setSideLength(25.0);
    
    root.addChild(&childC);
    
    //child A1, parent is A
    childA1 = NodeGeom();
    childA1.setName( "childA1" );
    childA1.setColor( ofColor(255, 128, 0));
    childA1.setPosition(ofVec3f (-50.0, 0.0, 0.0));
    childA1.setSideLength(12.5);
    
    childA.addChild(&childA1);
    
    
    //child A1A, parent is A1
    childA1A = NodeGeom();
    childA1A.setName( "childA1A" );
    childA1A.setColor( ofColor(255, 128, 128));
    childA1A.setPosition(ofVec3f (-25.0, 0.0, 0.0));
    childA1A.setSideLength(6.25);

    childA1.addChild(&childA1A);
    
    //child B1, parent is B
    childB1 = NodeGeom();
    childB1.setName( "childB1" );
    childB1.setColor( ofColor(0, 255, 128));
    childB1.setPosition(ofVec3f (0.0, 50.0, 0.0));
    childB1.setSideLength(12.5);
    
    childB.addChild(&childB1);
 
    //child C1, parent is C
    childC1 = NodeGeom();
    childC1.setName( "childC1" );
    childC1.setColor( ofColor(0, 128, 255));
    childC1.setPosition(ofVec3f (50.0, 0.0, 0.0));
    childC1.setSideLength(12.5);
    
    childC.addChild(&childC1);
    
    //child A2, parent is A
    childA2 = NodeGeom();
    childA2.setName( "childA2" );
    childA2.setColor( ofColor(255, 0, 128));
    childA2.setPosition(ofVec3f (0.0, 50.0, 0.0));
    childA2.setSideLength(12.5);
    
    childA.addChild(&childA2);
    
    
    rootSound = NodeSound();
    
  
    
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
   ofBackground(0);
    
    ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    
   // childA.draw();
    //childA1.draw();
    
    ofVec3f newRotation = root.getRotation();
    newRotation = newRotation + ofVec3f(0.0, 0.0, 0.1);
    root.setRotation(newRotation);
    
    root.print();
    
    root.draw();

    rootSound.audioOut();
  // childA.toggleVisibility();
    
    


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