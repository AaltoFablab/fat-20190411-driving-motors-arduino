#include <Servo.h>
#define SERVO_PIN 9

Servo motor;

void setup() {
  motor.attach(SERVO_PIN);
}

void loop() {
  motor.write(0);
  delay(1000);
  motor.write(90);
  delay(1000);
  motor.write(180);
  delay(1000);
}
