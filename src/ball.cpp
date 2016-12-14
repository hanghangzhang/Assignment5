#include "ball.h"

void ball ::update(){
    
    
    velocity = velocity + acceleration;
    velocity *= drag;
    
    position = position + velocity;
    // check the x bounds
    if (position.x> ofGetWidth()){
        position.x = ofGetWidth();
        
        velocity.x *= -1;
        acceleration.x *= -1;
        
    }
    
    
    
    if(position.x<0){
        
        
        position.x =0;
        velocity.x *= -1;
        acceleration.x *= -1;
        
        }
    
    if(position.y> ofGetHeight()){
        
        
        position.y =  ofRandom(0,30);
        
    }
    
    if(position.y < 0){
        
        
        position.y = ofRandom(0,50);
        
    }
    
    
    
    
    
}


void ball ::draw(){
    
          ofDrawEllipse(position, ofRandom(5,35), ofRandom(6,40));
        
        
        
 
    
    
}



