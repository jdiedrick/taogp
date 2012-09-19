//
//  NodeSound.h
//  scenegraphB
//
//  Created by Johann Diedrick on 9/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef scenegraphB_NodeSound_h
#define scenegraphB_NodeSound_h

#include "NodeBase.h"
#include "ofMath.h"
#include "ofColor.h"
#include "ofMain.h"

class NodeSound : public NodeBase{
    
public:
    
    void setup();
    void update();
    void draw();
    
    NodeSound();
    
    NodeSound(int freq);
    
    int mFreq;
    int sampleRate;
	int phase; 			
	float phaseAdder; 		
	float phaseAdderTarget; 	
	float volume;				
	bool bNoise; 			
    
    ofSoundStream soundStream;
    
    vector <float> lAudio;
    vector <float> rAudio;
    

    
    
};


#endif
