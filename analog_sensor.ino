
const int analogInPin = A9;  // Analog input pin that the potentiometer is attached to
int sensorValue = 0;        // value read from the pot
int led = 7;
 
void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
 pinMode(9, INPUT_PULLUP); 
 pinMode(led, OUTPUT); 

 
}
 
void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin); 
  Serial.print("sensor = " );                       
  Serial.println(sensorValue);      

  if (sensorValue > 275)
  {
    digitalWrite(led, HIGH);
    delay(500);                 
  }
  if (sensorValue < 275)
  {
    digitalWrite(led, LOW);
    delay(500);
  }
}
