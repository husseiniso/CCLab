#include "ofApp.h"
int myCircleX;
int myCircleY;

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofBackground(255);
    
    ofSetFrameRate(1000);
    myCircleX = 500;
    myCircleY = 300;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
  
   myCircleY ++;
    if(myCircleY > 400)
    {myCircleY =380 ;}

    
  
}
//--------------------------------------------------------------
void ofApp::draw(){
  
    ofSetColor(0,0,255);
    ofCircle(myCircleX,myCircleY,60);
    
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
