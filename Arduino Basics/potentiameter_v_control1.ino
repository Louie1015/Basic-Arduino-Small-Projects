/*
3-LED Blink

int greenLed = 9; // set pin 9 to a variable

The following code turns a set of 3 LEDs on and off in a sequential pattern

By Louis Ortiz

*/

int greenLed = 9;
int yellowLed = 10;
int redLed = 11; // create global variable for out LEDs
int buttonA = 2;
int buttonB = 4;
int buttonC = 7;
int potPin = A0;
int potSensorValue = 0;
int ledWait = 500;
int ledLevel = 0;

void setup()
{
  pinMode(greenLed, OUTPUT); // set green LED to a output
  pinMode(yellowLed, OUTPUT); // set yellow LED to a output
  pinMode(redLed, OUTPUT); // set red LED to a output
  pinMode(buttonA, INPUT_PULLUP);
  pinMode(buttonB, INPUT_PULLUP);
  pinMode(buttonC, INPUT_PULLUP);
  pinMode(potPin, INPUT_PULLUP);
}

void loop()
{
  
  potSensorValue = analogRead(potPin);
  
  ledLevel = map(potSensorValue, 0, 1023, 0, 1000);
  
  digitalWrite(greenLed, ledLevel); 
  delay(ledWait);
  
  digitalWrite(yellowLed, ledLevel); 
  delay(ledWait);
  
  digitalWrite(redLed, ledLevel); 
  delay(ledWait);
  
  digitalWrite(greenLed, LOW); 
  delay(ledWait);
  
  digitalWrite(yellowLed, LOW); 
  delay(ledWait);
  
  digitalWrite(redLed, LOW); 
  delay(ledWait);
      }