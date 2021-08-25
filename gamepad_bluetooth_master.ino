#include <Gamepad.h>

//Initializing a Gamepad
Gamepad gp;
void setup() {
  //initializing inputs
 
  pinMode(2,  INPUT_PULLUP);
  pinMode(3,  INPUT_PULLUP);
  pinMode(4,  INPUT_PULLUP);
  pinMode(5,  INPUT_PULLUP);
  pinMode(6,  INPUT_PULLUP);
  pinMode(7,  INPUT_PULLUP);
  pinMode(8,  INPUT_PULLUP);
  pinMode(9,  INPUT_PULLUP);
  pinMode(10,  INPUT_PULLUP);
  pinMode(16,  INPUT_PULLUP);
  pinMode(14,  INPUT_PULLUP);
  pinMode(15,  INPUT_PULLUP);
  pinMode(A0,  INPUT_PULLUP);
  pinMode(A1,  INPUT_PULLUP);
  
}

void loop() {
 
  
  int pino2;
  pino2 = digitalRead(2);
  if(pino2 == LOW){
    gp.setButtonState(0, true);
    Serial.print("A");
  }
  else{
    gp.setButtonState(0, false);
    Serial.print("a");  
  }

  int pino3;
  pino3 = digitalRead(3);
  if(pino3 == LOW){
    gp.setButtonState(1, true);
    Serial.print("B");
  }
  else{
    gp.setButtonState(1, false);
    Serial.print("b");
  }
    
  int pino4;
  pino4 = digitalRead(4);
  if(pino4 == LOW){
    gp.setButtonState(2, true);
    Serial.print("C");
  }
  else{
    gp.setButtonState(2, false);
    Serial.print("c");
  }

  int pino5;
  pino5 = digitalRead(5);
  if(pino5 == LOW){
    gp.setButtonState(3, true);
    Serial.print("D");
  }
  else{
    gp.setButtonState(3, false);
    Serial.print("d");
  }

  int pino6;
  pino6 = digitalRead(6);
  if(pino6 == LOW){
    gp.setButtonState(4, true);
    Serial.print("E");
  }
  else{
    gp.setButtonState(4, false);
    Serial.print("e");
  }

  int pino7;
  pino7 = digitalRead(7);
  if(pino7 == LOW){
    gp.setButtonState(5, true);
    Serial.print("F");
  }
  else{
    gp.setButtonState(5, false);
    Serial.print("f");
  }

  int pino8;
  pino8 = digitalRead(8);
  if(pino8 == LOW){
    gp.setButtonState(6, true);
    Serial.print("G");
  }
  else{
    gp.setButtonState(6, false);
    Serial.print("g");
  }

  int pino9;
  pino9 = digitalRead(9);
  if(pino9 == LOW){
    gp.setButtonState(7, true);
    Serial.print("H");
  }
  else{
    gp.setButtonState(7, false);
    Serial.print("h");
  }

  int pino10;
  pino10 = digitalRead(10);
  if(pino10 == LOW){
    gp.setButtonState(8, true);
    Serial.print("I");
  }
  else{
    gp.setButtonState(8, false);
    Serial.print("i");
  }

  int pino16;
  pino16 = digitalRead(16);
  if(pino16 == LOW){
    gp.setButtonState(9, true);
    Serial.print("J");
  }
  else{
    gp.setButtonState(9, false);
    Serial.print("j");
  }

  int pino14;
  pino14 = digitalRead(14);
  if(pino14 == LOW){
    gp.setButtonState(10, true);
    Serial.print("K");
  }
  else{
    gp.setButtonState(10, false);
    Serial.print("k");
  }

  int pino15;
  pino15 = digitalRead(15);
  if(pino15 == LOW){
    gp.setButtonState(11, true);
    Serial.print("L");
  }
  else{
    gp.setButtonState(11, false);
    Serial.print("l");
  }

  int pinoA0;
  pinoA0 = digitalRead(A0);
  if(pinoA0 == LOW){
    gp.setButtonState(12, true);
    Serial.print("M");
  }
  else{
    gp.setButtonState(12, false);
    Serial.print("m");
  }

  int pinoA1;
  pinoA1 = digitalRead(A1);
  if(pinoA1 == LOW){
    gp.setButtonState(13, true);
    Serial.print("N");
  }
  else{
    gp.setButtonState(13, false);
    Serial.print("n");
  }

  delay(20);
}
