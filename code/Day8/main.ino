const int touchPin = 4;
const int ledPin = 2;

int touchValue;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {

  touchValue = touchRead(touchPin);
  Serial.println(touchValue);

  if (touchValue < 30) {
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
