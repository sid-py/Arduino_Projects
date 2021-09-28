// Arduino LED Blinking starter program
//
void setup()
{
  
  pinMode(13, OUTPUT); // set digital pin 13 to output

}

void loop()
{
  digitalWrite(13, HIGH); // turn on digital pin 13
  delay(250); // pause for 1 sec
  digitalWrite(13, LOW); // turn off digital pin 13
  delay(2500); // pause for 1 sec
}