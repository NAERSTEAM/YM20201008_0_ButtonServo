//20201008 T.I. Created this file. Based on https://www.tinkercad.com/things/aaHqTYZCYRm

#include <Servo.h>
Servo motor;
int KEY_0 = 3;
int KEY_1 = 4;

void setup()
{

  pinMode(KEY_0, INPUT_PULLUP);
  pinMode(KEY_1, INPUT_PULLUP);
  motor.attach(2);
 

}

void loop()
{
  //(ButtonLOW_DB(KEY_0) == 1)
  //(digitalRead(KEY_0) == 0)
    
  if (digitalRead(KEY_0) == 0 )
  {
    
  }
  else
  {

  }

  if (digitalRead(KEY_1) == 0);
  {
  
  }
  else
  {
    
  }
}


int ButtonLOW_DB(int PIN_NUM)
{
   int ret=0;

   if(LOW==digitalRead(PIN_NUM))
   {
      delay(20);
      if (LOW==digitalRead(PIN_NUM))
      {
         ret=1;  
      }
   }
 
   return ret;
}
