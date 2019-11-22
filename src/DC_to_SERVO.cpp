#include "Arduino.h"
#include "DC_to_SERVO.h"
//Time_Taken_per_Revolution is in milliseconds
void DC_to_SERVO(int PIN_1, int PIN_2, int Time_Taken_per_Revolution, int Angle_in_Degree)
{
  float Time = abs(Angle_in_Degree) * (Time_Taken_per_Revolution/360);
  
  if (Angle_in_Degree >= 0)
  {
    digitalWrite(PIN_1, HIGH);
    digitalWrite(PIN_2, LOW);
    delay(Time);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
  }
  else
  { digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, HIGH);
    delay(Time);
    digitalWrite(PIN_1, LOW);
    digitalWrite(PIN_2, LOW);
  }
}
