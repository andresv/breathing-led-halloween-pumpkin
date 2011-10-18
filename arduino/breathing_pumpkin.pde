
void setup()  { 
  pinMode(9, OUTPUT);
  pinMode(13, OUTPUT);
} 

void loop()  {
  digitalWrite(13, HIGH);
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  delay(1000);
}
