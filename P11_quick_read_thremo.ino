// C++ code
//Project12: Creating a quick read Thermometer That Blinks the temperature
# define LED 13

int blinks = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  
  	blinks = checkTemp();
	blinkLED(blinks, 500);
    delay(2000);
  Serial.println(blinks);
    
}

// Defining all the required functions

int checkTemp()
{
  float voltage = 0;
  float celcius = 0;
  float hotTemp = 26;
  float coldTemp = 0;
  float sensor = 0;
  
  int result;
  
  // read the temp and convert it to deg C
  
  sensor = analogRead(0);
  voltage = (sensor * 5000) / 1024; // convert raw sensor value to mV
  voltage = voltage -500; // remove voltage offset
  celcius = voltage / 10; // convert mV to C
  
  
  //act on temp range
  
  if(celcius < coldTemp)
  {
    result = 2;
  }
  
  else if (celcius >= coldTemp && celcius <= hotTemp )
  {
    result = 4;
  }
  else
  {
    result = 6;
    
  }
  return result;
  Serial.println(result);
  
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
