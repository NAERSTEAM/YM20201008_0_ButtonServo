//20201008 T.I. Added sample for servo control
//20201008 T.I. Created this file. Based on https://www.tinkercad.com/things/aaHqTYZCYRm

#include <Servo.h>
Servo servo_0;
int KEY_0 = 3;
int KEY_1 = 4;
int pin_s0 = 9;


void setup()
{

  pinMode(KEY_0, INPUT_PULLUP);
  pinMode(KEY_1, INPUT_PULLUP);
  servo_0.attach(pin_s0);
 

}

void loop()
{
  //(ButtonLOW_DB(KEY_0) == 1)
  //(digitalRead(KEY_0) == 0)
    
  if (digitalRead(KEY_0) == 0 )
  {
    servo_0.write(180);
  }
  else
  {
    servo_0.write(0);
  }

  if (digitalRead(KEY_1) == 0)
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
