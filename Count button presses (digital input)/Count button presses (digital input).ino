
int btnpin = 2;

void setup() {
  pinMode(btnpin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(btnpin); // read the button state
  Serial.println(state);
  delay(200);
}

