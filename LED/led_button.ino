/*
This code to turn on/off LED using a PushButton.
*/
int led = 13; // LED's PIN
int button = 12; // BUTTON's PIN
boolean ledon = LOW; // the default status of te led is OFF -

void setup() {
  pinMode(led, OUTPUT); //initialize the LED as a OUTPUT.
  pinMode(button, INPUT); //initialize the BUTTON as an input for HIGH/LOW.
}

void loop() {
  if (digitalRead(button) == HIGH){ //if the button on (pressed)!

    if (ledon == LOW){ //if the led is OFF
      digitalWrite(led, HIGH); //turn on the LED
      ledon = !ledon; //Put the LED Status to HIGH
    }else{
      digitalWrite(led, LOW); //if the LED is ON
      ledon = !ledon; // put the led status to LOW
      }
   delay(300); //wait, to avoid conflicts.
  }
}
