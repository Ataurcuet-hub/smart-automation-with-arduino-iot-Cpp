:# 🐔 Smart Poultry Farm Climate Control System

Demo Video: 

https://github.com/user-attachments/assets/e2b7d6d1-c1f3-48dc-9a04-4266bc75ac04


COde file: 💻 **Code / Source File:** [smart_poultry_farm_with_temp_sensor1.ino](./smart_poultry_farm_with_temp_sensor1.ino)



An Automated Temperature Monitoring and Climate Control Solution for Poultry Farming using Arduino Uno and TMP36 Sensor.

---

## 📌 Project Overview
Maintaining an optimal temperature in poultry farms is crucial for the health, growth, and productivity of birds, especially during seasonal changes like winter. 

This project provides an automated solution using an **Arduino Uno** and a **TMP36 Temperature Sensor**. When the ambient temperature drops below a safe threshold (**≤ 26°C**), the system automatically triggers heating/light units to maintain warmth. Additionally, a **buzzer alert** sounds momentarily when heating is initiated to notify farm operators.

---

## ⚡ Key Features
* **Automated Heating Control:** Automatically turns ON light bulbs/heating relays when temperature drops to **26°C or lower**.
* **Overheat Protection:** Turns OFF heating units when temperature exceeds **26°C** to prevent heat stress.
* **Smart Audio Notification:** Generates a short single-beep alert via buzzer when heating turns on, avoiding continuous annoying noise.
* **Real-time Serial Monitoring:** Continuously streams ADC reading, voltage, and calculated temperature (°C) via Serial Communication.

---

## 🛠️ Hardware Requirements
| Component | Quantity | Description |
| :--- | :--- | :--- |
| **Arduino Uno R3** | 1 | Microcontroller Board |
| **TMP36 Sensor** | 1 | Precision Temperature Sensor |
| **Piezzo Buzzer** | 1 | Audio Alert Indicator |
| **LEDs / Relay Module** | 4 | Represents Heating Bulbs / Load Circuits |
| **Resistors** | As required | Current limiting resistors for LEDs/Buzzer |
| **Breadboard & Wires** | 1 Set | Circuit Interconnections |

---

## 🔌 Circuit Pin Mapping
* **TMP36 Vout Pin** $\rightarrow$ Arduino **A1**
* **Buzzer (+ Pin)** $\rightarrow$ Arduino **Digital Pin 6**
* **Heating Bulbs / Relays** $\rightarrow$ Arduino **Digital Pins 2, 3, 4, 5**
* **Sensor VCC / GND** $\rightarrow$ Arduino **5V / GND**

---

## 📊 System Logic & Flowchart

1. **Read Sensor:** Read analog raw value from TMP36 via Analog Pin `A1`.
2. **Convert Value:** 
   $$\text{Voltage} = \text{Reading} \times \left(\frac{5.0}{1024.0}\right)$$
   $$\text{Temperature (°C)} = \frac{\text{Voltage} - 0.5}{0.01}$$
3. **Threshold Condition:**
   * **If Temp $\le$ 26.0°C:** Turn ON Light Bulbs (`Pins 2, 3, 4, 5 HIGH`) + Single Beep Alert (`Pin 6 HIGH for 150ms`).
   * **If Temp > 26.0°C:** Turn OFF Light Bulbs (`Pins 2, 3, 4, 5 LOW`).

---🚀 Future Scope
Integration of I2C LCD Display or OLED for local visual metrics.

Adding GSM/Wi-Fi Module (ESP8266/ESP32) for real-time IoT monitoring and SMS alerts to farm owners.

Adding a DHT11/DHT22 sensor to monitor and control farm humidity alongside temperature.
