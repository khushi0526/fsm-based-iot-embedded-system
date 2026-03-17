#include <Servo.h>
Servo myServo;
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;
long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myServo.attach(servoPin);
  myServo.write(0); // lid closed
}

void loop() {
  // Trigger ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // If object detected
  if (distance > 0 && distance < 20) {

    Serial.println("Opening Lid");

    myServo.write(90); // open
    delay(3000);

    Serial.println("Closing Lid");

    myServo.write(0); // close
  }

  delay(200);
}
