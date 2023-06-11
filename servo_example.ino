#include <Wire.h>
#include <Servo.h>

Servo tail;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
tail.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i = 0; i <90; i = i+2)
{
  tail.write(i);
  Serial.print(i);
  delay(10);
}

}
