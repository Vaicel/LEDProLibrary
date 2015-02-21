<<<<<<< HEAD
/* 
Ну собственно говоря, это моя первая библиотека для Arduino. Она создана для того, чтобы упростить вашу работу со светодиодами.
Пока что есть 4 команды, каждая  представляет из себя стандартные действия со светоиодами, которые вы делали в первые дни знакомства с Arduino.
Пока еще команды не проверялись на практике, т.к. времени для этого пока не находится.
LEDProLibrary v 0.0.2a
=======
/*
@ Файл LEDProLibrary.cpp

@ Автор: Никита Вайцель
@ Дата создания: 16 февраля 2015

@ Ну собственно говоря, это моя первая библиотека для Arduino.
@ Она создана для того, чтобы упростить вашу работу со светодиодами.
@ Пока что есть 4 команды, каждая  представляет из себя стандартные действия со светоиодами,
@ которые вы делали в первые дни знакомства с Arduino.
@ Пока еще команды не проверялись на практике, т.к. времени для этого пока не находится.
@ LEDProLibrary v 0.0.2a
>>>>>>> 599b41d38aedc53848429261537c8fafa73b93f1
*/

#include "LEDProLibrary.h"

void blink(int port,int onTime, int offTime){
  digitalWrite(port,HIGH);
  delay(onTime);
  digitalWrite(port,LOW);
  delay(offTime);
}
<<<<<<< HEAD
void line(int startLED, int numberLED, int onTime, int offTime, bool mode){
	if(mode == true){
		for(int sLED = startLED; sLED < numberLED+startLED; sLED++){
=======

void line(int startLED, int numberLED, int onTime, int offTime, bool mode){
	if(mode == DOWN){
    for(int sLED = startLED + numberLED - 1 ; sLED >= startLED; sLED--){
>>>>>>> 599b41d38aedc53848429261537c8fafa73b93f1
			blink(sLED,onTime,offTime);
		}
	}
	else{
<<<<<<< HEAD
		for(int sLED = startLED + numberLED - 1 ; sLED >= startLED; sLED--){
			blink(sLED,onTime,offTime);
		}
	}
}
void impulse(int port,int startLight,int step, int stepTime, int multiImp, bool mode){
	if(mode == true)	{	
		for(int i = 1; i<= multiImp; i++){
			for(int st = startLight; st <= 255; st += step){
=======
      for(int sLED = startLED; sLED < numberLED+startLED; sLED++){
        blink(sLED,onTime,offTime);
		}
	}
}

void impulse(int port,int startLight,int step, int stepTime, int multiImp, bool mode){
	if(mode == DOWN)	{	
    for(int i = 0; i<= multiImp; i++){
			for(int st = startLight;   st >= 0; st -= step){
>>>>>>> 599b41d38aedc53848429261537c8fafa73b93f1
				analogWrite(port, st);
				delay(stepTime);
			}
		}
		digitalWrite(port,LOW);
	}
	else{
<<<<<<< HEAD
		for(int i = 0; i<= multiImp; i++){
			for(int st = startLight;   st >= 0; st -= step){
				analogWrite(port, st);
				delay(stepTime);
			}
		}
		digitalWrite(port,LOW);
	}
}
=======
    for(int i = 1; i<= multiImp; i++){
      for(int st = startLight; st <= 255; st += step){
        analogWrite(port, st);
        delay(stepTime);
      }
    }
    digitalWrite(port,LOW);
	}
}

>>>>>>> 599b41d38aedc53848429261537c8fafa73b93f1
void progress(int startLED, int endLED, int onTime){
	for(int sLED = startLED; sLED<=endLED;  sLED++){
			digitalWrite(sLED, HIGH);
	}
	delay(onTime);
	for(int sLED = startLED; sLED<=endLED;  sLED++){
			digitalWrite(sLED, LOW);
	}
}
