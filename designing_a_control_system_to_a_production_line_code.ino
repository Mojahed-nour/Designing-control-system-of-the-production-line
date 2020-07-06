#include <Servo.h>

Servo moto1;


int dis=0,pulswave=0;



void setup()
{
  moto1.attach(4);Serial.begin(9600);

  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
  
  
  
}

void loop()
{
  digitalWrite(7, LOW);
  delay(0.010); 
 
  digitalWrite(7, HIGH);
  delay(0.010); 
  digitalWrite(7, LOW);
  pulswave=pulseIn(6,HIGH);
    dis=pulswave*0.034/2;
  if (dis<150 && dis>100)
  {moto1.write(180);}
    else  if (dis<100 && dis>50)
    {moto1.write(90);}
    else  if (dis<50 && dis>0)
    {moto1.write(35);}
}