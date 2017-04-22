void setup() {
  pinMode(led, OUTPUT);
}

void dash() {
  digitalWrite(led, HIGH);
  delay(3000);
  digitalWrite(led, LOW);
  delay(3000);
}

void dot() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}

void startLoop() {
  digitalWrite(led, LOW);
  delay(7000);
}

void loop() {
  startLoop();

  // S
  dot();
  dot();
  dot();

  // O
  dash();
  dash();
  dash();

  // S
  dot();
  dot();
  dot();
}

