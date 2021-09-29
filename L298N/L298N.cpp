//файл реализации здесь все можно измнеить под свой вкус))
#include "L298N.h"
InMotor::InMotor(int ipin1,int ipin2){
    pinMode(pin1,OUTPUT);
    pinMode(pin2,OUTPUT);
    pin1 = ipin1;
    pin2 = ipin2;
}
void InMotor::forward(){
    analogWrite(pin1,255);
    analogWrite(pin2,0);
}
void InMotor::back(){
    analogWrite(pin2,255);
    analogWrite(pin1,0);
}
void InMotor::buttPressedForward(int pinButt){
    pinMode(pinButt,INPUT_PULLUP);
    int r = !digitalRead(pinButt);
    if(r==1){
        analogWrite(pin1,255);
        analogWrite(pin2,0);
    }else{analogWrite(pin1,0);}
}
void InMotor::buttPressedBack(int pinButt){
    pinMode(pinButt,INPUT_PULLUP);
    int r = !digitalRead(pinButt);
    if(r==1){
        analogWrite(pin1,0);
        analogWrite(pin2,255);
    }else{analogWrite(pin2,0);}
}
void InMotor::stop(){
    analogWrite(pin1,0);
    analogWrite(pin2,0);
}
InMotorTire2::InMotorTire2(int ipin3,int ipin4){
    pinMode(pin3,OUTPUT);
    pinMode(pin4,OUTPUT);
    pin3 = ipin3;
    pin4 = ipin4;
}
void InMotorTire2::forward(){
    analogWrite(pin3,255);
    analogWrite(pin4,0);
}
void InMotorTire2::back(){
    analogWrite(pin4,255);
    analogWrite(pin3,0);
}
void InMotorTire2::buttPressedForward(int pinButt){
    pinMode(pinButt,INPUT_PULLUP);
    int r = !digitalRead(pinButt);
    if(r==1){
        analogWrite(pin3,255);
        analogWrite(pin4,0);
    }else{analogWrite(pin3,0);}
}
void InMotorTire2::buttPressedBack(int pinButt){
    pinMode(pinButt,INPUT_PULLUP);
    int r = !digitalRead(pinButt);
    if(r==1){
        analogWrite(pin3,0);
        analogWrite(pin4,255);
    }else{analogWrite(pin4,0);}
}
void InMotorTire2::stop(){
    analogWrite(pin4,0);
    analogWrite(pin3,0);
}


