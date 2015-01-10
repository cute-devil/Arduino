//#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trig,int echo)
{
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
_trig = trig;
_echo = echo;
} 

void Ultrasonic::Trig()
{
  pinMode(_trig, OUTPUT);
  digitalWrite(_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(_trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(_trig, LOW);
}
void Ultrasonic::Echo()
{
  pinMode(_echo, INPUT);
  duration = pulseIn(_echo, HIGH);
}

long Ultrasonic::DistanceInCm()
{
    return duration / 29 / 2;
}
long Ultrasonic::DistanceInInches()
{
    return duration / 74 / 2;
}
