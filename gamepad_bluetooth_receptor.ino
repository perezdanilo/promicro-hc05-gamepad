#include <Gamepad.h>
Gamepad gp;
char t;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial1.begin(38400);
  // make the pushbutton's pin an input:
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  if(Serial1.available()){
    t = Serial1.read();
    Serial.println(t);
    if(t=='d')
      gp.setButtonState(0, true);
    else if(t=='f')
      gp.setButtonState(0, false);
  }
  
  delay(10);        // delay in between reads for stability
}
