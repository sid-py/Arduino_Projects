// C++ code
//Project 9: Functions in C++

# define LED 13

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  blinkLED(10, 200);

}

void blinkLED(int cycles, int del)
{
  for (int z = 0; z < cycles; z++)
  {
  	digitalWrite(LED, HIGH);
  	delay(del);
    digitalWrite(LED, LOW);
  	delay(del);
    
  }

}

