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
}
void loop(){
  //вместо нулей ставим по одному SPEEDL и SPEEDR
  analogWrite(LF, 0);
  analogWrite(LB, 0);
  analogWrite(RF, 0);
  analogWrite(RB, 0);
}
