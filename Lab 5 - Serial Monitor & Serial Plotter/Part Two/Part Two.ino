double x = 0.0, y;

void setup() {
  Serial.begin(9600);
}

void loop() {
  y = sin(x);
  x += 0.5;
  Serial.println(y);

  delay(30);
}
