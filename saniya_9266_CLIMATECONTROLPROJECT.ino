int tempsensor=A0;
float sensorValue=0;
float voltage=0;
float temperature=0;
int motorPin=7;
int pwmValue=0;
void setup()
{
 Serial.begin(9600);
 bitRead(motorPin,OUTPUT); 
}
void loop()
{
  sensorValue = analogRead(tempsensor);
  voltage = sensorValue *(5.0)/(1024.0);
  temperature = (voltage - 0.5)*100;
if (temperature<27)
  {
    pwmValue = 0;   
  }
  else if (temperature >= 27 && temperature <= 40)
  {
    pwmValue = map(temperature, 27, 40, 0, 255);
  }
  else
  {
    pwmValue = 255;
  }
  analogWrite(motorPin, pwmValue);
  Serial.print(temperature);
  Serial.print(",");
  Serial.println(pwmValue);
  delay(500);
}
