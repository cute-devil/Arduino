/* Ultrasonic Library By Manish.S Malviya
Ultrasonic _sensNo(echo,trig)
_sensNo.Trig()   For Trigger
_sensNo.Echo()   For Echo
_sensNo.DistanceInCm()    For Distance in centimeters
_sensNo.DistanceInInches() For Distance in Inches
*/
#include<Ultrasonic.h>
Ultrasonic us(13,12);// Ultrasonic (trig,echo)
int x=0;
void setup() {
 Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
  us.Trig();
  us.Echo();// put your main code here, to run repeatedly:
 x= us.DistanceInCm();
 Serial.println(x);
}
