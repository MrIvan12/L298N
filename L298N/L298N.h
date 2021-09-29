/*библеотека предназначена для 
драйвера L298N
все права пренадлежат Mr.Ivan*/
#pragma once
#include "Arduino.h"
class InMotor{
    public:
    InMotor(int ipin1,int ipin2);
    void forward();//подает 1 на pin1
    void back();//подает 1 на pin2
    void buttPressedForward(int pinButt);//подает 1 на pin1 когда нажата
    void buttPressedBack(int pinButt);//подает 1 на pin2 когда нажата
    void stop();//останвливает все
  
    private:
    int pin1;
    int pin2;
   
};
//вторая шина работает также
class InMotorTire2{
  public:
    InMotorTire2(int ipin3,int ipin4);
    void forward();
    void back();
    void buttPressedForward(int pinButt);
    void buttPressedBack(int pinButt);
    void stop();
    
    private:
    int pin3;
    int pin4;
};



