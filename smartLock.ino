#include <Servo.h>
char serialData;
int pin =10;

void setup() {
Serial.begin(9600);
}

Servo lock;


void loop() {
  lock.attach(pin);
  lock.write(88);
  if (Serial.available() > 0){
    serialData = Serial.read();
    Serial.println(serialData);
  
    if (serialData == '1') {
      lock.write(0);
      delay(500);
      lock.write(88);
      delay(10000);
      lock.write(180);
      delay(500);
      lock.write(88);
  }

  
}
}
