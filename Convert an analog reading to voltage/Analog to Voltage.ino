void setup() {
  Serial.begin(9600);
}

void loop() {
  int   amount = alogRead(A0);
  float voltage = amount * (5.0 / 1023.0);

  Serial.println(voltage);
  delay(500);
}
