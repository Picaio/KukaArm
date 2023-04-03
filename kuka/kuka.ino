#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5;
int pot1, pot2, pot3, pot4, pot5;

void setup() {
  // Attach servos to the designated pins
  servo1.attach(10);
  servo2.attach(11);
  servo3.attach(9);
  servo4.attach(6);
  servo5.attach(5);
}

void loop() {
  // Read the values of the potentiometers
  pot1 = analogRead(0);
  pot2 = analogRead(1);
  pot3 = analogRead(2);
  pot4 = analogRead(3);
  pot5 = analogRead(4);

  // Map the potentiometer values to the servo angles
  int angle1 = map(pot1, 0, 1023, 0, 180);
  int angle2 = map(pot2, 0, 1023, 0, 180);
  int angle3 = map(pot3, 0, 1023, 0, 180);
  int angle4 = map(pot4, 0, 1023, 0, 180);
  int angle5 = map(pot5, 0, 1023, 0, 180);

  // Set the servo angles
  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);
  servo4.write(angle4);
  servo5.write(angle5);

  // Wait a little bit so the servos have time to move
  delay(15);
}
