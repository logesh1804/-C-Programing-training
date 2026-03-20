#define TRIG 9
#define ECHO 10

void ultrasonic_init() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

int get_distance() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}
