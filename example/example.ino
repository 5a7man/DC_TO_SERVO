/* Example
 by Muhammad Salman Kabir <http://muhammad-salman-kabir.mystrikingly.com/>
 This example code is in the public domain.

 DC_to_SERVO(int PIN_1, int PIN_2, int Time_Taken_per_Revolution, int Angle_in_Degree);

 PIN_1 = DC Motor Connection Pin 1
 PIN_2 = DC Motor Connection Pin 2
 Time_Taken_per_Revolution = (Provided in MILLISECONDS) Refer to motor datasheet or use a tachometer to calculate it .
 Angle_in_Degree = Desired Angle provided by user
 
 Example illustrates the rotation of a DC motor attach to pins 9 & 10 of arduino either directly or through a motor driver.
 The Motor takes 2000 miliseconds to complete 1 revolution. 
 The motor rotates to an angle of 25 degrees and after 0.5 seconds, rotates in reverse diraction to same angle i.e. 25 degrees
*/


#include "DC_to_SERVO.h"

// Define Pin for DC Motor Connection
int DC_1= 9;
int DC_2 = 10;


void setup() 
{
  // Defining States of Pins
  pinMode(DC_1, OUTPUT);
  pinMode(DC_2, OUTPUT);
  
}

void loop() {

DC_to_SERVO(DC_1, DC_2, 2000,180);
delay(500);
DC_to_SERVO(DC_1, DC_2, 2000,-180);
delay(500);
  
}
