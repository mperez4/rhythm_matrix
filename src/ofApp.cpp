#include "ofApp.h"

/*
    TODO: update matrix via JSON file. Update rhythm matrix
 */
void ofApp::setup(){
    //set speed
    speed = 1.5;
    
    //find out size of beat matrix
    rows = sizeof(matrix) / sizeof(matrix[0]);
    columns = sizeof(matrix[0]) / sizeof(int);
    
    //load samples
    for(int j = 0; j < 16; j++){
        sampleArray[j].loadSound(sampleName[j], true);
    }
}

void ofApp::update(){
    playSequence();
}

void ofApp::draw(){
    
}

void ofApp::playSequence(){
    //iterate thru rhythm matrix
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            if(matrix[j][i] > 0){
                sampleArray[j].play();
            }
        }
    //delay between beats
        ofSleepMillis(speed*100);
    }
}

void ofApp::keyPressed(int key){
    if(key == '1'){
        speed +=.1;
        //cout << speed << "f" <<  endl;
    }
    if(key == '2'){
        speed -=.1;
        //cout << speed << "f" << endl;
    }
}

void ofApp::mousePressed(int x, int y, int button){

}