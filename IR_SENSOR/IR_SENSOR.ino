int IRSensor = 4; // connect ir sensor module to Arduino pin 9
int LED = 2; // conect LED to Arduino pin 13

void setup()
{
  Serial.begin(115200); // Init Serila at 115200 Baud
  Serial.println("Serial Working"); // Test to check if serial is working or not
  pinMode(IRSensor, INPUT); // IR Sensor pin INPUT
  pinMode(LED, OUTPUT); // LED Pin Output
}

void loop()
{
  int sensorStatus = digitalRead(IRSensor); // Set the GPIO as Input
  if (sensorStatus == 1) // Check if the pin high or not
  {
    // if the pin is high turn off the onboard Led
    digitalWrite(LED, HIGH); // LED High
    Serial.println("Movement Detected!"); // print Movement Ended! on the serial monitor window
  }
  else
  {
    //else turn on the onboard LED

    digitalWrite(LED, LOW); // LED LOW
    Serial.println("Movement Ended!"); // print Movement Detected! on the serial monitor window
  }
}
