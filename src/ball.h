#pragma once

#include "ofMain.h"



class ball
{
public:
    void update();
    void draw();
    
    
    
    float width =ofRandom(0,30);
    float height =ofRandom(0,20);
    ofVec3f position; //  x,y,z position
    
    ofVec3f velocity;
    
    ofVec3f acceleration;
    
    float drag = 0.95;
    
    
    
    
    
    
};