#define PIN_A 7

void setup() {
  pinMode(PIN_A, OUTPUT);
}

void loop() {
  digitalWrite(PIN_A, HIGH);
  delay(2000);
  digitalWrite(PIN_A, LOW);
  delay(2000); 
}
