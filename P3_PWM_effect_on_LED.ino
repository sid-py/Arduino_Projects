// C++ code
//
int d = 5;
void setup()
{
  pinMode(3, OUTPUT); // LED control pin 3, a PWM capabale pin
}

void loop()
{
  for (int a = 0; a < 256 ; a++)
  {
    analogWrite(3,a);
    delay(d);
    
  }
  
  for (int a = 255; a >= 0; a--)
     {
    analogWrite(3,a);
    delay(d);
    
  }
  delay(200);
}