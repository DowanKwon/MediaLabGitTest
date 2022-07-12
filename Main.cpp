#include<iostream>
#include<fstream>
#include<cmath>
#include "Sample_Draw.h"
using namespace std;

int main() {
	
	Sample_Draw* SD = new Sample_Draw();
	
	float buffX[8000];
	float buffY[8000];
	SD->SamplingCos(2000, 8000, buffX, buffY);
	SD->WriteData(8000, buffX, buffY);

	return 0;
}