#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {13, 12, 14, 27};
byte colPins[COLS] = {26, 25, 33, 32};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String password = "1234";
String input = "";

const int ledPin = 2;
const int buzzerPin = 4;

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  char key = keypad.getKey();

  if (key) {
    Serial.print("Key Pressed: ");
    Serial.println(key);

    if (key == '#') {
      if (input == password) {
        digitalWrite(ledPin, HIGH);
        delay(2000);
        digitalWrite(ledPin, LOW);
      } else {
        digitalWrite(buzzerPin, HIGH);
        delay(2000);
        digitalWrite(buzzerPin, LOW);
      }
      input = "";
    } 
    else if (key == '*') {
      input = "";
    } 
    else {
      input += key;
    }
  }
}
