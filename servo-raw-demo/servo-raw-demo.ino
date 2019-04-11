#define SERVO_PIN 9
#define PULSE_MIN 500
#define PULSE_MAX 2600
#define DUTY_CYCLE 20000 // in us (not ms)

unsigned long dutyc_us = DUTY_CYCLE;
unsigned long pulse_us = PULSE_MAX;
unsigned long last_us = micros();

unsigned long last_ms = millis();
unsigned long delay_ms = 3000;

void setup() {
  pinMode(SERVO_PIN, OUTPUT);

  while(1){
    unsigned long curr_us = micros();

    if(curr_us <= last_us + pulse_us){
      digitalWrite(SERVO_PIN, HIGH);
    }else{
      digitalWrite(SERVO_PIN, LOW);
    }

    if(curr_us >= last_us + dutyc_us){
      last_us = curr_us;
    }

    unsigned long curr_ms = millis();
    if(curr_ms >= last_ms + delay_ms){
      if(pulse_us == PULSE_MAX){
        pulse_us = PULSE_MIN;
      }else{
        pulse_us = PULSE_MAX;
      }
      last_ms = curr_ms;
    }
  }
}
