#include<cmath>
#include<fstream>

class Sample_Draw {
public:
	Sample_Draw();
	void SamplingCos(float freq, float length, float* bufferX, float* bufferY);
	void WriteData(int length, float* bufferX, float* bufferY);
};