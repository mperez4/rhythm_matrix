#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void keyPressed(int key);
		void mousePressed(int x, int y, int button);
		void playSequence();
    
        float speed;
        int rows,columns;
    
        ofSoundPlayer sampleArray[16];

        string sampleName[16] = {"KICK1.WAV","KICK2.WAV","KICK3.WAV","SNARE1.WAV","SNARE2.WAV","SNARE3.WAV","CLAVE.WAV","HHCL.WAV",
            "HHOP.WAV","PERC1.WAV","PERC2.WAV","PERC3.WAV","PERC4.WAV","PERC5.WAV","PERC6.WAV","PERC7.WAV",};
    
        int matrix[16][16] = {
        //   0 1 2 3 4 5 6 7 8
            {1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0}, //0 kick1
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //1 kick2
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //2 kick3
            {0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0}, //3 snare1
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //4 snare2
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //5 snare3
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //6 clave
            {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, //7 hhcl
            {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0}, //8 hhop
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //9 perc1
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //10 perc2
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //11 perc3
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //12 perc4
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //13 perc5
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //14 perc6
            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, //15 perc7
    };
};
