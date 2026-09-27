// C++ code
//


unsigned long previoustime = 0;
int pinstate = LOW; // LED/Buzzer State (LOW/HIGH)

void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  int gaslevel = analogRead(A1);
  Serial.println(gaslevel);
  
  unsigned long currenttime = millis();

  // ১. Fast Blinkig
  if (gaslevel > 700) {
    if (currenttime - previoustime >= 50) {
      previoustime = currenttime;
      pinstate = !pinstate; // Toggling
      
      digitalWrite(2, pinstate);
      digitalWrite(3, pinstate);
      digitalWrite(4, pinstate);
      digitalWrite(5, pinstate);
      digitalWrite(6, pinstate);
    }
  }
  // 2. Slow Blinking 
  else if (gaslevel >= 500 && gaslevel <= 700) {
    if (currenttime - previoustime >= 500) {
      previoustime = currenttime;
      pinstate = !pinstate; 
      
      digitalWrite(2, pinstate);
      digitalWrite(3, pinstate);
      digitalWrite(4, pinstate);
      digitalWrite(5, pinstate);
      digitalWrite(6, pinstate);
    }
  }
  // 3. No Blinking
  else {
    pinstate = LOW;
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
  }
 delay(10);
}