LEDProLibrary
=====

Библиотека для упрощенной работы с различными светидиодами.

 + Автор: Vaicel
 + Дата создания: 16/02/15
 + Лицензия: LGPL v2.1

Описание API
-----

***Функция:***

`void blink(int pin, int onTime, int offTime)`

***Описание:***

 Данная функция позволит вам моргать светодиодом.

  + `int pin` - пин, к которому подключен светодиод
  + `int onTime` - время включенного состояния светодиода
  + `int offTime` - время выключенного состояния светодиода

***Использование:***

    void loop(){
      blink(13, 500, 500);
    }

***Функция:***

`void line(int startLED, int numberLED, int onTime, int offTime, bool mode)`

***Описание:***

Данная функция позволит сделать бегущий  по вашим светодиодикам огонек
  + `int startLED` - первый пин ряда светодиодов
  + `int numberLED` - кол-во светодиодов в ряду
  + `int onTime` - время "горения" бегущего огонька на одном светодиоде
  + `int offTime` - время "тьмы" бегущего огонька на одном светодиоде
  + `bool mode` - установка режима работы данной команды[^1]

***Использование:***

    void loop() {
      line(2,6,500,500,UP);
    }

***Функция:***

`void impulse(int pin,int startLight,int step, int stepTime, int multiImp, bool mode)`

***Описание:***

 Данная функция позволяет вам заставить светодиод "пульсировать" светом.

  + `int pin` - пин пульсирующего светодиода
  + `int startlight` - стартовое значение яркости светодиода
  + `int step` - шаг. с которым будет изменяться яркость светодиода
  + `int stepTime` - время между шагами изменения яркости
  + `int multiImp` - кол-во "пульсаций"
  + `bool mode` - установка режима работы данной команды[^1]

***Использование:***

    void loop() {
      impulse(4, 0, 5, 100, 1, DOWN);
    }

***Функция:***

`void progress(int startLED, int endLED, int onTime)`

***Описание:***

Данная функция позволяет вам сделать из ряда светодиодов шкалу.

  + `int startLED` - первый светодиод шкалы
  + `int endLED` - последний светодиод шкалы
  + `int onTime` - время работы шкалы

***Использование:***

    void loop() {
      progress(2, 6, 15000);
    }






[^1]: Режимы

|Функция      |UP            |DOWN          |
|:--------------:|:--------------:|:--------------:|
|`void line`  |Огонек бежит от малого пина к большему|Огонек бежит от большего пина к малому|
|`void impulse`|Яркость с каждым шагом увеличивается|Яркость с каждым шагом уменьшается|
