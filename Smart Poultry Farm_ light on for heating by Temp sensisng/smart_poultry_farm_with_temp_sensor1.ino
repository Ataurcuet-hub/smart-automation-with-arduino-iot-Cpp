// C++ code
//

const int sensorPin = A1;
const int buzzerPin = 6;

bool hasBeeped = false; // Prevents continuous buzzer beep

void setup() {
  Serial.begin(9600);
  
  delay(2000); // Sensor stabilization time
  
  // LED Relay Output Pins
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int reading = analogRead(sensorPin);
  
  // Convert ADC reading to voltage
  float voltage = reading * (5.0 / 1024.0);
  
  // Convert voltage to Celsius temperature (TMP36 formula)
  float temp = (voltage - 0.5) / 0.01;

  // Print readings to Serial Monitor
  Serial.print("Sensor reading: ");
  Serial.println(reading);
  Serial.print("Voltage: ");
  Serial.println(voltage);
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" C");

  // Winter Logic: Turn ON lights if temperature falls to or below 26C
  if (temp <= 26.0) {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    // Single beep trigger when heating starts
    if (!hasBeeped) {
      digitalWrite(buzzerPin, HIGH);
      delay(150);
      digitalWrite(buzzerPin, LOW);
      hasBeeped = true;
    }
  } 
  else {
    // Turn OFF lights if temperature goes above 26C
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

    // Reset alert flag
    hasBeeped = false;
  }

  delay(1000);
}