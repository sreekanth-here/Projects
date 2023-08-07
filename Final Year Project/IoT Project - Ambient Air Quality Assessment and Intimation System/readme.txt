- Monitoring.ino file is created and it has been used to store the setup function and the looping function for the IoT module. 
The Monitoring.ino file is the main file that contains the constraints for each of the sensor's thresholds value.
I used to control flow to limit the threshold value for each sensor

- In global.h file, I included the SoftwareSerial library to define the receiver and transmitter communication channel between Arduino and the sensor and 
I also defined all the sensors in this file.

- I created a gsm.h file to define and initiate the gsm module.

- IoT Modules and Sensors used in the project:
1. Arduino UNO (IoT Module)
2. SIM800C (GSM Modules)
3. DHT11 (Temperature and Humidity Sensor)
4. MQ2 (Gas Sensor)
5. MAX4466 (Voice Sensor)
6. Pulse Sensor
7. Buzzer
