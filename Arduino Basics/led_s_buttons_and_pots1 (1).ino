/*
3-LED Blink

int greenLed = 9; // set pin 9 to a variable

The following code turns a set of 3 LEDs on and off in a sequential pattern

By Louis Ortiz

*/

int greenLed = 9;
int yellowLed = 10;
int redLed = 11; // create global variable for out LEDs
int time= 600;
int buttonA = 2;
int buttonB = 4;
int buttonC = 7;
int buttonD = 5
void setup()
{
  pinMode(greenLed, OUTPUT); // set green LED to a output
  pinMode(yellowLed, OUTPUT); // set yellow LED to a output
  pinMode(redLed, OUTPUT); // set red LED to a output
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(buttonD, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(buttonA) == LOW) {
    analogWrite (greenLed,100);
  }
  else {
    digitalWrite(greenLed,LOW);
  }
  if (digitalRead(buttonB) == LOW) {
    analogWrite (yellowLed,100);
  }
  else {
    digitalWrite(yellowLed,LOW);
  }
  if (digitalRead(buttonC) == LOW) {
    analogWrite (redLed,100);
  }
  else {
    digitalWrite(redLed,LOW);
  }
  if (digitalRead(buttonD) == LOW) {
    analogWrite (yellowLed,100)(greenLed,100)(redLed,100);
  }
  else {digitalWrite(redLed,Low)(greenLed,Low)(yellowLed,Low);
    
  
}