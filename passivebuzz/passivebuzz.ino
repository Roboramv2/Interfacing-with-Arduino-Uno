int buzzer = 3; // set the buzzer control digital IO pin
int del;
int tim;
int ind;

void makesound(float del, int tim) {
  ind = int(tim/(del*2));
  del = int(del*1000);
  for (int i = 0; i < ind; i++) {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(del);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(del);
  }  
}

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
//  makesound(0.1, 1000);
//  makesound(0.5, 1000);
//  makesound(1.0, 1000);
//  makesound(1.5, 1000);
//  makesound(2.0, 1000);
//  makesound(2.5, 1000);
//  makesound(3.0, 1000);
//  makesound(3.6, 1000);
//  makesound(4.3, 1000);
//  makesound(5.0, 1000);

  for (float i=0.1; i<5; i=i+0.05) {
    makesound(i, 1000);
    Serial.println(i);
  }
}
