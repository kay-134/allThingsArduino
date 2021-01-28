void setup(){
  Serial.begin(9600);
  
  pinMode(13, INPUT_PULLUP);
  pinMode(4, OUTPUT);
}
  void loop() {
    if(digitalRead(3) == LOW){
      digitalWrite(4, HIGH);
      Serial.print("Button pressed");
      delay(400);
    }
    
    else if(digitalRead(3) == HIGH){
      digitalWrite(4, LOW);
      delay(400);
    }
  }
