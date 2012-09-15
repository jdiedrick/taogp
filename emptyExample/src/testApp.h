#pragma once

#include "ofMain.h"
#include "NodeBase.h"
#include "NodeGeom.h"


class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    NodeGeom root;
    
    NodeGeom childA; 

    NodeGeom childA1;

    /*
    NodeBase childB;
    NodeBase childC;
    
    NodeBase childA2;
    
    NodeBase childB1;
    NodeBase childB2;
    
    NodeBase childC1;
    
    NodeGeom childA1A;
    */
};
