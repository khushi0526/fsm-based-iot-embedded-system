const int trigPin = 5;
const int echoPin = 18;
const int buzzerPin = 4;

long duration;
float distance;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  // Ultrasonic trigger
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance > 0 && distance < 20) {
    // Continuous alert
    digitalWrite(buzzerPin, HIGH);
  }
  else if (distance >= 20 && distance < 50) {
    // Beeping alert
    digitalWrite(buzzerPin, HIGH);
    delay(200);
    digitalWrite(buzzerPin, LOW);
    delay(200);
  }
  else {
    // Safe
    digitalWrite(buzzerPin, LOW);
  }

  delay(100);
}
