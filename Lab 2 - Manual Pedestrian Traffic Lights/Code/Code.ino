void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);

}

boolean debounce(int pin){
  boolean state;
  boolean previousState;
  previousState = digitalRead(pin);
  for(int i = 0; i < 10; ++i){
    delay(1);
    state = digitalRead(pin);
    if(state != previousState){
      i = 0;
      previousState = state;
    }
  }
  return state;
}

void loop() {
  while(debounce(2)){
    digitalWrite(10, HIGH);
    digitalWrite(6, LOW);
  }
  while(!debounce(2)){
    
  }
  while(debounce(2)){
    digitalWrite(10, LOW);
    digitalWrite(6, HIGH);
  }
  while(!debounce(2)){
    
  }
  
}
