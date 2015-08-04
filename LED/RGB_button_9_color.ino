/*
This code use a RGB LED and button to switch to 9 different color, every time when you pressed the button.
*/
int red = 9;
int green = 10;
int blue = 11;
int button = 8;
int led=1;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
}

void turnOn(String light){
  if (light == "red"){
    analogWrite(red, 255);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }else if (light == "green"){
    analogWrite(red, 0);
    analogWrite(green, 255);
    analogWrite(blue, 0);
  }else if(light == "blue"){
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 255);
  }else if(light == "yellow"){
    analogWrite(red, 255);
    analogWrite(green, 255);
    analogWrite(blue, 0);
  }else if(light == "purple"){
    analogWrite(red, 128);
    analogWrite(green, 0);
    analogWrite(blue, 255);
  }else if (light == "aqua"){
    analogWrite(red, 0);
    analogWrite(green, 255);
    analogWrite(blue, 255);
    }else if(light == "white"){
      analogWrite(red, 255);
      analogWrite(green, 255);
      analogWrite(blue, 255);
    }else if(light == "pink"){
      analogWrite(red, 175);
      analogWrite(green, 75);
      analogWrite(blue, 148);
    }else if(light == "orange"){
      analogWrite(red, 237);
      analogWrite(green, 120);
      analogWrite(blue, 6);
    }else if(light == "off"){
      analogWrite(red, 0);
      analogWrite(green, 0);
      analogWrite(blue, 0);
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
      led = 4;
      delay(300);
  }
  if (digitalRead(button) == HIGH && (led == 4)){
      turnOn("yellow");
      led = 5;
      delay(300);
  }
  if (digitalRead(button) == HIGH && (led == 5)){
      turnOn("purple");
      led = 6;
      delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 6) ){
      turnOn("aqua");
      led = 7;
      delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 7)){
      turnOn("white");
      led = 8;
      delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 8)){
       turnOn("pink");
       led = 9;
       delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 9)){
       turnOn("orange");
       led = 0;
       delay(300);
  }
 if (digitalRead(button) == HIGH && (led == 0)){
       turnOn("off");
       led = 1;
       delay(300);
  }
}
