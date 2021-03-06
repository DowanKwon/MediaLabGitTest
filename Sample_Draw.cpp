#include<cmath>
#include<fstream>
#include<iostream>
#include "Sample_Draw.h"

#define PI 3.141592
using namespace std;

Sample_Draw::Sample_Draw() {};
void Sample_Draw::SamplingSin(float freq, float length, float* bufferX, float* bufferY) {
	for (int i = 0; i < length; i++) {
		bufferX[i] = (float)i / freq;
		bufferY[i] = 10 * sin(2 * PI * ((float)i / freq));
	}
}
void Sample_Draw::WriteData(int length, float* bufferX, float* bufferY) {
	ofstream txt("Data.txt");
	for (int i = 0; i < length; i++) {
		txt << bufferX[i] << "  " << bufferY[i] << endl;
	}
	txt.close();
}

//Kiminsil
void Sample_Draw::SamplingCos(float freq, float length, float* bufferX, float* bufferY) {
	for (int i = 0; i < length; i++) {
		bufferX[i] = (float)i / freq;
		bufferY[i] = 10 * cos(2 * PI * ((float)i / freq));
	}
}

//Park
void Sample_Draw::SamplingExp(float freq, float length, float* bufferX, float* bufferY) {
	for (int i = 0; i < length; i++) {
		bufferX[i] = (float)i / freq;
		bufferY[i] = exp(i / freq);
	}
}

	