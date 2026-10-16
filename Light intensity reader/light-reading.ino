
int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(sensorPin);

  Serial.print("Light reading is equal to ");
  Serial.println(lightValue);

  delay(500);
}
