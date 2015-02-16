#include "LEDProLibrary.h"

void blink(int port,int onTime, int offTime){
  digitalWrite(port,HIGH);
  delay(onTime);
  digitalWrite(port,LOW);
  delay(offTime);
}
void lineUp(int startLED, int numberLED, int onTime, int offTime){
  for(int sLED = startLED; sLED < numberLED+startLED; sLED++){
	digitalWrite(sLED,HIGH);
	delay(onTime);
	digitalWrite(sLED,LOW);
	delay(offTime);
  }
}
void lineDown(int startLED, int numberLED, int onTime, int offTime){
  for(int sLED = startLED + numberLED - 1 ; sLED >= startLED; sLED--){
	digitalWrite(sLED,HIGH);
	delay(onTime);
	digitalWrite(sLED,LOW);
	delay(offTime);
  }
}
void impulseH (int port,int startLight,int step, int stepTime, int multiImp){
	for(int i = 0; i<= multiImp; i++){
		for(int st = startLight; st <= 255; st += step){
			analogWrite(port, st);
			delay(stepTime);
		}
	}
}
void impulseL (int port,int startLight,int step, int stepTime, int multiImp){
	for(int i = 0; i<= multiImp; i++){
		for(int st = startLight; st >= 0; st -= step){
			analogWrite(port, st);
			delay(stepTime);
		}
	}
}
void progressUp (int startLED, int numberLED, int progress){
	if(progress<numberLED){
		for(int sLED = startLED; sLED<= startLED + progress;  sLED++){
			digitalWrite(sLED, HIGH);
		}
	}
	else{
		for(int sLED = startLED; sLED<= startLED + numberLED; sLED++){
			digitalWrite(sLED, HIGH);
		}
	}
}
void progressDown (int startLED, int numberLED, int progress){
	if(progress<numberLED){
		for(int sLED = startLED; sLED<= startLED - progress;  sLED--){
			digitalWrite(sLED, HIGH);
		}
	}
	else{
		for(int sLED = startLED; sLED<= startLED - numberLED; sLED--){
			digitalWrite(sLED, HIGH);
		}
	}
}
