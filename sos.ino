int led = 13;
int dotDelay = 1000;
int dashDelay = 3000;
int startLoopDelay = 7000;

void setup() {
  pinMode(led, OUTPUT);
}

void dash() {
  digitalWrite(led, HIGH);
  delay(dashDelay);
  digitalWrite(led, LOW);
  delay(dashDelay);
}

void dot() {
  digitalWrite(led, HIGH);
  delay(dotDelay);
  digitalWrite(led, LOW);
  delay(dotDelay);
}

void startLoopPause() {
  digitalWrite(led, LOW);
  delay(startLoopDelay);
}

void loop() {
  // Make a long pause to indicate the message is stopping/going to begin
  startLoopPause();

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
