#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    ofSetBackgroundAuto(false);
    
     sun.load("sun.png");
      fire.load("fire.mp3");
     fire.play();
    fire.setLoop(true);
    size_t number =200;
    int dia = ofGetWidth()/ofRandom(6,200);

    ball fallingball;
    
    
    
    for (int i =0; i<number+3; i+=3) {
        float xball=dia/2+ i*dia;

        ofSetColor(255,180,0,ofRandom(6));
        
        
        fallingball.position.x= ofRandom(0,1) * xball;
        fallingball.position.y=ofRandom(50,200);
        fallingball.velocity.y=ofRandom(0.1,1);
         fallingball.velocity.x=ofRandom(-0.1,1);
        fallingball.acceleration.y=ofRandom(0.05,0.8);
           fallingball.acceleration.x=ofRandom(-0.05,0.05);
        crowd.push_back(fallingball);
        
        
        
    }
    
 }

//--------------------------------------------------------------
void ofApp::update(){
    
    
   
    for(ball&dude:crowd){
        
        dude.update();
        
        
    }
    
    
   }

//--------------------------------------------------------------
void ofApp::draw(){
    
        sun.draw(0,0,1600,1200);
    
    
    for(ball& dude:crowd){
        
        dude.draw();
        
        
    }
       
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
