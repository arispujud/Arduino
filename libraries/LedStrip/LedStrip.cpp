#include "Arduino.h"
#include "LedStrip.h"


LedStrip::LedStrip(int merah, int hijau, int biru){
	pinMode(merah,OUTPUT);
	_merah=merah;
	pinMode(hijau,OUTPUT);
	_hijau=hijau;
	pinMode(biru,OUTPUT);
	_biru=biru;
	_nilaimerah=0;
	_nilaihijau=0;
	_nilaibiru=0;
	Serial.begin(9600);
}

void LedStrip::Red(int nilai){
	analogWrite(_merah,nilai);
	_nilaimerah=nilai;
}
void LedStrip::Green(int nilai){
	analogWrite(_hijau,nilai);
	_nilaihijau=nilai;
}
void LedStrip::Blue(int nilai){
	analogWrite(_biru,nilai);
	_nilaibiru=nilai;
}
void LedStrip::Yellow(int nilai){
	analogWrite(_merah,nilai);
	analogWrite(_hijau,nilai);
	_nilaimerah=nilai;
	_nilaihijau=nilai;
}
void LedStrip::Cyan(int nilai){
	analogWrite(_biru,nilai);
	analogWrite(_hijau,nilai);
	_nilaihijau=nilai;
	_nilaibiru=nilai;
}
void LedStrip::Magenta(int nilai){
	analogWrite(_merah,nilai);
	analogWrite(_biru,nilai);
	_nilaimerah=nilai;
	_nilaibiru=nilai;
}
void LedStrip::White(int nilai){
	analogWrite(_merah,nilai);
	analogWrite(_hijau,nilai);
	analogWrite(_biru,nilai);
	_nilaimerah=nilai;
	_nilaihijau=nilai;
	_nilaibiru=nilai;
}
void LedStrip::Off(){
	analogWrite(_merah,0);
	analogWrite(_hijau,0);
	analogWrite(_biru,0);
	_nilaimerah=0;
	_nilaihijau=0;
	_nilaibiru=0;
}
void LedStrip::Flash(int nilai, int speed){
	analogWrite(_merah,nilai);
	analogWrite(_hijau,nilai);
	analogWrite(_biru,nilai);
	delay(speed);
	analogWrite(_merah,0);
	analogWrite(_hijau,0);
	analogWrite(_biru,0);
	delay(speed);
}
void LedStrip::Strobe(int nilai, int speed){
	int i;
	for(i=0; i<=nilai; i++){
		analogWrite(_merah,i);
		analogWrite(_hijau,i);
		analogWrite(_biru,i);
		delay(speed/20);
	}
	for(i=nilai; i>=0; i--){
		analogWrite(_merah,i);
		analogWrite(_hijau,i);
		analogWrite(_biru,i);
		delay(speed/20);
	}
}
void LedStrip::OnlyRed(int nilai){
	LedStrip::Off();
	LedStrip::Red(nilai);
}
void LedStrip::OnlyGreen(int nilai){
	LedStrip::Off();
	LedStrip::Green(nilai);
}
void LedStrip::OnlyBlue(int nilai){
	LedStrip::Off();
	LedStrip::Blue(nilai);
}
void LedStrip::OnlyYellow(int nilai){
	LedStrip::Off();
	LedStrip::Yellow(nilai);
}
void LedStrip::OnlyCyan(int nilai){
	LedStrip::Off();
	LedStrip::Cyan(nilai);
}
void LedStrip::OnlyMagenta(int nilai){
	LedStrip::Off();
	LedStrip::Magenta(nilai);
}
void LedStrip::FadeRed(int nilai, int speed){
	while(_nilaibiru>0 || _nilaihijau>0 || _nilaimerah!=nilai){
		if(_nilaibiru>0){
		_nilaibiru-=1;
		}
		if(_nilaihijau>0){
		_nilaihijau-=1;
		}
		if(_nilaimerah>nilai){
			_nilaimerah-=1;
		}
		else if(_nilaimerah<nilai){
			_nilaimerah+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}
void LedStrip::FadeGreen(int nilai, int speed){
	while(_nilaibiru>0 || _nilaimerah>0 || _nilaihijau!=nilai){
		if(_nilaibiru>0){
		_nilaibiru-=1;
		}
		if(_nilaimerah>0){
		_nilaimerah-=1;
		}
		if(_nilaihijau>nilai){
			_nilaihijau-=1;
		}
		else if(_nilaihijau<nilai){
			_nilaihijau+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}
void LedStrip::FadeBlue(int nilai, int speed){
	while(_nilaihijau>0 || _nilaimerah>0 || _nilaibiru!=nilai){
		if(_nilaihijau>0){
		_nilaihijau-=1;
		}
		if(_nilaimerah>0){
		_nilaimerah-=1;
		}
		if(_nilaibiru>nilai){
			_nilaibiru-=1;
		}
		else if(_nilaibiru<nilai){
			_nilaibiru+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}
void LedStrip::FadeYellow(int nilai, int speed){
	while(_nilaibiru>0 || _nilaimerah!=nilai || _nilaihijau!=nilai){
		if(_nilaibiru>0){
		_nilaibiru-=1;
		}
		if(_nilaimerah>nilai){
		_nilaimerah-=1;
		}
		else if(_nilaimerah<nilai){
			_nilaimerah+=1;
		}
		if(_nilaihijau>nilai){
			_nilaihijau-=1;
		}
		else if(_nilaihijau<nilai){
			_nilaihijau+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}
void LedStrip::FadeCyan(int nilai, int speed){
	while(_nilaimerah>0 || _nilaibiru!=nilai || _nilaihijau!=nilai){
		if(_nilaimerah>0){
		_nilaimerah-=1;
		}
		if(_nilaibiru>nilai){
		_nilaibiru-=1;
		}
		else if(_nilaibiru<nilai){
			_nilaibiru+=1;
		}
		if(_nilaihijau>nilai){
			_nilaihijau-=1;
		}
		else if(_nilaihijau<nilai){
			_nilaihijau+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}
void LedStrip::FadeMagenta(int nilai, int speed){
	while(_nilaihijau>0 || _nilaibiru!=nilai || _nilaimerah!=nilai){
		if(_nilaihijau>0){
		_nilaihijau-=1;
		}
		if(_nilaibiru>nilai){
		_nilaibiru-=1;
		}
		else if(_nilaibiru<nilai){
			_nilaibiru+=1;
		}
		if(_nilaimerah>nilai){
			_nilaimerah-=1;
		}
		else if(_nilaimerah<nilai){
			_nilaimerah+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}
void LedStrip::FadeWhite(int nilai, int speed){
	while(_nilaihijau!=nilai || _nilaibiru!=nilai || _nilaimerah!=nilai){
		if(_nilaihijau>nilai){
		_nilaihijau-=1;
		}
		else if(_nilaihijau<nilai){
			_nilaihijau+=1;
		}
		if(_nilaibiru>nilai){
		_nilaibiru-=1;
		}
		else if(_nilaibiru<nilai){
			_nilaibiru+=1;
		}
		if(_nilaimerah>nilai){
			_nilaimerah-=1;
		}
		else if(_nilaimerah<nilai){
			_nilaimerah+=1;
		}
		analogWrite(_biru,_nilaibiru);
		analogWrite(_hijau,_nilaihijau);
		analogWrite(_merah,_nilaimerah);
		delay(speed/20);
	}
}