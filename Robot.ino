#include <SoftwareSerial.h>
SoftwareSerial mySerial (7, 8); //Rx, Tx
#define LF 6 //левый мотор вперёд
#define LB 9 //левый мотор назад
#define RF 10 //правый мотор вперёд
#define RB 11 //правый мотор назад
#define SPEEDL 255 //скорость левого мотора
#define SPEEDR 255 //скорость правого мотора
void setup(){
  pinMode(LF, OUTPUT);
  pinMode(LB, OUTPUT);
  pinMode(RF, OUTPUT);
  pinMode(RB, OUTPUT);
  Serial.begin(9600);
  mySerial.begin(9600);
}
void loop(){
  if(mySerial.available()){
    int s = mySerial.read();
    //Serial.write(s);
    switch(s){
      case 'F':
        analogWrite(LF, SPEEDL);
        analogWrite(LB, 0);
        analogWrite(RF, SPEEDR);
        analogWrite(RB, 0);
        break;
      case 'B':
        analogWrite(LF, 0);
        analogWrite(LB, SPEEDL);
        analogWrite(RF, 0);
        analogWrite(RB, SPEEDR);
        break;
      case 'L':
        analogWrite(LF, 0);
        analogWrite(LB, SPEEDL);
        analogWrite(RF, SPEEDR);
        analogWrite(RB, 0);
        break;
      case 'R':
        analogWrite(LF, SPEEDL);
        analogWrite(LB, 0);
        analogWrite(RF, 0);
        analogWrite(RB, SPEEDR);
        break;
      case 'G':
        analogWrite(LF, 0);
        analogWrite(LB, 0);
        analogWrite(RF, SPEEDR);
        analogWrite(RB, 0);
        break;
      case 'I':
        analogWrite(LF, SPEEDL);
        analogWrite(LB, 0);
        analogWrite(RF, 0);
        analogWrite(RB, 0);
        break;
      case 'H':
        analogWrite(LF, 0);
        analogWrite(LB, SPEEDL);
        analogWrite(RF, 0);
        analogWrite(RB, 0);
        break;
      case 'J':
        analogWrite(LF, 0);
        analogWrite(LB, 0);
        analogWrite(RF, 0);
        analogWrite(RB, SPEED);
        break;
      default:
        analogWrite(LF, 0);
        analogWrite(LB, 0);
        analogWrite(RF, 0);
        analogWrite(RB, 0);
        break;
    }
  //delay(50); //не нужен в данном случае
  }
}
