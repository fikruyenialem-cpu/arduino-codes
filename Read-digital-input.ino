int sensorport = 2;

void setup() {
  pinMode(sensorport, INPUT);
  Serial.begin(9600);
}

void loop() {
  int stuation = digitalRead(sensoport);
  Serial.println(stuation);
  delay(500);
}
