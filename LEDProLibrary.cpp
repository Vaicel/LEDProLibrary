/*
@ Файл LEDProLibrary.cpp

@ Автор: Никита Вайцель
@ Дата создания: 16 февраля 2015

@ Ну собственно говоря, это моя первая библиотека для Arduino.
@ Она создана для того, чтобы упростить вашу работу со светодиодами.
@ Пока что есть 4 команды, каждая  представляет из себя стандартные действия со светоиодами,
@ которые вы делали в первые дни знакомства с Arduino.
@ LEDProLibrary v 0.0.2a
*/

#include "LEDProLibrary.h"

void blink(int pin,int onTime, int offTime){
  digitalWrite(pin,HIGH);
  delay(onTime);
  digitalWrite(pin,LOW);
  delay(offTime);
}

void line(int startLED, int numberLED, int onTime, int offTime, bool mode){
	if(mode == DOWN){
    for(int sLED = startLED + numberLED - 1 ; sLED >= startLED; sLED--){
			blink(sLED,onTime,offTime);
		}
	}
	else{
		for(int sLED = startLED + numberLED - 1 ; sLED >= startLED; sLED--){
			blink(sLED,onTime,offTime);
		}
	}
}


void impulse(int pin,int startLight,int step, int stepTime, int multiImp, bool mode){
	if(mode == DOWN)	{
    for(int i = 0; i<= multiImp; i++){
			for(int st = startLight;   st >= 0; st -= step){
			  analogWrite(pin, st);
				delay(stepTime);
			}
		}
		digitalWrite(pin,LOW);
	}
	else{
    for(int i = 1; i<= multiImp; i++){
      for(int st = startLight; st <= 255; st += step){
        analogWrite(pin, st);
        delay(stepTime);
      }
    }
    digitalWrite(pin,LOW);
	}
}
void progress(int startLED, int endLED, int onTime){
	for(int sLED = startLED; sLED<=endLED;  sLED++){
			digitalWrite(sLED, HIGH);
	}
	delay(onTime);
	for(int sLED = startLED; sLED<=endLED;  sLED++){
			digitalWrite(sLED, LOW);
	}
}
