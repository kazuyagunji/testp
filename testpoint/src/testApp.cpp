#include "testApp.h"

int n = 10;
float x = 12.34;
ofPoint pos;

//--------------------------------------------------------------
void testApp::setup(){

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    pos.x = 100.0;
    pos.y = 200.0;
    
    int* p_n = &n;
    float* p_x = &x;
    ofPoint* p_pos = &pos;
    
    ofSetColor(0, 0, 0);
    
    ofDrawBitmapString("&n = " + ofToString(int(&n), 0), 10, 20);
    ofDrawBitmapString("&x = " + ofToString(int(&x), 0), 10, 40);
    ofDrawBitmapString("&pos =" + ofToString(int(&pos), 0), 10, 60);
    
    ofDrawBitmapString("*p_n = " + ofToString(*p_n, 0), 10, 100);
    ofDrawBitmapString("*p_x = " + ofToString(*p_x, 2), 10, 120);
    
    ofDrawBitmapString("p_pos->x =" + ofToString(p_pos->x, 2), 10, 140);
    ofDrawBitmapString("p_pos->y =" + ofToString(p_pos->y, 2), 10, 160);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}