//define pin numbers


const int redLed = 13;
const int trigger = 10;
const int echo = 9;


//define other variables
long duration;
int distance;

void setup(){
  pinMode (redLed, OUTPUT);
  pinMode (trigger, OUTPUT);
  pinMode (echo, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  duration = pulseIn(echo, HIGH);
  distance = duration* 0.034/2;
              
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("cm");
        
    Serial.println(" cm");
  
   if(distance <75){
  digitalWrite(redLed, HIGH);
  }
  else {
    digitalWrite (redLed, LOW);
    } 
  }
              
              
  