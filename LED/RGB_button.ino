/*
This code will make a mood light with RGB LED
*/
int red=8;
int green=7;
int blue=2;
int button=12;
int led=1;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
}

void turnOn(String light){
  if (light == "red"){
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }else if (light == "green"){
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }else if(light == "blue"){
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }else if(light == "white"){
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);

  }

}

void loop() {
  if (digitalRead(button) == HIGH && (led == 1)){
      turnOn("red");
      led = 2;
      delay(300);
  }
  if (digitalRead(button) == HIGH && (led == 2)){
      turnOn("green");
      led = 3;
      delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 3) ){
      turnOn("blue");
      led = 0;
      delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 0)){
      turnOn("white");
      led = 1;
      delay(300);
  }

}
