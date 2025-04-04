# LPG-leak-iot-simulation
LPG leak detection IoT system
# LPG Leak Detection IoT System (Simulation)

This project simulates an IoT-based LPG gas leak detection system using the ESP8266 microcontroller in the Wokwi online simulator. It demonstrates how gas levels can be monitored in real time and how alerts and cloud integration can be implemented in an IoT pipeline.

## Features

- Simulated gas sensor readings (randomized values)
- Threshold-based leak detection logic
- Red and Green LEDs to indicate alert and safe status
- Timestamped Serial output messages
- Simulated Wi-Fi connection
- Cloud-ready structure using ThingSpeak-style API call (non-functional in simulation)

## How It Works

The system randomly generates gas concentration levels. If the level exceeds a defined threshold, it simulates a gas leak alert using the red LED and console warnings. If within safe range, the green LED is turned on. The system simulates a cloud upload mechanism by printing a mock ThingSpeak upload message to the Serial Monitor. This entire setup is tested using the Wokwi simulator with no physical hardware required.

## Tools & Technologies

- **Microcontroller:** ESP8266 (Generic)
- **Simulation Platform:** [Wokwi](https://wokwi.com)
- **Language:** C++ (Arduino)
- **IDE:** Arduino IDE

## Usage

1. Clone this repository or copy the code into your Arduino IDE.
2. Upload it to the Wokwi simulator with ESP8266 as the board.
3. Observe the Serial Monitor for sensor readings and alert logic.

## Future Enhancements

- Integrate real gas sensors (like MQ-2) with ESP8266
- Use real Wi-Fi credentials and actual ThingSpeak API for cloud upload
- Add buzzer or notification system for physical alerts
- Build a basic mobile/web dashboard for monitoring

---

**Note:** This is a fully virtual simulation designed to demonstrate IoT workflow logic. No physical components are used in this version.
