#include <Servo.h>
Servo myServo;
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;
const int buzzerPin = 8;
long duration;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  myServo.attach(servoPin);
  myServo.write(0); // Lid closed

  digitalWrite(buzzerPin, LOW);
}

void loop() {

  // Send ultrasonic pulse
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

  // Object detected
  if (distance > 0 && distance < 20) {

    Serial.println("Opening Lid");

    digitalWrite(buzzerPin, HIGH); // Buzzer ON
    myServo.write(90);             // Open lid

    delay(3000);

    Serial.println("Closing Lid");

    myServo.write(0);              // Close lid
    digitalWrite(buzzerPin, LOW);  // Buzzer OFF
  }

  delay(200);
}
