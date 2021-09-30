// C++ code
// Project 4 - Demonstrating a digital Input

# define LED 12
# define BUTTON 7
void setup()
{
  pinMode(LED, OUTPUT); // Output for the LED
  pinMode(BUTTON, INPUT); //Input for the button
}

void loop()
{
 if(digitalRead(BUTTON)== HIGH)
 {
   digitalWrite(LED, HIGH); // turn the LED ON
   delay(1000); // wait for 0.5 sec
   digitalWrite(LED, LOW); // Turn off the LED
 }
  else
  {
    digitalWrite(LED, LOW);
  
  }
}