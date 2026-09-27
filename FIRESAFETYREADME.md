🔥 Fire or Smoke Safety Automation

An Arduino-based smart safety system designed to detect fire or gas/smoke levels using an analog sensor and trigger multi-stage visual and audio warnings in real time using non-blocking code logic.

🔗 Project Attachments & Links

🎥 Project Demonstration Video: Fire or SMoke Safety Automation.mp4

💻 Arduino Code File: fire_safety_automation1.ino

⚙️ How It Works

The system continuously reads the gas/smoke level from pin A1 and responds based on defined threshold levels without interrupting system execution:

Gas Level Range

Status Zone

Output Action (Pins 2–6)

Gas < 500

Safe Zone

All outputs remain OFF (LOW).

500 ≤ Gas ≤ 700

Warning Zone

Slow alert pulse — toggles every 500 ms.

Gas > 700

Critical Danger Zone

Rapid alarm pulse — toggles every 50 ms.

🔑 Key Features

Non-blocking Timing (millis()): Uses time-differencing instead of delay(), ensuring real-time serial monitor updates and responsive sensor readings.

Dynamic Multi-Stage Response: Automatically scales visual and auditory alarm frequency based on danger intensity.

Synchronized Output Control: Controls up to 5 warning devices (LEDs, buzzers, relays) in unison via pins 2 through 6.

🛠️ Hardware Requirements

Arduino Uno / Nano (or compatible microcontroller)

Analog Gas / Smoke Sensor (e.g., MQ-2 / MQ-5)

Output Devices (LEDs, Buzzer, Relays) on Digital Pins 2–6

Connecting Wires & Breadboard
