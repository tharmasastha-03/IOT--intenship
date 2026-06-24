#include<Servo.h>
Servo s;
void setup()
{
  Serial.begin (115200);
  pinMode(13,INPUT);
  s.attach(13);
}
void loop()
{
  int i=digitalRead(13);
  s.write(90);
  if(i==0)
  {
    s.write(90);
  }
  else
  {
    s.write(0);
  }
  delay(1000);
}