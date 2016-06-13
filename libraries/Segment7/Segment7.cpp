#include "Arduino.h"
#include "Segment7.h"

Segment7::Segment7(int A , int B, int C, int D, int E, int F, int G){
	pinMode(A,OUTPUT);
	pinMode(B,OUTPUT);
	pinMode(C,OUTPUT);
	pinMode(D,OUTPUT);
	pinMode(E,OUTPUT);
	pinMode(F,OUTPUT);
	pinMode(G,OUTPUT);
	_A=A;
	_B=B;
	_C=C;
	_D=D;
	_E=E;
	_F=F;
	_G=G;
}

void Segment7::Common(int nilai){
	Com=nilai;
}

void Segment7::Value(int val){
	switch(val){
		case 0:
			digitalWrite(_A,Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,Com);
			digitalWrite(_F,Com);
			digitalWrite(_G,!Com);
			digitalWrite(_Dot,!Com);
			break;
		case 1:
			digitalWrite(_A,!Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,!Com);
			digitalWrite(_E,!Com);
			digitalWrite(_F,!Com);
			digitalWrite(_G,!Com);
			digitalWrite(_Dot,!Com);
			break;
		case 2:
			digitalWrite(_A,Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,!Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,Com);
			digitalWrite(_F,!Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;
		case 3:
			digitalWrite(_A,Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,!Com);
			digitalWrite(_F,!Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;	
		case 4:
			digitalWrite(_A,!Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,!Com);
			digitalWrite(_E,!Com);
			digitalWrite(_F,Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;
		case 5:
			digitalWrite(_A,Com);
			digitalWrite(_B,!Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,!Com);
			digitalWrite(_F,Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;
		case 6:
			digitalWrite(_A,Com);
			digitalWrite(_B,!Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,Com);
			digitalWrite(_F,Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;
		case 7:
			digitalWrite(_A,Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,!Com);
			digitalWrite(_E,!Com);
			digitalWrite(_F,!Com);
			digitalWrite(_G,!Com);
			digitalWrite(_Dot,!Com);
			break;
		case 8:
			digitalWrite(_A,Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,Com);
			digitalWrite(_F,Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;
		case 9:
			digitalWrite(_A,Com);
			digitalWrite(_B,Com);
			digitalWrite(_C,Com);
			digitalWrite(_D,Com);
			digitalWrite(_E,!Com);
			digitalWrite(_F,Com);
			digitalWrite(_G,Com);
			digitalWrite(_Dot,!Com);
			break;
	}
	
}