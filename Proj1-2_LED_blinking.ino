// Arduino LED Blinking starter program
//

int d = 40;
void setup()
{
  
  for(int k = 2;k<7;k++)
  {
  pinMode(k, OUTPUT); // set digital pin 13 to output

  }
  
}

void loop()
{
  
  for(int i = 2; i<7; i++)
  {
  digitalWrite(i, HIGH); // turn on digital pin 13
  delay(d); // pause for 1 sec
  digitalWrite(i, LOW); // turn off digital pin 13
  delay(d); // pause for 1 sec
  }
}