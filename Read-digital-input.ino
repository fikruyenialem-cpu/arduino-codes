int sensorport = 2;

void setup() {
  pinMode(sensorport, INPUT);
  Serial.begin(9600);
}

void loop() {
  int stuation = digitalRead(sensorport);
  Serial.println(stuation);
  delay(500);
}
