#include <dht.h> //dht library also works for ky-015

//Connections: S pin to A0, Vcc to +3.3V or +5V, Gnd to Ground.

#define dht_apin A0 // ky-015 outputs analog readings
 
dht DHT;
 
void setup(){
 
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("KY-015 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}
 
void loop(){
  //Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(2000);//sensor needs 2 seconds before accessing again.
}
