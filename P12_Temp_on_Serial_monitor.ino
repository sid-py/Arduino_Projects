// C++ code
//Project12: Displaying the temperature in the Serial monitor

float celcius = 0;
float fahrenheit = 0;

void setup()
{
  Serial.begin(9600);
  }


// Defining all the required functions

void findTemps()
{
  float voltage = 0;
  float sensor = 0;

  
  // read the temp and convert it to deg C and F
  
  sensor = analogRead(0);
  voltage = (sensor * 5000) / 1024; // convert raw sensor value to mV
  voltage = voltage -500; // remove voltage offset
  celcius = voltage / 10; // convert mV to C
  fahrenheit = (1.8 * celcius) +32; // Convert C to F
}


void displayTemps()
{
  Serial.print("Temperature is ");
  Serial.print(celcius, 2);
  Serial.print("deg.C/");
  Serial.print(fahrenheit,2);
  Serial.println("deg.F");
  
}


void loop()
{
  findTemps();
  displayTemps();
  delay(1000);
      
}
