#include <Servo.h>
const int trigPin = 5;
const int echoPin = 18;
const int servoPin = 4;

long duration;
float distance;

Servo dustbinServo;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  dustbinServo.attach(servoPin);
  dustbinServo.write(0); // lid closed
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance < 20){
    dustbinServo.write(90);   // open lid
    delay(3000);              // keep open for 3 sec
    dustbinServo.write(0);    // close lid
  }

  delay(300);
}
