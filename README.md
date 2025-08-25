## 🌡️ DHT Sensor with Arduino Uno – README

### 📘 Overview
This project demonstrates how to interface a **DHT11/DHT22 Temperature and Humidity Sensor** with an **Arduino Uno** to measure environmental conditions. The sensor provides calibrated digital output and is ideal for DIY weather stations, greenhouse monitoring, and smart home systems.

### 🔍 Sensor Description
The **DHT sensor family** includes DHT11 and DHT22:
- **DHT11**: Low-cost, basic sensor with moderate accuracy.
- **DHT22**: More accurate and wider range, suitable for precision applications.

| Feature         | DHT11                  | DHT22                   |
|----------------|------------------------|-------------------------|
| Temp Range     | 0–50°C ±2°C            | -40–80°C ±0.5°C         |
| Humidity Range | 20–90% ±5%             | 0–100% ±2–5%            |
| Voltage        | 3.3V–5.5V              | 3.3V–6V                 |
| Sampling Rate  | 1 Hz                   | 0.5 Hz                  |

### 🧠 Internal Structure
Inside the DHT sensor:
- **NTC Thermistor**: Measures temperature.
- **Capacitive Humidity Sensor**: Detects moisture levels.
- **Signal Processing Chip**: Converts analog data to digital output using a proprietary one-wire protocol.

### 🔌 Circuit Connections with Arduino Uno

#### 🛠️ Components Required
- Arduino Uno
- DHT11 or DHT22 sensor
- 10kΩ pull-up resistor (optional for stability)
- Jumper wires
- Breadboard

#### ⚡ Wiring Diagram

| DHT Pin | Function       | Arduino Uno |
|---------|----------------|-------------|
| 1       | VCC (Power)    | 5V          |
| 2       | Data           | Digital Pin 2 (or any digital pin) |
| 3       | NC (Not used)  | —           |
| 4       | GND            | GND         |

> 💡 Tip: Connect a 10kΩ resistor between VCC and Data pin to improve signal stability.


### 📦 Applications
- Weather monitoring systems
- Smart agriculture
- HVAC control
- IoT-based environmental sensing

