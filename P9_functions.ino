// C++ code
//Project 9: Functions in C++

# define LED 13
# define del 200
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  blinkLED();

}

void blinkLED()
{
  digitalWrite(13, HIGH);
  delay(del * 2);
  digitalWrite(13, LOW);
  delay(del * 3);
  digitalWrite(13, HIGH);
  delay(del * 4);
  digitalWrite(13, LOW);
  delay(del * 5);
  digitalWrite(13, HIGH);

}

