# Interfacing with Arduino Uno
![Badge](https://img.shields.io/badge/Components%20Covered-8-green)

***

### Format:

For each component: code, picture, and output are given.

### Components Covered:

1. KY-015: (folder named dht)
    * Humidity and Temperature Sensor
    * [Datasheet](https://datasheetspdf.com/pdf-file/1401995/Joy-IT/KY-015/1)

2. HC-SR04: (folder named ultrasonic)
    * Measure distance using reflection of sound
    * [Datasheet](https://datasheetspdf.com/pdf-file/1380136/ETC/HC-SR04/1)

3. SG-90: (folder named servo)
    * Servo motor for controlled rotation
    * [Datasheet](http://www.ee.ic.ac.uk/pcheung/teaching/DE1_EE/stores/sg90_datasheet.pdf)

4. KY-018: (folder named photoresistor)
    * Photoresistor for detecting presence or absence of light
    * [Datasheet](https://datasheetspdf.com/pdf-file/1402029/Joy-IT/KY-018/1)

5. KY-039: (folder named heartbeat)
    * Heartbeat sensor that uses IR waves to sense pulse at fingertip
    * [Datasheet](https://www.thegeekpub.com/wiki/sensor-wiki-ky-039-heartbeat-sensor/)

6. HC-06: (folder named btmodule)
    * Slave-only bluetooth module for arduino, with 4 pins.
    * Works on 3.3 voltage so must use a 2/3 voltage divider for the RX terminal (1kohm, 2kohm).
    * [Datasheet](https://components101.com/wireless/hc-06-bluetooth-module-pinout-datasheet)

7. NEMA-17: (folder named nema17)
    * 4.kg-cm 12-35V steper motor.
    * 4 pin, controlled with a A4988 driver board.
    * Video and connections in folder.

8. KY-006: (folder named passivebuzzer)
    * Buzzer with variable frequency outputs.
    * Tone is modified through a PWM input from arduino.
    * Connection information and image in folder.

9. GY-521: (folder named gy521)
    * The whole package, has everything.
    * Temperature, 3-axis gyroscope, 3-axis accelerometer.
    * Connections provided.