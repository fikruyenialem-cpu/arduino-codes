void setup() {
  Serial.begin(9600);
}

void loop() {
  int number = analogRead(A0);
  Serial.println(number);
  delay(500);
}
