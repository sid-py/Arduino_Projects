// C++ code
// Project 5: Controlling Traffic Lights
#define westButton 13
#define eastButton 3
#define westRed 12
#define westYellow 11
#define westGreen 10
#define eastRed 7
#define eastYellow 6
#define eastGreen 5
#define yellowBlinkTime 500 // 0.5 seconds for the yellow light blink
boolean trafficWest = true; // west = true, east = false
int flowTime = 10000; // amount of time to let traffic flow
int changeDelay = 2000; //amount of time between color changes


void setup()
{
  // setup digital IO pins
  pinMode(westButton, INPUT);
  pinMode(eastButton, INPUT);
  pinMode(westRed, OUTPUT);
  pinMode(westYellow, OUTPUT);
  pinMode(westGreen, OUTPUT);
  pinMode(eastRed, OUTPUT);
  pinMode(eastYellow, OUTPUT);
  pinMode(eastGreen, OUTPUT);
  
  // set initial state for lights - west side is green first
  digitalWrite(westRed, HIGH);
  digitalWrite(westYellow, LOW);
  digitalWrite(westGreen, LOW);
  digitalWrite(eastRed, HIGH);
  digitalWrite(eastYellow, LOW);
  digitalWrite(eastGreen, LOW);

  
}

void loop()
{
digitalWrite(eastRed, HIGH);
if(digitalRead(eastButton) == HIGH)
{
  digitalWrite(eastYellow, HIGH);
  delay(changeDelay);
  digitalWrite(eastRed, LOW);
  digitalWrite(eastYellow, LOW);
  digitalWrite(eastGreen, HIGH);
  delay(flowTime);
  digitalWrite(eastGreen, LOW);
  digitalWrite(eastRed, HIGH);
  
}
digitalWrite(westRed, HIGH);
if(digitalRead(westButton) == HIGH)
{
  digitalWrite(westYellow, HIGH);
  delay(changeDelay);
  digitalWrite(westRed, LOW);
  digitalWrite(westYellow, LOW);
  digitalWrite(westGreen, HIGH);
  delay(flowTime);
  digitalWrite(westGreen, LOW);
  digitalWrite(westRed, HIGH);
  
}
}