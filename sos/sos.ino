int led = 13;
int dotDelay = 1000;
int dashDelay = 3000;
int startLoopDelay = 7000;

void setup() {
  pinMode(led, OUTPUT);
}

void ledOn() {
  digitalWrite(led, HIGH);
}

void ledOff() {
  digitalWrite(led, LOW);
}

void dash() {
  ledOn();
  delay(dashDelay);
  ledOff();
  delay(dashDelay);
}

void dot() {
  ledOn();
  delay(dotDelay);
  ledOff();
  delay(dotDelay);
}

void startLoopPause() {
  ledOff();
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
