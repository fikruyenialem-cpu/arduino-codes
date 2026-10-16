
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  turnOnLED();
}

void turnOnLED() {
  digitalWrite(ledPin, HIGH);
}
