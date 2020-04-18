#include <Servo.h>

Servo servo1;
Servo servo2;

void setup() {

servo1.attach(8);
servo2.attach(9);

if (currentavg>1.5);
  digitalWrite(invPin,LOW);
  delay(6000);
  digitalWrite(invPin,HIGH);
  delay(6000);
}

void loop() {
  
servo1.write(0);
delay(800);
servo1.write(180);
delay(800);

servo2.write(180);
delay(800);
servo2.write(0);
delay(800);



}
