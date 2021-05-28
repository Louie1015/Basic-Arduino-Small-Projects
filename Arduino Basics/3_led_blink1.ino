/*
3-LED Blink

int greenLed = 9; // set pin 9 to a variable

The following code turns a set of 3 LEDs on and off in a sequential pattern

By Louis Ortiz

*/

int greenLed = 9;
int yellowLed = 10;
int redLed = 11; // create global variable for out LEDs
int time = 600;

void setup()
{
  pinMode(greenLed, OUTPUT); // set green LED to a output
  pinMode(yellowLed, OUTPUT); // set yellow LED to a output
  pinMode(redLed, OUTPUT); // set red LED to a output
}

void loop()
{
  digitalWrite(greenLed, 180); // turn on green LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(greenLed, LOW); // turn off green LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(yellowLed, 255); // turn on yellow LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(yellowLed, LOW); // turn off yellow LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, 170); // turn on red LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, LOW); // turn off red LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(greenLed, 180); // turn off green LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(yellowLed, 255); // turn off yellow LED
  delay(time); // Wait for 1000 millisecond(s)
  digitalWrite(redLed, 170); // turn off red LED
  delay(time); // Wait for 1000 millisecond(s)
}