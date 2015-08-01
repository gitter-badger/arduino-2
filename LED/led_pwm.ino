/*
This code is for fading an LED on pin 9

*/
int led=9; //the LED's PWM pin.
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(int i=0;i<=255;i+=5){ //increase the LED's brightness
    analogWrite(led, i);
    delay(30); //wait for 30ms
  }
  for(int j=255;j>=0;j-=5){ //decrease the LED's brightness
    analogWrite(led, j);
    delay(30); //wait for 30ms
  }
}
