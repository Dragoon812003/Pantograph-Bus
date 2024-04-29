#include <AFMotor.h>
#include <Servo.h>

Servo steering;
Servo pantograph;

AF_DCMotor motor(2);

int angle = 10;
int range = 20;

void setup() {
  steering.attach(10);
  pantograph.attach(9);
  steering.write(60);
  pantograph.write(angle);
  Serial.begin(9600);
}

void loop() {
  delay(5000);
  steering.write(90);
  delay(1000);
  steering.write(60);
  pantograph.write(angle+range);
  delay(5000);
  steering.write(30);
  delay(1000);
  pantograph.write(angle);
  steering.write(60);
}
