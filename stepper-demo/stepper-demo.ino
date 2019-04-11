#define M1 2
#define M2 3
#define M3 4
#define M4 5

#define NUM_STEPS 200
#define DELAY_STEP_US 1500
#define DELAY_CYCLE_MS 1000

void setup() {
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);

  digitalWrite(M1, LOW);
  digitalWrite(M2, LOW);
  digitalWrite(M3, LOW);
  digitalWrite(M4, LOW);
}

void loop() {
  int counter = 0;
  while(counter < (NUM_STEPS / 4)){
    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);
    digitalWrite(M3, LOW);
    digitalWrite(M4, LOW);
    delayMicroseconds(DELAY_STEP_US);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    digitalWrite(M3, HIGH);
    digitalWrite(M4, LOW);
    delayMicroseconds(DELAY_STEP_US);

    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);
    digitalWrite(M3, LOW);
    digitalWrite(M4, LOW);
    delayMicroseconds(DELAY_STEP_US);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    digitalWrite(M3, LOW);
    digitalWrite(M4, HIGH);
    delayMicroseconds(DELAY_STEP_US);

    counter = counter + 1;
  }

  delay(DELAY_CYCLE_MS);
  
  counter = 0;
  while(counter < (NUM_STEPS / 4)){
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    digitalWrite(M3, LOW);
    digitalWrite(M4, HIGH);
    delayMicroseconds(DELAY_STEP_US);

    digitalWrite(M1, LOW);
    digitalWrite(M2, HIGH);
    digitalWrite(M3, LOW);
    digitalWrite(M4, LOW);
    delayMicroseconds(DELAY_STEP_US);

    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
    digitalWrite(M3, HIGH);
    digitalWrite(M4, LOW);
    delayMicroseconds(DELAY_STEP_US);

    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);
    digitalWrite(M3, LOW);
    digitalWrite(M4, LOW);
    delayMicroseconds(DELAY_STEP_US);

    counter = counter + 1;
  }

  delay(DELAY_CYCLE_MS);
}
