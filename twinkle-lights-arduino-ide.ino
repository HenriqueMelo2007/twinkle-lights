int led;

void setup() {
  led = 10;
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(10, HIGH);
  delay(200);
  digitalWrite(10, LOW);
  delay(200);
}