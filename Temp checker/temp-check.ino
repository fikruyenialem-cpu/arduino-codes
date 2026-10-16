
int temperature = 32;

void setup() {
  Serial.begin(9600);

  if (temperature > 30) {
    Serial.println("It is hot");
  } else {
    Serial.println("It is not hot");
  }
}

void loop() {
}
