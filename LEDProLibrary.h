/* 
Ну собственно говоря, это моя первая библиотека для Arduino. Она создана для того, чтобы упростить вашу работу со светодиодами.
Пока что есть 4 команды, каждая  представляет из себя стандартные действия со светоиодами, которые вы делали в первые дни знакомства с Arduino.
Пока еще команды не проверялись на практике, т.к. времени для этого пока не находится.
LEDProLibrary v 0.0.2a
*/

#ifndef LEDProLibrary_h
#define	LEDProLibrary_h

#include "Arduino.h"

void blink(int port,int onTime, int offTime); 											//Моргание светодиодом
void line(int startLED, int numberLED, int onTime, int offTime, bool mode);				//Бегущий огонек
void impulse(int port,int startLight,int step, int stepTime, int multiImp, bool mode);	//Импульсные световзрывы
void progress(int startLED, int endLED, int onTime);												//Шкала из светодиодов

	
#endif
