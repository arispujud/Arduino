//CopyRight www.arispujud.com | APKIT INNOVATION
//LED STRIP LIBRARY
#ifndef LedStrip_h
#define LedStrip_h

#include "Arduino.h"

class LedStrip
{
	public:
		LedStrip(int merah, int hijau, int biru);
		void Red(int nilai);
		void Green(int nilai);
		void Blue(int nilai);
		void Yellow(int nilai);
		void Cyan(int nilai);
		void Magenta(int nilai);
		void White(int nilai);
		void Flash(int nilai, int speed);
		void Strobe(int nilai, int speed);
		void OnlyRed(int nilai);
		void OnlyGreen(int nilai);
		void OnlyBlue(int nilai);
		void OnlyYellow(int nilai);
		void OnlyCyan(int nilai);
		void OnlyMagenta(int nilai);
		void Off();
		void FadeRed(int nilai, int speed);
		void FadeGreen(int nilai, int speed);
		void FadeBlue(int nilai, int speed);
		void FadeYellow(int nilai, int speed);
		void FadeCyan(int nilai, int speed);
		void FadeMagenta(int nilai, int speed);
		void FadeWhite(int nilai, int speed);
	private:
		int _merah;
		int _hijau;
		int _biru;
		int _nilai;
		int _speed;
		int _nilaimerah;
		int _nilaihijau;
		int _nilaibiru;
};
#endif