const int trigPin = 5;
const int echoPin = 18;
const int ledPin = 2;
const int buzzerPin = 4;

long duration;
float distance;

void setup() {
  Serial.begin(115200);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
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

  if(distance > 40){
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }

  else if(distance <= 40 && distance > 20){
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }

  else if(distance <= 20){
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }

  delay(300);
}
