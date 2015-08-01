/*
This code is specific to turn the led on for ever.

*/
int led = 12; // the led's pin we going to use!
void setup() {
  pinMode(led,OUTPUT); // initialize digital pin 12 as an output.
  digitalWrite(led, HIGH); //turn the led on.
}

void loop() {
  // we don't need this function to do some thing over and over (forever)
}
