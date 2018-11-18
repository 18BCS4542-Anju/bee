#include <Servo.h> 
Servo rightfoot;
Servo rightthigh;
Servo leftfoot;
Servo leftthigh;
 int pos;
void setup() 
{ 
rightfoot.attach(9);
rightthigh.attach(5);
leftfoot.attach(3);
leftthigh.attach(11);
leftfoot.write(10);
leftthigh.write(90);
rightthigh.write(100);
rightfoot.write(180);
} 
 
 
void loop() 
{
  leftfoot.write(30);
  delay(1000);
  leftfoot.write(-30);
   delay(1000);
  rightfoot.write(30);
   delay(1000);
  rightfoot.write(-30);
   delay(1000);
  leftfoot.write(30);
   delay(1000);
  leftfoot.write(-30);
  delay(1000);
  rightfoot.write(30);
  delay(1000);
  rightfoot.write(-30);
  delay(1000);
  leftfoot.write(30);
  delay(1000);
  leftfoot.write(-30);
  delay(1000);
  rightfoot.write(30);
  delay(1000);
  rightfoot.write(-30);
  delay(1000);
  }
