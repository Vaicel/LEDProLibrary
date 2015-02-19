/* 
Ну собственно говоря, это моя первая библиотека для Arduino. Она создана для того, чтобы упростить вашу работу со светодиодами.
Пока что есть 4 команды, каждая  представляет из себя стандартные действия со светоиодами, которые вы делали в первые дни знакомства с Arduino.
Пока еще команды не проверялись на практике, т.к. времени для этого пока не находится.
LEDProLibrary v 0.0.2a
*/

#include "LEDProLibrary.h"

void blink(int port,int onTime, int offTime){
  digitalWrite(port,HIGH);
  delay(onTime);
  digitalWrite(port,LOW);
  delay(offTime);
}
void line(int startLED, int numberLED, int onTime, int offTime, bool mode){
	if(mode = true){
		for(int sLED = startLED; sLED < numberLED+startLED; sLED++){
			blink(sLED,onTime,offTime);
		}
	}
	else{
		for(int sLED = startLED + numberLED - 1 ; sLED >= startLED; sLED--){
			blink(sLED,onTime,offTime);
		}
	}
}
void impulse(int port,int startLight,int step, int stepTime, int multiImp, bool mode){
	if(mode = true)	{	
		for(int i = 0; i<= multiImp; i++){
			for(int st = startLight; st <= 255; st += step){
				analogWrite(port, st);
				delay(stepTime);
			}
		}	
	}
	else{
		for(int i = 0; i<= multiImp; i++){
			for(int st = startLight;   st >= 0; st -= step){
				analogWrite(port, st);
				delay(stepTime);
			}
		}
	}
}
void progress(int startLED, int endLED,bool mode){
	if(mode = true){	
		for(int sLED = startLED; sLED<=endLED;  sLED++){
			digitalWrite(sLED, HIGH);
		}
	}
	else{
		for(int sLED = endLED; sLED>=startLED;  sLED--){
			digitalWrite(sLED, HIGH);
		}
		
	}
