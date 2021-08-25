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
    if(t=='A')
      gp.setButtonState(0, true);
    if(t=='a')
      gp.setButtonState(0, false);

    if(t=='B')
      gp.setButtonState(1, true);
    if(t=='b')
      gp.setButtonState(1, false);

    if(t=='C')
      gp.setButtonState(2, true);
    if(t=='c')
      gp.setButtonState(2, false);

    if(t=='D')
      gp.setButtonState(3, true);
    if(t=='d')
      gp.setButtonState(3, false);

    if(t=='E')
      gp.setButtonState(4, true);
    if(t=='e')
      gp.setButtonState(4, false);

    if(t=='F')
      gp.setButtonState(5, true);
    if(t=='f')
      gp.setButtonState(5, false);

    if(t=='G')
      gp.setButtonState(6, true);
    if(t=='g')
      gp.setButtonState(6, false);

    if(t=='H')
      gp.setButtonState(7, true);
    if(t=='h')
      gp.setButtonState(7, false);

    if(t=='I')
      gp.setButtonState(8, true);
    if(t=='i')
      gp.setButtonState(8, false);

    if(t=='J')
      gp.setButtonState(9, true);
    if(t=='j')
      gp.setButtonState(9, false);

    if(t=='K')
      gp.setButtonState(10, true);
    if(t=='k')
      gp.setButtonState(10, false);

    if(t=='L')
      gp.setButtonState(11, true);
    if(t=='l')
      gp.setButtonState(11, false);

    if(t=='M')
      gp.setButtonState(12, true);
    if(t=='m')
      gp.setButtonState(12, false);

    if(t=='N')
      gp.setButtonState(13, true);
    if(t=='n')
      gp.setButtonState(13, false);
    
  }
  
  delay(10);        // delay in between reads for stability
}
