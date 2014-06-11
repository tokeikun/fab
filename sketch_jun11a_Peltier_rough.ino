void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp_in;
  
  temp_in = analogRead(3);
  
  Serial.print(temp_in, DEC);
  Serial.print("\n");
  delay(1000);
}
