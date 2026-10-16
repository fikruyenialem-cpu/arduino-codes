
int sensorpin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorpin);

  if (value > 500) {
    Serial.println("1");
  } else {
    Serial.println("0");
  }

  delay(500);
}

