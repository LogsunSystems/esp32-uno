int redPin = 15;
int greenPin = 14;
int bluePin = 13;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {

  setColor(255, 0, 0); // Red Color
  delay(1500);
  setColor(0, 255, 0); // Green Color
  delay(1500);
  setColor(0, 0, 255); // Blue Color
  delay(1500);
//  setColor(255, 255, 255); // White Color
//  delay(1000);
//  setColor(170, 0, 255); // Purple Color
//  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
