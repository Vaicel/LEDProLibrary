#ifndef LEDProLibrary_h
#define	LEDProLibrary_h

#include "Arduino.h"

void blink(int port,int onTime, int offTime);
void lineUp(int startLED, int numberLED, int onTime, int offTime);
void lineDown(int startLED, int numberLED, int onTime, int offTime);
void impulseH(int port,int startLight,int step, int stepTime, int multiImp);
void impulseL(int port,int startLight,int step, int stepTime, int multiImp);
void progressUp(int startLED, int numberLED, int progress);
void progressDown(int startLED, int numberLED, int progress);

	
#endif
