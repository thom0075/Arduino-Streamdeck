//Leonardo 32U4 board
//PWM pins 3,5,13 available 
#include <Keyboard.h>

int buttonNew, buttonOld=0, LEDstate=1;

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(2, OUTPUT); //yellow LED
  pinMode(3, OUTPUT); //red LED
  pinMode(4, OUTPUT); //blue LED
  pinMode(5, OUTPUT); //white LED
}
int c=0;

void loop() {
  //digitalWrite(4, HIGH);
  //digitalWrite(5, HIGH);
  //digitalWrite(2, HIGH);
  if(digitalRead(9)==LOW){  //CTRL+V
    Keyboard.begin();
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    Keyboard.press(KEY_LEFT_CTRL);
    delay(150);
    Keyboard.press(118);
    delay(150);  
    Keyboard.releaseAll();
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    }
    else{}
    if(digitalRead(10)==LOW){      //CTRL+C
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      Keyboard.begin();
      Keyboard.press(KEY_LEFT_CTRL);
      delay(80);
      Keyboard.press(99);
      Keyboard.releaseAll();
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    }
    else{}
    if(digitalRead(11)==LOW){ // CTRL+Y
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      Keyboard.begin();
      Keyboard.press(KEY_LEFT_CTRL);
      delay(80);
      Keyboard.press(121);
      delay(80);
      Keyboard.releaseAll();
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
    }
    else{}
     if(digitalRead(12)==LOW){  //CTRL+Z
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      Keyboard.begin();
      Keyboard.press(KEY_LEFT_CTRL);
      delay(80);
      Keyboard.press(122);
      delay(80);
      Keyboard.releaseAll();
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
    }
    else{}
    if(digitalRead(7)==LOW){ 
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      Keyboard.begin(); //starts/stops recording with Nvidia Shadowplay
      Keyboard.press(KEY_LEFT_ALT);
      delay(80);
      Keyboard.press(KEY_F9);
      delay(80);
      Keyboard.releaseAll();
      delay(20);
      if (LEDstate==1){
      digitalWrite(3, HIGH);
      LEDstate=0;
      }
      else if(LEDstate==0){
      digitalWrite(3, LOW);
      LEDstate=1;
      }
    }
      //digitalWrite(3, LOW);
      //digitalWrite(2, HIGH);
    else{}
    if(digitalRead(6)==LOW){  //ALT+F4
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      Keyboard.begin();
      Keyboard.press(KEY_LEFT_ALT);
      delay(80);
      Keyboard.press(KEY_F4);
      delay(80);
      Keyboard.releaseAll();
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
    }
    else{}
}
