#include<Servo.h>

Servo myservo;
int emgPin = A0;
int emgValue = 0;
int servoPin = 9;

void setup() {
  myservo.attach(servoPin);
  Serial.begin(9600);

}

void loop() {
  emgValue = analogRead(emgPin);
  int ServoPos = map(emgValue, 0, 1023, 0, 180);
  myservo.write(ServoPos);
  Serial.println(emgValue);
  delay(100);

}
