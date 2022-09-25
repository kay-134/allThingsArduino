


// change this to whichever pin you want to use
int buzzer = 10;


int redButton;
int yellowButton;
int greenButton;
int blueButton;
int whiteButton;

int pitch;

#include"pitches.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, OUTPUT); //white wire -> white LED
  pinMode(11, INPUT); //white wire -> white button
  pinMode(10, OUTPUT); //brown wire -> speaker
  pinMode(9, OUTPUT); //white wire -> yellow LED
  pinMode(8, OUTPUT); //orange wire -> green LED
  pinMode(7, OUTPUT); //blue wire -> blue LED
  pinMode(6, OUTPUT); //purple wire -> red LED
  pinMode(5, INPUT); //blue wire -> blue button
  pinMode(4, INPUT); //green wire -> green button
  pinMode(3, INPUT); //yellow wire -> yellow button
  pinMode(2, INPUT); //white wire -> red button
  
  
}
 
void loop() {
  // put your main code here, to run repeatedly:
  redButton = digitalRead(2);
  yellowButton = digitalRead(3);
  greenButton = digitalRead(4);
  blueButton = digitalRead(5);
  whiteButton = digitalRead(11);
  
  
  //red LED
  if (redButton == HIGH) {
    // turn LED on:
    
    digitalWrite(6, HIGH);
    
    tone(buzzer, NOTE_C4, 500);
    
    
  } else {
    // turn LED off:
     digitalWrite(6, LOW);
     
  }

   //yellow LED
  if (yellowButton == HIGH) {
    // turn LED on:
    digitalWrite(9, HIGH);
    tone(buzzer, NOTE_D4, 500);
    
  } else {
    // turn LED off:
     digitalWrite(9, LOW);
  }

   //green LED
  if (greenButton == HIGH) {
    // turn LED on:
    digitalWrite(8, HIGH);
    tone(buzzer, NOTE_E4, 500);
    
  } else {
    // turn LED off:
     digitalWrite(8, LOW);
  }

   //blue LED
  if (blueButton == HIGH) {
    // turn LED on:
    digitalWrite(7, HIGH);
    tone(buzzer, NOTE_F4, 500);
    
  } else {
    // turn LED off:
     digitalWrite(7, LOW);
  }

  //white LED
  if (whiteButton == HIGH) {
    // turn LED on:
    digitalWrite(12, HIGH);
    tone(buzzer, NOTE_G4, 500);
    
  } else {
    // turn LED off:
     digitalWrite(12, LOW);
  }
    

  //knob = analogRead(A0);
  
  //pitch = map(knob, 0, 1023, 30, 8000);

  //tone(9, pitch);
  //delay(10);
  //noTone(9);
  //Serial.println(knob);
  
  

}
