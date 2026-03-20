#define IN1 5
#define IN2 6

void motor_init() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void stop_motor() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}
