/*
In this code we will Fading an LED with PWM based on Potentiometer value.
Example : if The Potentiometer give 1023, the LED will take 255 (MAX)
            0 for 0
            511.5 for 127.5 and so on !

*/
int potval; //we're going to put the Potentiometer analogRead value here !
int led = 10; //LES's Pin

void setup() {
  pinMode(led, OUTPUT);
}

void turnled(int potval){
  float pv = potval/((1023.0f/10.0f)/10.0f); //we're using a float variable, so we need to specify .0f in all the equation
  float lv = ((255.0f/10.0f)/10.0f)*pv; //we're using a float variable, so we need to specify .0f in all the equation
  analogWrite(led, lv); // give to the PWM's Pin value from 0.00 to 255.0

}

void loop() {
  potval = analogRead(A0); //take the Potentiometer value
  turnled(potval); //send the Potentiometer value to the function.
  /*
  Or:
  analogWrite(led, analogRead(A0) >> 2); //This will shifting the two right bits to 0 ! 0b0011111111 = 255
  Or:
  analogWrite(led, analogRead(A0)/4); //1023 /4 = 255 (Max value)
  */
}
