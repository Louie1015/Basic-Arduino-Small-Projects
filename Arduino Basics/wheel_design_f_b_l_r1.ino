/*
  2.2 DC Motor and H-Bridge with 2 buttons
  
  Press A button the motor spins CCW
  if not pressed CW
  
  By Louis O.
  
*/

int buttonA = 4; // Button A makes us go forward
int buttonB = 2; // Button B makes us go backward
int buttonC = 8; // Button C makes us go left
int buttonD = 9; // Button D makes us go right
int fwdPinM1 = 6; //sets forward motor pin
int revPinM1 = 5; //sets reverse motor pin
int fwdPinM2 = 11; //sets forward motor pin
int revPinM2 = 10; //sets reverse motor pin

void setup()
{
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(buttonD, INPUT_PULLUP);
  pinMode(fwdPinM1, OUTPUT);
  pinMode(revPinM1, OUTPUT);
  pinMode(fwdPinM2, OUTPUT);
  pinMode(revPinM2, OUTPUT);

}

void loop()
{
  if(digitalRead(buttonA) == LOW) {
    analogWrite(fwdPinM1, 255);
    analogWrite(revPinM1, 0);
    analogWrite(fwdPinM2, 255);
    analogWrite(revPinM2, 0);
  }
  else {
    analogWrite(fwdPinM1, 0);
    analogWrite(revPinM1, 0);
    analogWrite(fwdPinM2, 0);
    analogWrite(revPinM2, 0);
 }  
  if(digitalRead(buttonB) == LOW) {
    analogWrite(fwdPinM1, 0);
    analogWrite(revPinM1, 255);
    analogWrite(fwdPinM2, 0);
    analogWrite(revPinM2, 255);
  }
  else {
    analogWrite(fwdPinM1, 0);
    analogWrite(revPinM1, 0);
    analogWrite(fwdPinM2, 0);
    analogWrite(revPinM2, 0);
 }   
  if(digitalRead(buttonC) == LOW) {
    analogWrite(fwdPinM1, 0);
    analogWrite(revPinM1, 255);
    analogWrite(fwdPinM2, 255);
    analogWrite(revPinM2, 0);
  }
  else {
    analogWrite(fwdPinM1, 0);
    analogWrite(revPinM1, 0);
    analogWrite(fwdPinM2, 0);
    analogWrite(revPinM2, 0);
  }
    if(digitalRead(buttonD) == LOW) {
    analogWrite(fwdPinM1, 255);
    analogWrite(revPinM1, 0);
    analogWrite(fwdPinM2, 0);
    analogWrite(revPinM2, 255);
  }
  else {
    analogWrite(fwdPinM1, 0);
    analogWrite(revPinM1, 0);
    analogWrite(fwdPinM2, 0);
    analogWrite(revPinM2, 0);

  }
}