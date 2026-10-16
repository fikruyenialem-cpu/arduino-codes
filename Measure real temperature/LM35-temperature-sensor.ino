
int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int read = analogRead(sensorPin);

  float voltage = read * (5.0 / 1023.0);
  float temperature = voltage * 100.0;

  Serial.print("Temperature= ");
  Serial.print(temperature);
  Serial.println(" degree celcious");

  delay(1000);// waits one second before measuring again.
}
