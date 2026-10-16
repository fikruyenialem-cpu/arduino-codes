
int bPin = 2;
int ledPin = 13;

void setup() {
  pinMode(bPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = digitalRead(bPin);

  if (value == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
