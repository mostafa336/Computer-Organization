void setup() {
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

bool flag1 = false, flag2 = false;

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  if(voltage > 3){
    flag1 = true;
    flag2 = false;    
  }
  if(voltage < 2.5){
    flag1 = false;
    flag2 = true;
  }
  if(flag1){
    tone(10, 1500, 10);
    digitalWrite(LED_BUILTIN, HIGH);
  }else if(flag2){
    tone(10, 0, 10);
    digitalWrite(LED_BUILTIN, LOW);
  }
  Serial.println(voltage);
  delay(1);
}
