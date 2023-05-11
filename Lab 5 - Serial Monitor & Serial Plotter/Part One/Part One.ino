int x;
int y;
int idx;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Please enter first number: ");
  x = getNumber();
  Serial.println(x);
  Serial.println("Please enter second number: ");
  y = getNumber();
  Serial.println(y);
  Serial.println("The result is:");
  Serial.println(x + y);
  Serial.println("\n----------------------------");
}

int getNumber(){
  char strValue[6];
  idx = 0;
  while(idx < 6){
    if(Serial.available()){
      char ch = Serial.read();
      strValue[idx++] = ch;
      if(idx == 6)
        return atoi(strValue);
      if(ch == '\n')
        return atoi(strValue);
    }
  }
}