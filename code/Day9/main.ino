#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WiFiServer server(80);

const int ledPin = 2;

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.begin();
}

void loop() {

  WiFiClient client = server.available();

  if (client) {
    Serial.println("New Client");

    String request = client.readStringUntil('\r');
    Serial.println(request);
    client.flush();

    // LED control
    if (request.indexOf("/LEDON") != -1) {
      digitalWrite(ledPin, HIGH);
    }
    if (request.indexOf("/LEDOFF") != -1) {
      digitalWrite(ledPin, LOW);
    }

    // Webpage
    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println();

    client.println("<h1>ESP32 LED Control</h1>");
    client.println("<a href=\"/LEDON\"><button>ON</button></a>");
    client.println("<a href=\"/LEDOFF\"><button>OFF</button></a>");

    client.stop();
    Serial.println("Client Disconnected");
  }
}
