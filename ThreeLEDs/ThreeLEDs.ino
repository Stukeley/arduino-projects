// Project #1
// Sequentially turns on and off three LEDs.
// More info can be found here: github.com/Stukeley/arduino-projects

// LED pins
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  // Turn on LED1
  digitalWrite(LED1, HIGH);
  delay(200);
  // Turn on LED2
  digitalWrite(LED2, HIGH);
  delay(200);
  // Turn on LED3
  digitalWrite(LED3, HIGH);
  delay(200);
  // Turn off LED1
  digitalWrite(LED1, LOW);
  delay(300);
  // Turn off LED2
  digitalWrite(LED2, LOW);
  delay(300);
  // Turn off LED2
  digitalWrite(LED3, LOW);
  delay(300);
}
