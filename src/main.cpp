#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(100,100,OF_WINDOW);			// <-------- setup the GL context
    
	ofRunApp(new ofApp());

}
