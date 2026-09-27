:::Fire or Smoke Safety Automation::::
A smart gas detection and multi-level alert system that monitors smoke or gas levels in real-time using an analog sensor (MQ-series) and dynamically controls multiple output indicators based on safety thresholds.

📹 Video Demo
🎥 Watch Demonstration: Fire or SMoke Safety Automation.mp4

⚙️ Working Principle
This project operates based on real-time gas threshold values using non-blocking millis() timing logic:

🟢 Safe Zone (Gas < 500): Normal air quality. All indicator LEDs and buzzer alarms remain completely OFF.

🟡 Warning Zone (500 ≤ Gas ≤ 700): Moderate smoke/gas level detected. Triggers a slow alert pulse (toggling outputs every 500 ms).

🔴 Critical Danger Zone (Gas > 700): High concentration of gas/smoke detected. Escalates to a rapid alarm pulse (toggling outputs every 50 ms) for urgent evacuation.

🛠️ Components Required
Arduino Board (e.g., Uno / Nano)

Gas / Smoke Sensor (e.g., MQ-2 / MQ-5 / MQ-135)

LEDs (x5) or Buzzer & LED combinations

Current Limiting Resistors (220Ω)

Breadboard & Connecting Wires

🔌 Circuit Diagram & Files
💻 Code / Source File: fire_safety_automation1.ino

📹 Demonstration Video: Fire or SMoke Safety Automation.mp4
