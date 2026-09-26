// C++ code
//

void setup()
{
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(A0, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);
}

void loop()
{
  Serial.println("Receiving LDR Value");
  int ldrvalue= analogRead(A1);
  Serial.println(ldrvalue);
  delay(200);
  // Wait for 1000 millisecond(s)
  if (ldrvalue>=900){
    analogWrite(A0,0);
    analogWrite(A2,0);
    analogWrite(A3,0);
    analogWrite(A4,0);
    
    delay(100);
}
  else {
    analogWrite(A0,255);
    analogWrite(A2,255);
    analogWrite(A3,255);
    analogWrite(A4,255);
    delay(500);
  }
}