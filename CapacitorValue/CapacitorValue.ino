
// Input pin
int buttonPin = 4;

// Output pin
int capacitorPin = 2;

// Button state
int buttonState = 0;

void setup() {
  pinMode(buttonPin, OUTPUT);
  pinMode(capacitorPin, OUTPUT);
}

void loop() {
  // Check if the button is pressed
  buttonState = digitalRead(buttonPin);

  Serial.println(buttonState);

  if (buttonState == HIGH)
  {
    
  }
  else
  {
    
  }
}
