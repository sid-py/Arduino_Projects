// C++ code
// Project 7: Trying out a Piezo Buzzer
# define PIEZO 3

int del = 500;

void setup()
{
  pinMode(PIEZO, OUTPUT);
}

void loop()
{
    analogWrite(PIEZO, 128); // 50% duty cycle tone to the piezo
    delay(del);
    digitalWrite(PIEZO, LOW); // turn the piezo off
    delay(del);
}