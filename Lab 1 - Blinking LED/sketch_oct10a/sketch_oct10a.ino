void setup() {
  pinMode(10, OUTPUT);

}

void loop() {
  for(int i = 0; i < 3; ++i){
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
    delay(1000);
  }
  delay(2000);
  for(int i = 0; i < 3; ++i){
    digitalWrite(10, HIGH);
    delay(3000);
    digitalWrite(10, LOW);
    delay(1000);
  }
  delay(2000);
  for(int i = 0; i < 3; ++i){
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
    delay(1000);
  }
  delay(2000);

}
