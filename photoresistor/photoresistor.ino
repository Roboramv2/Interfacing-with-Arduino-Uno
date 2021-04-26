int sensorPin = A3; //define analog pin 2
int value = 0; 

void setup() {
  Serial.begin(9600); 
} 

void loop() {
  value = analogRead(sensorPin); 
  Serial.println(value);
  delay(100); 
}
