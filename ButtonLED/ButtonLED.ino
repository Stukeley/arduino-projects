// Project #2
// Control LED with a button.
// More info can be found here: github.com/Stukeley/arduino-projects

// LED and button pins
int LED = 2;
int BUTTON = 4;

// Button state - read through Arduino
int buttonState = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, OUTPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON);

  if (buttonState == HIGH)
  {
    // Button is pressed - turn on the LED
    digitalWrite(LED, HIGH);
  }
  else
  {
    // Button is not pressed - turn off the LED
    digitalWrite(LED, LOW);
  }
}
