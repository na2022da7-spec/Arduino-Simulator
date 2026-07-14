#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {

  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);

}

void loop() {

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(500);

  for(int i = 0; i < 3; i++) {

    servo1.write(40);
    servo2.write(40);
    servo3.write(40);
    servo4.write(40);
    delay(300);

    servo1.write(140);
    servo2.write(140);
    servo3.write(140);
    servo4.write(140);
    delay(300);

  }

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);

  delay(2000);

}