#include "motor_control.h"
#include "ultrasonic.h"
#include "bluetooth_control.h"

void setup() {
  Serial.begin(9600);
  motor_init();
  ultrasonic_init();
  bluetooth_init();
}

void loop() {
  int distance = get_distance();
  char command = get_bluetooth_command();

  if (distance < 20) {
    stop_motor();
  } else {
    control_robot(command);
  }
}
