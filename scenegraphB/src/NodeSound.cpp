//
//  NodeSound.cpp
//  scenegraphB
//
//  Created by Johann Diedrick on 9/19/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "NodeSound.h"
#include "ofGraphics.h"
#include "ofMain.h"

void NodeSound::setup(){
    
    //sine wave stuffs
    mFreq               = 440;
    sampleRate 			= 44100;
	phase 				= 0;
	phaseAdder 			= 0.0f;
	phaseAdderTarget 	= 0.0f;
	volume				= 0.1f;
	bNoise 				= false;
    int bufferSize = 512;
    lAudio.assign(bufferSize, 0.0);
	rAudio.assign(bufferSize, 0.0);
    
    soundStream.setup(2, 0, sampleRate, bufferSize, 4);

}


void NodeSound::update(){
    //
}

void NodeSound::draw(){
    //
}