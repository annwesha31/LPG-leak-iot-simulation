#include <ESP8266WiFi.h>

#define GAS_THRESHOLD 600  // Set your own leak detection threshold

const int redLED = D2;     // Red LED pin for alert
const int greenLED = D3;   // Green LED pin for normal status

const char* ssid = "TestSSID";        // Replace with your Wi-Fi SSID (simulated)
const char* password = "TestPassword"; // Replace with your password (simulated)

void setup() {
  Serial.begin(115200);

  // Setup LED pins
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  // Simulate Wi-Fi connection
  Serial.println("Connecting to Wi-Fi...");
  delay(2000);
  Serial.print("Connected to Wi-Fi as: ");
  Serial.println(ssid);

  // System ready
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  Serial.println("System Ready - Monitoring Gas Levels");
}

void loop() {
  int gasLevel = random(400, 900); // Simulated gas level

  Serial.println("-----------------------------");
  Serial.print("Timestamp: ");
  Serial.println("2025-04-04 10:30:00");  // Dummy timestamp

  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  if (gasLevel > GAS_THRESHOLD) {
    Serial.println("ALERT: Gas Leak Detected!");
    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  } else {
    Serial.println("Status: Gas level normal.");
    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  // Simulate data upload to cloud (like ThingSpeak)
  Serial.println("Uploading data to ThingSpeak...");
  delay(500);
  Serial.println("Upload complete.");

  delay(5000); // Wait before next reading
}