#include <Servo.h>
Servo myservo;
const int buttonPin = 2;
const int ledPin = 3;



void setup() {
  myservo.attach(9);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    myservo.write(180);
    digitalWrite(ledPin, HIGH);
  } else {
    myservo.write(0);
    digitalWrite(ledPin, LOW);
  }
}
// put your main code here, to run repeatedly:

