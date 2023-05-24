int led = 2;                // the pin that the LED is atteched to
int sensor = 0;              // the pin that the sensor is atteched to

void setup() {
  pinMode(led, OUTPUT);      // initalize LED as an output
  pinMode(sensor, INPUT);    // initialize sensor as an input
  Serial.begin(9600);        // initialize serial
}

void loop()
{
  int val = digitalRead(sensor);   // read sensor value
  Serial.print("Motion PIR: ");
  Serial.println(val);
  if (val == 1)
  { // check if the sensor is HIGH
    digitalWrite(led, HIGH);   // turn LED ON
    Serial.println("Motion detected!");
  }
  else
  {
    digitalWrite(led, LOW); // turn LED OFF
    Serial.println("Motion stopped!");
  }
}
