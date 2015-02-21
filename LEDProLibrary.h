/*
Файл LEDProLibrary.h

@ Автор: Никита Вайцель
@ Дата создания: 16 февраля 2015

@ Ну собственно говоря, это моя первая библиотека для Arduino.
@ Она создана для того, чтобы упростить вашу работу со светодиодами.
@ Пока что есть 4 команды, каждая  представляет из себя стандартные действия со светоиодами,
@ которые вы делали в первые дни знакомства с Arduino.
@ LEDProLibrary v 0.0.2a
*/

#ifndef ledprolibrary_h
#define	ledprolibrary_h

#include "Arduino.h"

#define UP 1
#define DOWN 0

void blink(int, int, int); 			//Моргание светодиодом
void line(int, int, int, int, bool);		//Бегущий огонек
void impulse(int,int,int, int, int, bool);	//Импульсные световзрывы
void progress(int, int, int);			//Шкала из светодиодов


#endif
