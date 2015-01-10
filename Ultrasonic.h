#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic
{
public:
Ultrasonic(int trig , int echo);
void Trig();
void Echo();
long DistanceInCm();
long DistanceInInches();
private:
int _trig,_echo;
long duration, inches, cm;
};
#endif 