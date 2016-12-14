#pragma once

#include "ofMain.h"


#include "ball.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    ball ball0;
    ball ball1;
    ball ball2;
    float x =0;
    float xVelocity =1;
    std::vector<ball> crowd;
    
    ofImage sun;
    
    ofSoundPlayer   fire;
    
    
    
    
    
    
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
    
};
