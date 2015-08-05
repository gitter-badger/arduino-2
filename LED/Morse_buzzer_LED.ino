/*
In This code we will try to generate words and letters to Morse code ! using both of light and sound!
*/
char* morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....", // a,b,c,d,e,f,g,h
"..",".---","-.-",".-..","--","-.","---",".--." //i,j,k,l,m,n,o,p
,"--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}; //q,r,s,t,u,v,w,x,y,z

int one_unit = 500;     // half-second for the "." code. and between letters.
int three_unit = 1500;  // secand and helf for the "-" code.
int seven_unit = 3500;  // three second and helf for the space between words.
char ch;       // for serial.read()
int buzzer = 10;  //buzzer's Pin
int led = 2;  //LED's Pin

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void on(){ //function to turon on LED and buzzer
  analogWrite(buzzer, 115);
  digitalWrite(led, HIGH);
}

void off(){ //function to turn off both of LED and buzzer
  analogWrite(buzzer, 0);
  digitalWrite(led, LOW);
}

void say(char m){
  if (m == '.'){
    on();
    delay(one_unit);
  }else if (m == '-'){
    on();
    delay(three_unit);
  }
  off();
  delay(three_unit);
}

void take(char* seq){
  int i=0;
  while(seq[i] != '\0'){
    say(seq[i]);
    i++;
  }
}

void loop() {
  if (Serial.available()>0){
    ch = Serial.read(); //this will take a char easch time !

    if (ch >= 'a' && ch <= 'z'){
      take(morse[ch-'a']);
    }else if (ch >= 'A' && ch <= 'Z'){
      take(morse[ch-'A']);
    }else if(ch == ' '){ //this for the space!
      off();
      delay(seven_unit);
    }else{ // in case of Error!
      Serial.print(ch);
      Serial.println(" = Error");
    }
  }
}
