#include "ofApp.h"

/*
    TODO: update matrix via JSON file. Update rhythm matrix
 */
void ofApp::setup(){
    //load JSON
    std::string file = "sequences/test.json";
    bool parsingSuccessful = result.open(file);
    
    if (parsingSuccessful){
        cout << file << endl;
    }
    //set speed
    speed = 1.5;
    
    //find out size of beat matrix
    rows = sizeof(my_matrix) / sizeof(my_matrix[0]);
    columns = sizeof(my_matrix[0]) / sizeof(int);
    
    //load samples
    for(int j = 0; j < 16; j++){
        sampleArray[j].loadSound(sampleName[j], true);
    }
}

void ofApp::update(){
    playSequence(current_matrix);
}

void ofApp::draw(){
    
}

void ofApp::playSequence(int matrix[16][16]){
    //iterate thru rhythm matrix
    for(int i = 0; i < columns; i++){
        for(int j = 0; j < rows; j++){
            if(matrix[j][i] > 0){
                sampleArray[j].play();
            }
        }
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
    }if(key == '3'){
        for(int j = 0; j < columns; j++){
            for(int k = 0; k < rows; k++){
                current_matrix[j][k] = my_matrix[j][k];
            }
        }
        cout << my_matrix << endl;
    }
    if(key == '4'){
        for(int j = 0; j < columns; j++){
            for(int k = 0; k < rows; k++){
                current_matrix[j][k] = my_matrix2[j][k];
            }
        }
    }
}

void ofApp::mousePressed(int x, int y, int button){

}