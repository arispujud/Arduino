//CopyRight www.arispujud.com | APKIT INNOVATION
//SEVEN SEGMENT LIBRARY

#ifndef Segment7_h
#define Segment7_h
#include "Arduino.h"
class Segment7
{
	public:
		Segment7(int A , int B, int C, int D, int E, int F, int G);
		void Common(int nilai);
		void Value(int val);
		int Anode=0;
		int Cathode=1;
	private:
		int _A;
		int _B;
		int _C;
		int _D;
		int _E;
		int _F;
		int _G;
		int _Dot;
		int Com;
};
#endif