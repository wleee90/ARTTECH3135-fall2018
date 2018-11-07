#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#include "ofxKinectV2.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    ofxKinectV2 kinect;
    ofPixels depthPixels;
    ofTexture depthTexture;
    
    ofPixels colorPixels;
    ofTexture finalTexture;
    
    ofxPanel gui;
    
    bool bDebug;
    
    // used for finding centroid
    // average x position
    float avgX;
    // average Y position
    float avgY;
    
    //total pixels counted
    float count;
};















