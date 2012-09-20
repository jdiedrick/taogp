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

NodeSound::NodeSound(){

//void NodeSound::setup(){
    
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

void NodeSound::audioOut(float * output, int bufferSize, int nChannels){
	// sin (n) seems to have trouble when n is very large, so we
	// keep phase in the range of 0-TWO_PI like this:
	while (phase > TWO_PI){
		phase -= TWO_PI;
	}
    
	if ( bNoise == true){
		// ---------------------- noise --------------
		for (int i = 0; i < bufferSize; i++){
			lAudio[i] = output[i*nChannels    ] = ofRandom(0, 1) * volume;
			rAudio[i] = output[i*nChannels + 1] = ofRandom(0, 1) * volume;
		}
	} else {
		phaseAdder = 0.95f * phaseAdder + 0.05f * phaseAdderTarget;
		for (int i = 0; i < bufferSize; i++){
			phase += phaseAdder;
			float sample = sin(phase);
			lAudio[i] = output[i*nChannels    ] = sample * volume;
			rAudio[i] = output[i*nChannels + 1] = sample * volume;
		}
	}
    
}